#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

ll percorri(int, ll, ll*, ll*);

int main(){

    ifstream in;
    in.open("input.txt");
    ofstream out;
    out.open("output.txt");

    int N, L;
    in>>N>>L;
    ll D[10000000];
    ll P[10000000];
    for(int i=0; i<N; ++i){
        in>>D[i];
    }
    for(int i=0; i<N; ++i){
        in>>P[i];
    }

    cout<<percorri(N, L, D, P);


    return 0;
}

ll percorri(int N, ll L, ll* D, ll* P){
    int S;

    for(int i=0; i<N; ++i){




    }

    return S;
}
