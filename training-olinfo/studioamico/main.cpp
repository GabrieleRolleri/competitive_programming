#include <bits/stdc++.h>
#define CYC(i, a, b) for(int i=a; i<b; i++)
#define CYCI(i, a, b) for(auto i=a; i!=b; ++i)
#pragma optimizer "O3"
using namespace std;

typedef vector<int> vi;
typedef vector<long long> vll;
typedef long long ll;
typedef pair<int, int> pii;
typedef pair<long, long> pll;

bool associabili(int N, int voti2[], int voti5[]){
    vi bucket2(11, 0);
    vi bucket5(11, 0);
    CYC(i, 0, N){
        bucket2[voti2[i]]++;
        bucket5[voti5[i]]++;
    }
    if(bucket2[10]!=0)
        return false;
    for(int i=10; i>=1; i--){
        if(bucket5[i]<bucket2[i-1]){
            return false;
        }
        bucket5[i]-=bucket2[i-1];
        bucket5[i-1]+=bucket5[i];
    }
    return true;
}

