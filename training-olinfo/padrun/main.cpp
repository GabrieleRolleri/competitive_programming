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
    ifstream in;
    in.open("input.txt");
    ofstream out;
    out.open("output.txt");
    int N, S=0;
    cin>>N;
    int a, b, lastB=0;
    CYC(i, 0, N){
        cin>>a>>b;
        if(a>lastB){
            lastB=b;
            S++;
        }
        else{
            if(b>lastB){





            }
        }
    }

    cout<<S;

    return 0;
}
