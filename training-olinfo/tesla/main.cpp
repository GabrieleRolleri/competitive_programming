#include <bits/stdc++.h>
#define CYC(i, a, b) for(int i=a; i<b; i++)
#define CYCI(i, a, b) for(auto i=a; i!=b; ++i)

using namespace std;

typedef vector<int> vi;
typedef vector<long long> vll;
typedef long long ll;
typedef pair<int, int> pii;
typedef pair<long, long> pll;

int mod(int M, int Q){
    M%=Q;
    if(M<0)
        M+=Q;
    return M;

}

int main(){
    ifstream in;
    in.open("input.txt");
    ofstream out;
    out.open("output.txt");
    int N;
    in>>N;
    vi s(N);
    CYC(i, 0, N){
        in>>s[i];
        s[i]-=10;
    }
    int possibleStart=0, F=0;
    for(int i=0; i!=mod(possibleStart-1, N); i++, i=mod(i, N)){
        F+=s[i];
        if(F<0){
            possibleStart=mod(possibleStart-1, N);
            i=possibleStart-1;
            F=0;
        }
    }

    out<<possibleStart+1;
    return 0;
}
