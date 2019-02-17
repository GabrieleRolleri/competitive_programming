#include <bits/stdc++.h>

using namespace std;

int A;
int albero[105][105];
int memo[105][105];


int somma(int i, int j)
{
    //cout<<i<<' '<<j<<'\n';
    int t;
    if(memo[i][j]!=-1)
        return memo[i][j];
    if(i==A-1)
        t=albero[i][j];
    else
        t=max(somma(i+1, j+1), somma(i+1, j))+albero[i][j];
    memo[i][j]=t;
    return t;
}

int main(){

    ifstream in;
    in.open("input.txt");
    ofstream out;
    out.open("output.txt");

    int S=0;
    in>>A;
    int temp;
    for(int i=0; i<A; i++)
        for(int j=0; j<=i; j++)
            in>>albero[i][j];
    for(int i=0; i<A; i++)
        for(int j=0; j<=i; j++)
            memo[i][j]=-1;
    S=somma(0, 0);
    out<<S;

}