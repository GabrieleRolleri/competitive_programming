#include <bits/stdc++.h>


void topologicalSort(int , std::vector<bool>*, std::stack<int>*, std::list<int>*);

int main() {
    std::ifstream in;
    in.open("input.txt");
    std::ofstream out;
    out.open("output.txt");

    int N, M, P;
    in>>N>>M>>P;

    std::list<int>  adj[N];
    std::vector<long double> people(N, 0);
    people.at(0)=1;
    int t1, t2;
    for(int i=0; i<M; i++){
        in>>t1>>t2;
        adj[t1].push_back(t2);
    }
    std::vector<bool> visited(N, false);
    std::stack<int> topo;
    for(int i=0; i<N; i++)
        topologicalSort(i, &visited, &topo, adj);
    int v;
    while(!topo.empty()){
        v=topo.top();
        topo.pop();
        for(auto it=adj[v].begin(); it!=adj[v].end(); it++)
            people.at(*it)+=(people.at(v)/adj[v].size());
    }


    int maxI=N-P;
    for(int i=N-P; i<N; i++){
        if(people.at(i)>people.at(maxI))
            maxI=i;
    }
    out<<maxI;



    return 0;
}

void topologicalSort(int v, std::vector<bool>* visited, std::stack<int>* topo, std::list<int>* adj){
        if(!(*visited).at(v)){
            (*visited).at(v)=true;
            for(auto it=adj[v].begin(); it!=adj[v].end(); it++)
                if(!(*visited).at(*it)){
                    (*visited).at(*it);
                    topologicalSort(*it, visited, topo, adj);
                }
            (*topo).push(v);
        }
}




