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
    ifstream in;
    in.open("input.txt");
    ofstream out;
    out.open("output.txt");
    vb primi(110000, true);
    int j;
    CYC(i, 2, 110000){
        j=2;
        if(primi[i]){
            while(i*j<105000){
                primi[i*j]=false;
                j++;
            }
        }
    }
    vi numPrimi;
    CYC(i, 2, 110000){
        if(primi[i])
            numPrimi.push_back(i);
    }

    int N, M;
    in>>N>>M;
    vi matrice[N];
    vi differenceToNextPrime[N];
    CYC(i, 0, N){
        matrice[i].resize(M);
        differenceToNextPrime[i].resize(M);
        CYC(j, 0, M){
            in>>matrice[i][j];
            differenceToNextPrime[i][j]=(*lower_bound(numPrimi.begin(), numPrimi.end(), matrice[i][j])-matrice[i][j]);
        }
    }
    vi sommaRighe(N);
    CYC(i, 0, N){
        CYC(j, 0, M){
            sommaRighe[i]+=differenceToNextPrime[i][j];
        }
    }
    vi sommaColonne(M);
    CYC(i, 0, M){
        CYC(j, 0, N){
            sommaColonne[i]+=differenceToNextPrime[j][i];
        }
    }

    out<<min( *min_element(sommaColonne.begin(), sommaColonne.end()) , *min_element(sommaRighe.begin(), sommaRighe.end()) );


    return 0;
}
