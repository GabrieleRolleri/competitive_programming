#include <bits/stdc++.h>
#define CYC(i, a, b) for(int i=a; i<b; i++)
#define CYCI(i, a, b) for(auto i=a; i!=b; ++i)

using namespace std;

typedef vector<int> vi;
typedef vector<bool> vb;
typedef vector<long long> vll;
typedef long long ll;
typedef pair<int, int> pii;
typedef pair<long, long> pll;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int N;
    cin>>N;
    vb boards[N];
    char temp;
    CYC(i, 0, N){
        boards[i].resize(N);
        CYC(j, 0, N){
            cin>>temp;
            if(temp=='A')
                boards[i][j]=true;
            else
                boards[i][j]=false;
        }
    }
    CYC(i, 0, N){
        CYC(j, i, N){



        }
    }




    return 0;
}
