#include <bits/stdc++.h>
#define CYC(i, a, b) for(int i=a; i<b; i++)
#define CYCI(i, a, b) for(auto i=a; i!=b; ++i)

using namespace std;

typedef vector<int> vi;
typedef vector<long long> vll;
typedef long long ll;
typedef pair<int, int> pii;
typedef pair<long, long> pll;

struct gallo{
    int H;
    int L;
};

bool comp(gallo a, gallo b){
    if(a.H<b.H)
        return true;
    return false;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ifstream in;
    in.open("input.txt");
    ofstream out;
    out.open("output.txt");
    int N, D, S=0;
    cin>>N>>D;
    vector<gallo> galli(N);
    int overallH=0;
    CYC(i, 0, N){
        cin>>galli[i].H;
        overallH+=galli[i].H;
        cin>>galli[i].L;
    }
    sort(galli.begin(), galli.end(), comp);
    CYC(i, 0, N){
        if(overallH+galli[i].L>=D){
            overallH-=galli[i].H;
            S++;
        }
    }

    cout<<S;




    return 0;
}
