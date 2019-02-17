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
    vector<string> numeri(N);
    CYC(i, 0, N){
        in>>numeri[i];
    }
    int S=numeri[0].size();
    CYC(i, 0, S) {
        char temp = numeri[0][i];
        CYC(j, 0, N) {
            if (numeri[j][i] != temp) {
                out << i;
                return 0;
            }
        }
    }
    out<<S;



    return 0;
}
