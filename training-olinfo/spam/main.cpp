#include <bits/stdc++.h>
#define CYC(i, a, b) for(int i=a; i<b; i++)
#define CYCI(i, a, b) for(auto i=a; i!=b; ++i)

using namespace std;

typedef vector<int> vi;
typedef vector<long long> vll;
typedef long long ll;
typedef pair<int, int> pii;
typedef pair<long, long> pll;

const int d=256;
const int q=2147470123;
vll hv(20);

int hashing(string);

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    CYC(i, 1, 20){
        hv[i]=(hv[i-1]*d)%q;
    }
    int B, G;
    cin>>B;
    set<int> hashB;
    set<int> hashG;
    string temp;
    CYC(i, 0, B){
        cin>>temp;
        hashB.insert(hashing(temp));
    }
    cin>>G;
    CYC(i, 0, G){
        cin>>temp;
        hashG.insert(hashing(temp));
    }
    int E, N;
    int gE=0, bE=0;
    cin>>E;
    CYC(i, 0, E){
        cin>>N;
        int gN=0, bN=0;
        CYC(j, 0, N){
            cin>>temp;
            if(hashB.find(hashing(temp))!=hashB.end()){
                bN++;
            }
            if(hashG.find(hashing(temp))!=hashG.end()){
                gN++;
            }
        }
        if(gN==0&&bN!=0){
            bE++;
        }
        if(bN==0&&gN!=0){
            gE++;
        }

    }
    cout<<bE<<' '<<gE;

    return 0;
}

int hashing(string s){
    int S=s.size();
    int d=256;
    ll h=hv[S];
    int hashS=0;
    for(int i=0; i<S; i++){
        hashS=(d*hashS+s[i])%q;
    }

    return hashS;
}