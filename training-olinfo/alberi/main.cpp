#include <bits/stdc++.h>

using namespace std;

void visita(int, int*, int*, int*);

int main(){

    ifstream in;
    in.open("input.txt");
    ofstream out;
    out.open("output.txt");


    int N;
    in>>N;
    int PRE[1000000], POST[1000000], SIMM[1000000];
    for(int i=0; i<N; ++i){
        cin>>PRE[i];
    }
    for(int i=0; i<N; ++i){
        cin>>POST[i];
    }
    visita(N, PRE, POST, SIMM);
    for(int i=0; i<N; ++i){
        cout<<SIMM[i]<<' ';
    }
    return 0;
}

void visita(int N, int *PRE, int *POST, int *SIMM){




}