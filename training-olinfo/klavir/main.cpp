#include <bits/stdc++.h>
#define CYC(i, a, b) for(int i=a; i<b; i++)
#define CYCI(i, a, b) for(auto i=a; i!=b; ++i)

using namespace std;

typedef vector<int> vi;
typedef vector<long long> vll;
typedef long long ll;
typedef pair<int, int> pii;
typedef pair<long, long> pll;

int N, M;
vi sol;
vi tones;

int solve(int);



int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    const int Q=10007;
    cin>>N>>M;
    tones.resize(M);
    sol.resize(M);
    CYC(i, 0, M){
        cin>>tones[i];
    }
    sol[0]=N;
    cout<<sol[0]<<'\n';
    CYC(i, 1, M){
        int longestSuffixWhichIsAlsoAPrefix=1;



        sol[i]=(sol[i-1]+(N-1)*(N+longestSuffixWhichIsAlsoAPrefix))%Q;
        cout<<sol[i]<<'\n';
    }
    return 0;
}

