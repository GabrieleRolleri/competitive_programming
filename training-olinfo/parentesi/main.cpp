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
    if(N%2){
        out<<"malformata";
        return 0;
    }
    stack<char> parentesi;
    in.get();
    char temp;
    CYC(i, 0, N){
        temp=in.get();
        if(temp=='('){
            parentesi.push(')');
        }
        if(temp==')'){
            if(parentesi.empty()){
                out<<"malformata";
                return 0;
            }
            if(parentesi.top()!=')'){
                out<<"malformata";
                return 0;
            }
            parentesi.pop();
        }
        if(temp=='['){
            parentesi.push(']');
        }
        if(temp==']'){
            if(parentesi.empty()){
                out<<"malformata";
                return 0;
            }
            if(parentesi.top()!=']'){
                out<<"malformata";
                return 0;
            }
            parentesi.pop();
        }
        if(temp=='{'){
            parentesi.push('}');
        }
        if(temp=='}'){
            if(parentesi.empty()){
                out<<"malformata";
                return 0;
            }
            if(parentesi.top()!='}'){
                out<<"malformata";
                return 0;
            }
            parentesi.pop();
        }
        if(temp=='<'){
            parentesi.push('>');
        }
        if(temp=='>'){
            if(parentesi.empty()){
                out<<"malformata";
                return 0;
            }
            if(parentesi.top()!='>'){
                out<<"malformata";
                return 0;
            }
            parentesi.pop();
        }
    }
    if(!parentesi.empty()){
        out<<"malformata";
        return 0;
    }

    out<<"corretta";

    return 0;
}
