#include <bits/stdc++.h>
#define CYC(i, a, b) for(int i=a; i<b; i++)
#define CYCI(i, a, b) for(auto i=a; i!=b; ++i)

using namespace std;

typedef vector<int> vi;
typedef vector<long long> vll;
typedef long long ll;
typedef pair<int, int> pii;
typedef pair<long, long> pll;
typedef bitset<20> luci;



int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int N, K;
    cin>>N>>K;
    luci init;
    bool temp;
    CYC(i, 0, N){
        cin>>temp;
        init[i]=temp;
    }
    vi buttons[N];
    int temp1;
    CYC(i, 0, N){
        cin>>temp1;
        buttons[i].resize(temp1);
        CYC(j, 0, temp1)
            cin>>buttons[i][j];
    }
    luci final;
    final[K-1]=true;
    vi level(2000000, 0);
    queue<luci> BFS;
    BFS.push(init);
    luci t, v;
    bool fine=true;
    if(init==final){
        fine=false;
    }
    while(!BFS.empty()&&fine){
        v=BFS.front();
        BFS.pop();
        CYC(i, 0, N){
            if(!v[i]){
                t=v;
                t[i]=true;
                CYCI(it, buttons[i].begin(), buttons[i].end()){
                    t[(*it)-1]=false;
                }
                if(level.at(t.to_ulong())==0) {
                    BFS.push(t);
                    level.at(t.to_ulong())=level.at(v.to_ulong())+1;
                    if(t==final){
                        fine=false;
                    }
                }
            }
        }
    }
    cout<<level.at(final.to_ulong());
    return 0;
}
