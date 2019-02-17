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
    int N;
    in>>N;
    string A, B, T;
    in>>A>>B;
    CYC(i, 0, N){
        if(A==B){
            out<<1;
            return 0;
        }
        T=A[N-1];
        A.insert(0, T);
        A.pop_back();
    }



    out<<0;
    return 0;
}
