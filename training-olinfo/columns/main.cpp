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
    vi L(10001);
    vi L2(20001, 0);
    int N, M, T;
    cin>>N>>M>>T;
    int temp;
    CYC(i, 0, N){
        cin>>temp;
        L[temp]++;
    }
    CYC(i, 1, 10001){
        L2[i]+=L[i];
        L2[2*i]+=L[i]/2;
        CYC(j, i+1, 10001){
            L2[i+j]+=min(L[i], L[j]);
        }
    }
    CYC(i, T, 20001){
        if(L2[i]>=M){
            cout<<i;
            return 0;
        }
    }
    cout<<"IMPOSSIBLE";
    return 0;
}
