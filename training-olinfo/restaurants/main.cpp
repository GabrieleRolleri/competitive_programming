#include <bits/stdc++.h>

using namespace std;

int main(){

    int N;
    cin>>N;
    vector<int> votes(N, 0);
    int T;
    for(int i=0; i<N; ++i){
        for(int j=0; j<N+1; ++j){
            cin>>T;
            if(T!=-1){
                votes[i]+=T;
            }
        }
        int winner=0;
        for(int j=0; j<N; ++j){
            if(votes[j]>votes[winner]){
                winner=j;
            }
        }
        cout<<winner+1<<'\n';
    }




    return 0;
}