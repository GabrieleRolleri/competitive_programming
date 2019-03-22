#include <bits/stdc++.h>

using namespace std;

char kab[1000][1000];

int main(){

    int N, M, S=1;
    cin>>N>>M;
    string T;
    for(int i=0; i<N; ++i){
        cin>>T;
        for(int j=0; j<M; ++j)
            kab[i][j]=T[j];
    }


    int tempS=1;
    for(int i=0; i<N; ++i){
        for(int j=1; j<M; ++j){
            if(kab[i][j]!=kab[i][j-1]){
                S=max(tempS, S);
                tempS=1;
            }
            else{
                ++tempS;
            }
        }
        S=max(tempS, S);
    }


    tempS=1;
    for(int i=0; i<M; ++i){
        for(int j=1; j<N; ++j){
            if(kab[j][i]!=kab[j-1][i]){
                S=max(tempS, S);
                tempS=1;
            }
            else{
                ++tempS;
            }
        }
        S=max(tempS, S);
    }


    int i, j, k;
    for(j=0; j<M-1; ++j){
        tempS=1;
        i=1, k=j;
        while(k>=0&&i<N){
            //cout<<kab[i][k];
            if(kab[i][k]!=kab[i-1][k+1]){
                S=max(tempS, S);
                tempS=1;
            }
            else{
                ++tempS;
            }
            ++i;
            --k;
        }
        S=max(tempS, S);
    }


    for(i=2; i<N; ++i){
        tempS=1;
        j=M-2;
        k=i;
        while(j>=0&&k<N){
            //cout<<kab[k][j];
            if(kab[k][j]!=kab[k-1][j+1]){
                S=max(tempS, S);
                tempS=1;
            }
            else{
                ++tempS;
            }
            ++k;
            --j;
        }
        S=max(tempS, S);

    }









    for(j=M-1; j>0; --j){
        tempS=1;
        i=1, k=j;
        while(k<M&&i<N){
            //cout<<kab[i][k];
            if(kab[i][k]!=kab[i-1][k-1]){
                S=max(tempS, S);
                tempS=1;
            }
            else{
                ++tempS;
            }
            ++i;
            ++k;
        }
        S=max(tempS, S);
    }


    for(i=2; i<N; ++i){
        tempS=1;
        j=1;
        k=i;
        while(j<M&&k<N){
            //cout<<kab[k][j];
            if(kab[k][j]!=kab[k-1][j-1]){
                S=max(tempS, S);
                tempS=1;
            }
            else{
                ++tempS;
            }
            ++k;
            ++j;
        }
        S=max(tempS, S);

    }

    cout<<S;
    return 0;
}