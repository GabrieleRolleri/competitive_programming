#include <bits/stdc++.h>
#define CYC(i, a, b) for(int i=a; i<b; i++)
#define CYCI(i, a, b) for(auto i=a; i!=b; ++i)

using namespace std;

typedef vector<int> vi;
typedef vector<long long> vll;
typedef long long ll;
typedef pair<int, int> pii;
typedef pair<long, long> pll;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll N;
    cin>>N;
    vector<pair<ll, bool>> tempi(2*N);
    CYC(i, 0, N){
        cin>>tempi[i].first;
        tempi[i].second=true;
        cin>>tempi[i+N].first;
        tempi[i+N].second=false;
    }
    sort(tempi.begin(), tempi.end());
    ll P= 1, S=0;
    CYC(i, 0, 2*N){
        if(tempi[i].second){
            S+=P;
            P++;
        }
        else{
             S+=(P-1);
             P--;
        }
    }

    cout<<S;

    return 0;
}
