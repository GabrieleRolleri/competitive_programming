#include <bits/stdc++.h>

using namespace std;

typedef pair<long long, long long> pll;
typedef vector<int> vi;
typedef long long ll;

int main(){

    ifstream in;
    in.open("input.txt");
    ofstream out;
    out.open("output.txt");

    int N, M, S, E;
    in>>N>>M>>S>>E;

    forward_list<pll> adj[N+1];
    priority_queue<pll> pq;
    vector<ll> D(N+1, LONG_LONG_MAX-1000000);
    vector<bool> V(N+1, false);


    int T1, T2, T3;
    for(int i=0; i<M; ++i){
        in>>T1>>T2>>T3;
        adj[T1].push_front(pll(T2, T3));
    }

    pq.push(pll(0, S));
    D[S]=0;

    while(!pq.empty()){
        ll cN=pq.top().second, cP=pq.top().first;
        pq.pop();
        if(!V[cN]){
            V[cN]=true;
            for(auto& it : adj[cN]){
                ll fN=it.first, fW=it.second;
                if(D[cN]+fW<D[fN]) {
                    D[fN] = D[cN] + fW;
                    pq.push(pll(-D[fN], fN));
                }
            }
        }
    }

    out<<D[E];

    return 0;
}