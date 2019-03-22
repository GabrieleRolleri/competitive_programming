#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<int> vi;

int main(){
    ll N, S=1, T, precT=1;
    cin>>N;
    for(int i=0; i<N; i++){
        cin>>T;
        S+=precT*T;
        precT*=T;
    }

    cout<<S;
    return 0;
}