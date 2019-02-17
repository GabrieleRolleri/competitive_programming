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
    int N;
    in>>N;
    in.get();
    char temp;
    CYC(i, 0, N){
        temp=in.get();
        if(isupper(temp))
            temp=tolower(temp);
        else
            if(islower(temp))
                temp=toupper(temp);

        out<<char(temp);
    }


    return 0;
}
