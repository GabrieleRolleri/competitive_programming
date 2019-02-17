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
    string s;
    string hello="hello";
    string world="world";
    in>>s;
    ll S=s.size(), numberHello=0, sol=0;
    CYC(i, 0, S){
        bool isHello=true, isWorld=true;
        CYC(j, 0, 5){
            if(s[i+j]!=hello[j]){
                isHello= false;
            }
        }
        if(isHello){
            numberHello++;
        }
        CYC(j, 0, 5){
            if(s[i+j]!=world[j]){
                isWorld= false;
            }
        }
        if(isWorld){
            sol+=numberHello;
        }
    }

    out<<sol;

    return 0;
}
