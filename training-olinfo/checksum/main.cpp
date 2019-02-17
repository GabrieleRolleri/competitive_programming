#include <bits/stdc++.h>
#define CYC(i, a, b) for(int i=a; i<b; i++)
#define CYCI(i, a, b) for(auto i=a; i!=b; i++)

using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef pair<int, int> pi;

void inizializza(int, int);
int controlla(int);


vi fattori;
queue<int> fattoriQ;

void inizializza(int P, int M){
    fattori.resize(M+1);
    CYC(i, 0, M+1){
        fattori[i]=0;
    }
}
int controlla(int C){
    if(C==1){
        return 0;
    }
    int S=0;
    CYC(i, 2, sqrt(C)+1){
        if(!(C%i)){
            fattoriQ.push(i);
            fattoriQ.push(C/i);
            if(fattori[i]!=0){
                S=fattori[i];
            }
            if(fattori[C/i]!=0){
                S=fattori[C/i];
            }
        }
    }
    if(fattori[C]!=0){
        S=fattori[C];
    }
    if(S) {
        while(!fattoriQ.empty()){fattoriQ.pop();}
        return S;
    }
    else {
        while(!fattoriQ.empty()){
            fattori[fattoriQ.front()]=C;
            fattoriQ.pop();
        }
        fattori[C]=C;
        return 0;
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int P, M;
    cin>>P>>M;
    int C[P];
    CYC(i, 0, P){
        cin>>C[i];
    }
    inizializza(P, M);
    CYC(i, 0, P){
        cout<<controlla(C[i])<<' ';
    }

    return 0;
}