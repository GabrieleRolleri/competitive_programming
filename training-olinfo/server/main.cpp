#include <bits/stdc++.h>

using namespace std;

vector<int> tem;
int memo[205][205][205];
int T, K, N;

int rec(int i, int p, int r){
    if(memo[i][p][r]!=-1)
        return memo[i][p][r];
    int s=3600*205;
    if(i==N-1)
        if(p==N)
            return p*(T-tem[i]);
        else
            if(r>0)
                return (p+1)*(T-tem[i]);
            else
                return 3600*205;
    else
        if(r<=0)
            if(p==N)
                return p*(T-tem[i]);
            else
                return 3600*205;


    int temp;
    if(p>i){
        temp = rec(i + 1, p, r) + p * (tem[i + 1] - tem[i]);
        if (temp < s)
            s = temp;
    }
    else {
        for (int j = p + 1; j <= N; j++) {
            temp = rec(i + 1, j, r - 1) + j * (tem[i + 1] - tem[i]);
            if (temp < s)
                s = temp;
        }
    }
    memo[i][p][r]=s;
    return s;
}

int main(){
    for(int i=0; i<205; i++)
        for(int j=0; j<205; j++)
            for(int k=0; k<205; k++)
                memo[i][j][k]=-1;
    ifstream in;
    in.open("input.txt");
    ofstream out;
    out.open("output.txt");

    in>>T>>K>>N;
    tem.resize(N);
    for(int i=0; i<N; i++)
        in>>tem.at(i);



    out<<rec(0, 0, K)<<'\n';

    return 0;
}