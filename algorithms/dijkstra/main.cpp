#include <bits/stdc++.h>

using namespace std;

typedef pair<int, int> pi;

bool compare(pi a, pi b){
    return a.first<b.first;
}

int main(){

    ifstream in;
    in.open("input.txt");
    ofstream out;
    out.open("output.txt");

    int V, E;
    in>>V>>E;
    forward_list<pi> adj[V];
    priority_queue<pi> pq;
    bool VI[V];
    int D[V];
    int U[V];

    for(int i=0; i<V; ++i){
        VI[i]=false;
        D[i]=INT_MAX-1000000;
        U[V]=-1;
    }

    int T1, T2, T3;
    for(unsigned int i=0; i<E; ++i){
        in>>T1>>T2>>T3;
        adj[T1].push_front(pi(T2, T3));
    }

    pq.push(pi(0, 0));
    D[0]=0;

    while(!pq.empty()){
        int currentPriority=pq.top().first, currentNode=pq.top().second;
        pq.pop();
        if(!VI[currentNode]) {
            VI[currentNode] = true;
            for(auto it=adj[currentNode].begin(); it!=adj[currentNode].end(); it++){
                int neighbourDistance=it->second, neighbourNode=it->first;
                if(D[currentNode]+neighbourDistance<D[neighbourNode]) {
                    D[neighbourNode] = D[currentNode] + neighbourDistance;
                    U[neighbourNode] = currentNode;
                    pq.push(pi(-D[neighbourNode], neighbourNode));
                }
            }
        }
    }
    for(int i=0; i<V; ++i){
        cout<<U[i]<<' ';
    }
    for(int i=0; i<V; ++i){
        out<<"Node "<<i<<" is at distance "<<D[i]<<" through: ";
        int u=i;
        while(u!=0){
            out<<u<<'-';
            u=U[u];
        }
        out<<'0'<<'\n';
    }





    return 0;
}