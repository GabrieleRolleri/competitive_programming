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
    ifstream in;
    in.open("input.txt");
    ofstream out;
    out.open("output.txt");
    int N, M;
    cin>>N>>M;
    const int maxN=1000010;
    vll num(maxN);
    num[0]=-1;
    num[1]=0;
    ll somma=-1;
    CYC(i, 1, maxN-1){
        num[i+1]=(num[i]*i-somma)%M;
        if(num[i+1]<0){
            num[i+1]+=M;
        }
        somma+=num[i];
    }
    cout<<num[N];


    return 0;
}
