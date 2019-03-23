#include <bits/stdc++.h>

using namespace std;

string compress(string);

int main(){
    string S1, S2, S3;
    cin>>S1>>S2>>S3;
    string C1=compress(S1), C2=compress(S2), C3=compress(S3);
    //cout<<C1<<'\n'<<C2<<'\n'<<C3<<'\n';
    if(C1!=C2||C1!=C3){
        cout<<"IMPOSSIBLE";
        return 0;
    }
    int lC=C1.length();
    vector<vector<int>> L(lC);
    for(int i=0; i<lC; ++i){
        L[i].resize(3, 0);
    }
    int N=S1.length(), sez=0;
    for(int i=0; i<N; ++i){
        while(S1[i+1]==S1[i]&&i<N){++i; ++L[sez][0];}
        ++sez;
    }
    N=S2.length();
    sez=0;
    for(int i=0; i<N; ++i){
        while(S2[i+1]==S2[i]&&i<N){++i; ++L[sez][1];}
        ++sez;
    }
    N=S3.length();
    sez=0;
    for(int i=0; i<N; ++i){
        while(S3[i+1]==S3[i]&&i<N){++i; ++L[sez][2];}
        ++sez;
    }
    for(int i=0; i<lC; ++i){
        sort(L[i].begin(), L[i].end());
        for(int j=0; j<L[i][1]+1; ++j){
            cout<<C1[i];
        }
    }


}

string compress(string a){
    string c;
    int N=a.length();
    for(int i=0; i<N; ++i){
        c+=a[i];
        while(a[i+1]==a[i]&&i<N){++i;}
    }
    return c;
}