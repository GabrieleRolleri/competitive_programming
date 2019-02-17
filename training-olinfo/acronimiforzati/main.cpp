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
    const int MOD=1000000007;
    string A, S;
    cin>>A>>S;
    vll pre(A.size(), 0);
    CYC(i, 0, S.size()){
        CYC(j, 0, A.size()){
            if(j==0) {
                if (A[j] == S[i]&&j<=i) {
                    //pre[j]=(pre[j]%MOD+1)%MOD;
                    pre[j]++;
                }
            }
            else {
                if (A[j] == S[i]&&j<=i) {
                    //pre[j] =((pre[j-1]%MOD) + (pre[j]%MOD))%MOD;
                    pre[j]+=pre[j-1];
                }
            }
        }
    }

    cout<<pre[A.size()-1];

    return 0;
}
