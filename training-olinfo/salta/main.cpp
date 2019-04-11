#include <bits/stdc++.h>

using namespace std;

int main(){

    ifstream in;
    in.open("input.txt");
    ofstream out;
    out.open("output.txt");


    int N;
    in>>N;
    vector<int> V(N+1);
    for(int i=1; i<N+1; ++i){
        in>>V[i];
    }
    vector<bool> vis(N+1, 0);
    int C=1;
    while(!vis[C]){
        vis[C]=true;
        C+=V[C];
        C%=N;
        C++;
    }
    int S=0;
    for(int i=1; i<N+1; ++i){
        if(!vis[i])
            ++S;

    }
    out<<S<<'\n';
    for(int i=1; i<N+1; ++i){
        if(!vis[i])
            out<<i<<' ';

    }
    return 0;
}