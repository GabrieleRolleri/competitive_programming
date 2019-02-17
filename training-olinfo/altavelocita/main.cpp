#include <bits/stdc++.h>
#define CYC(i, a, b) for(int i=a; i<b; i++)
#define CYCI(i, a, b) for(auto i=a; i!=b; ++i)

using namespace std;

typedef vector<int> vi;
typedef vector<long long> vll;
typedef vector<pair<int, int>> vpii;
typedef long long ll;
typedef pair<int, int> pii;
typedef pair<long, long> pll;


vpii binari;
short kmUntil(ll km, ll K){
    ll R=0, sulKm=0;
    CYCI(it, binari.begin(), binari.end()){
        if(it->second<km){
            R+=(it->second-it->first+1);
        }
        else{
            if(it->first<km){
                R+=km-it->first;
                sulKm++;
            }
        }
    }
    if(R>=K){
        return 1;
    }
    if(R+sulKm>=K){
        return 2;
    }
    return 3;
}

int binaria(ll left, ll right, ll K){
    ll piv=(left+right)/2;
    if(left>right)
        return piv;
    if(kmUntil(piv, K)==2){
        return piv;
    }
    if(kmUntil(piv, K)==1){
        return binaria(left, piv-1, K);
    }
    return binaria(piv+1, right, K);
}

int main(){
    ifstream in;
    in.open("input.txt");
    ofstream out;
    out.open("output.txt");
    ll N, K;
    cin>>N>>K;
    binari.resize(N);
    int minK=INT_MAX, maxK=INT_MIN;
    CYC(i, 0, N){
        cin>>binari[i].first;
        cin>>binari[i].second;
        minK=min(minK, binari[i].first);
        maxK=max(maxK, binari[i].second);
    }
    //cout<<kmUntil(5, 11);
    cout<<binaria(0, 2147483647, K);
    return 0;
}
