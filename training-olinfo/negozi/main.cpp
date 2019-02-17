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
    int N, Q;
    in>>N>>Q;
    vi posNegozi[100000];
    int temp;
    CYC(i, 0, N){
        in>>temp;
        posNegozi[temp].push_back(i);
    }
    int pos, tipoNegozio;
    CYC(i, 0, Q){
        in>>pos>>tipoNegozio;
        auto it=lower_bound(posNegozi[tipoNegozio].begin(), posNegozi[tipoNegozio].end(), pos);
        int distanzaSx=INT_MAX;
        int distanzaDx=INT_MAX;
        if(it!=posNegozi[tipoNegozio].begin()){
            distanzaSx=abs(*(it-1)-pos);
        }
        //cout<<"La distanza a sinistra del negozio di tipo: "<<tipoNegozio<<" dalla posizione "<<pos<<" e' "<<distanzaSx<<endl;
        if(it!=posNegozi[tipoNegozio].end()) {
            distanzaDx = abs(*(it) - pos);
        }
        //cout<<"La distanza a destra del negozio di tipo: "<<tipoNegozio<<" dalla posizione "<<pos<<" e' "<<distanzaDx<<endl;
        out<<min(distanzaDx, distanzaSx)<<endl;
    }





    return 0;
}
