#include <bits/stdc++.h>
#define CYC(i, a, b) for(int i=a; i<b; i++)
#define CYCI(i, a, b) for(auto i=a; i!=b; ++i)

using namespace std;

typedef vector<int> vi;
typedef vector<long long> vll;
typedef long long ll;
typedef pair<int, int> pii;
typedef pair<long, long> pll;

int mod(int M, int Q){
    M%=Q;
    if(M<0)
        M+=Q;
    return M;

}

void valuta(int N, int C[], int L[], int P[]){
    bool allTheSame=true;
    CYC(i, 0, N){
        C[i]-=L[i];
        if(C[i]!=0){
            allTheSame=false;
        }
    }
    if(allTheSame){
        CYC(i, 0, N){
            P[i]=1;
        }
        return;
    }
    int possibleStart=0, F=0;
    for(int i=0; i<N; ++i){
        F+=C[i];
        cout<<F<<' ';
        if(F<0){
            possibleStart=i+1;
        }
    }



    CYC(i, 0, N){
        if(i==possibleStart){
            P[i]=true;
        } else
            P[i]=false;
    }



}





int main(){
    ifstream in;
    in.open("input.txt");
    ofstream out;
    out.open("output.txt");
    int N;
    in>>N;
    int C[N], L[N], P[N];
    CYC(i, 0, N){
        in>>C[i]>>L[i];
    }
    valuta(N, C, L, P);
    cout<<endl;
    CYC(i, 0, N){
        cout<<P[i]<<' ';
    }


    return 0;
}
