#include <bits/stdc++.h>
#define CYC(i, a, b) for(int i=a; i<b; i++)
#define CYCI(i, a, b) for(auto i=a; i!=b; ++i)



using namespace std;

typedef vector<int> vi;
typedef vector<long long> vll;
typedef long long ll;
typedef pair<int, int> pii;
typedef pair<long, long> pll;

const int maxN=200;

int main(){
    ifstream in;
    in.open("input.txt");
    ofstream out;
    out.open("output.txt");
    int N;
    cin>>N;
    vi capacity={2, 4, 5, 7};
    vi available(4);
    vi cost(4);
    CYC(i, 0, 4){
        cin>>available[i]>>cost[i];
    }
    vi dp[maxN];
    CYC(i, 0, maxN){
        dp[i].resize(5);
        dp[i][0]=INT_MAX-10000000;
        fill(dp[i].begin()+1, dp[i].end(), 0);
    }
    CYC(i, 0, 5){
        dp[0][i]=0;
    }
    CYC(i, 0, 101){
        CYC(j, 0, 4){
            if(dp[i][0]+cost[j]<dp[i+capacity[j]][0]&&dp[i][j+1]+1<=available[j]){
                dp[i+capacity[j]][0]=dp[i][0]+cost[j];
                CYC(k, 0, 4){
                    dp[i+capacity[j]][k+1]=dp[i][k+1];
                }
                dp[i+capacity[j]][j+1]++;
            }
        }
    }
    cout<<dp[N][0];



    return 0;
}


