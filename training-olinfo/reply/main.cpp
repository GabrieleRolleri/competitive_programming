#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<int> vi;


ll geom(ll n, ll b, ll m)
{
    ll T = 1;
    ll e = b % m;
    ll total = 0;
    while(n > 0)
    {
        if((n & 1) == 1)
            total = (e*total+T)%m;
        T = ((e+1)*T)%m;
        e = (e*e)%m;
        n = n/2;
    }
    return total;
}



int main(){
    ifstream in;
    in.open("input.txt");
    ofstream out;
    out.open("output.txt");


    int T, S;
    in>>T;
    for(int i=0; i<T; i++){
        int R;
        int N;
        int M;
        in>>R>>N>>M;
        S=geom(N*N, R, M);
        out<<"Case #"<<i+1<<": "<<S<<'\n';
    }
    return 0;
}