#include <bits/stdc++.h>
const int MOD=32749;
using namespace std;

vector<vector<int>> matPow(vector<vector<int>>, int);
vector<vector<int>> matMul(vector<vector<int>>, vector<vector<int>>);

int main(){
    int N;
    cin>>N;
    if(N==0) {
        cout << 1 <<' '<< 0;
        return 0;
    }
    vector<vector<int>> X(2);
    X[0].push_back(3);
    X[0].push_back(2);
    X[1].push_back(3);
    X[1].push_back(3);
    vector<vector<int>> I(2);
    I[0].push_back(1);
    I[1].push_back(0);


    vector<vector<int>> S;
    S=matMul(matPow(X, N), I);
    for(int i=0; i<2; i++){
        cout<<S[i][0]<<' ';
    }
    return 0;
}

vector<vector<int>> matPow(vector<vector<int>> A, int N){
    if(N==1)
        return A;
    else
        if(N%2)
            return (matMul(matPow(A, N-1), A));
        else{
            vector<vector<int>> T=matPow(A, N/2);
            return (matMul(T, T));
        }
}
vector<vector<int>> matMul(vector<vector<int>> A, vector<vector<int>> B){
    int DIMAy=A.size();
    int DIMAx=A[0].size();
    int DIMBx=B[0].size();
    vector<vector<int>> AB;
    AB.resize(DIMAy);
    for(int i=0; i<DIMAy; i++){
        AB[i].resize(DIMBx);
        for(int j=0; j<DIMBx; j++)
            AB[i][j]=0;
    }
    for(int i=0; i<DIMAy; i++){
        for(int j=0; j<DIMBx; j++){
            for(int k=0; k<DIMAx; k++){
                AB[i][j]=(( AB[i][j] % MOD )+( ( ( A[i][k] % MOD ) * ( B[k][j] % MOD ) )%MOD))%MOD;
            }
        }
    }
    return AB;
}
