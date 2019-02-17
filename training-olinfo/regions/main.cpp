#include <bits/stdc++.h>

std::vector<int> figli(int n, std::list<int>*, std::vector<int>*);
std::vector<int> copyVector(std::vector<int>, std::vector<int>);

int main() {
    std::ifstream in;
    in.open("input.txt");
    std::ofstream out;
    out.open("output.txt");

    int N, R, Q;
    in>>N>>R>>Q;

    std::list<int> adj[N+1];  //adjancency list of employees
    std::vector<int> under[N+1];    //sottoposti of every employee
    std::vector<int> reg[R+1];
    int t;
    in>>t;
    reg[t].push_back(1);
    for(int i=2; i<=N; i++){
        in>>t;
        adj[t].push_back(i);
        in>>t;
        reg[t].push_back(i);
    }
    /*
    std::queue<int> BFS;
    std::vector<bool> visited(N+1, 0);
    int v;
    for(int i=1; i<=N; i++){
        BFS.push(i);
        for(int i=0; i<=N; i++)
            visited.at(i)=false;
        while(!BFS.empty()){
            v=BFS.front();
            BFS.pop();
            for(auto it=adj[v].begin(); it!=adj[v].end(); it++){
                if(!visited.at(*it)){
                    visited.at(*it)=true;
                    BFS.push(*it);
                    under[i].push_back(*it);
                }
            }
        }
    }
     */
    figli(1, adj, under);

    for(int i=0; i<N+1; i++){
        std::sort(under[i].begin(), under[i].end());
    }

    int r1, r2, S;
    for(int i=0; i<Q; i++){
        S=0;
        in>>r1>>r2;
        for(auto it=reg[r1].begin(); it!=reg[r1].end(); it++){
            for(auto it2=reg[r2].begin(); it2!=reg[r2].end(); it2++)
                S+=std::binary_search(under[*it].begin(), under[*it].end(), (*it2));
        }
        out<<S<<'\n';
    }


    return 0;
}

std::vector<int> figli(int n, std::list<int>* adj, std::vector<int>* under){
    std::vector<int> r;
    for(auto it=adj[n].begin(); it!=adj[n].end(); it++) {
        //std::cout<<*it<<' ';
        r=copyVector(r, figli(*it, adj, under));

    }
    for(auto it=r.begin(); it!=r.end(); it++)
        under[n].push_back(*it);
    r.push_back(n);
    return r;

}
std::vector<int> copyVector(std::vector<int> a, std::vector<int> b){
    for(auto it=b.begin(); it!=b.end(); it++) {
        a.push_back(*it);
    }
    return a;
}