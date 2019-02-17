#include <bits/stdc++.h>

int main() {
    std::ifstream in;
    in.open("input.txt");
    std::ofstream out;
    out.open("output.txt");

    int N, S=0;
    in>>N;

    std::list<int> graph[N];
    int t, capo;
    for(int i=0; i<N; i++){
        in>>t;
        if(t!=-1)
            graph[t].push_back(i);
        else
            capo=i;
    }
    std::queue<int> BFS;
    std::vector<int> livello(N);
    livello.at(capo)=0;

    BFS.push(capo);
    int tN=N, v;

    while(!BFS.empty()){
        v=BFS.front();
        BFS.pop();
        for(auto it=graph[v].begin(); it!=graph[v].end(); it++){
            BFS.push(*it);
            livello.at(*it)=livello.at(v)+1;
        }
    }

    std::vector<int> nodiLiv(N, 0);
    for(auto it=livello.begin(); it!=livello.end(); it++){
        nodiLiv.at(*it)++;
    }
    int tem=1;
    for(auto it=nodiLiv.begin()+1; it!=nodiLiv.end(); it++){
        std::cout<<"S: "<<S<<" nodiLiv: "<<*it<<" tem: "<<tem<<'\n';
        S+=tem*(*it);
        tem+=*it;
    }
    //std::cout<<S;







    return 0;
}