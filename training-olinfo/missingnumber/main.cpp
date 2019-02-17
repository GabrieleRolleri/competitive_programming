#include <bits/stdc++.h>

using namespace std;

int main(){

    int N;
    cin>>N;
    vector<bool> check(N+1, false);
    int temp;
    for(int i=1; i<=N; i++){
        cin>>temp;
        check.at(temp)=true;
    }
    for(int i=1; i<=N; i++){
        if(!check.at(i))
            cout<<i;
    }

    return 0;
}