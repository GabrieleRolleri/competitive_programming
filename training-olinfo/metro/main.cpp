#include <bits/stdc++.h>

#define CYC(i, a, b) for(int i=a; i<b; i++)
#define CYCI(i, a, b) for(auto i=a; i!=b; ++i)

#pragma optimizer ("O3")

using namespace std;

typedef vector<int> vi;
typedef vector<long long> vll;
typedef long long ll;
typedef pair<int, int> pii;
typedef pair<long, long> pll;

int searchOccurences(string, string, int);

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int N, S=0;
    cin>>N;
    string txt1, txt2;

    cin>>txt1>>txt2;

    int M;
    cin>>M;

    string pat;
    cin>>pat;
    for(int i=0; i<N/2; i++)
        swap(txt2[i], txt2[N-i-1]);

    for(int i=0; i<N; i++)
        if(txt2[i]=='^')
            txt2[i]='v';
        else
            txt2[i]='^';
    for(int i=0; i<M; i++) {
        if (pat[i] == '<')
            pat[i] = '^';
        else
            pat[i] = 'v';
    }
    S+=searchOccurences(txt1, pat, 2147470123);
    S+=searchOccurences(txt2, pat, 2147470123);



    cout<<S;

}

int searchOccurences(string txt, string pat, int q){
    ll S=0;
    ll N=txt.size();
    ll M=pat.size();
    ll hashPat=0;
    ll hashTxt=0;
    const ll dictionary=256;
    ll h=1;
    ll j;
    CYC(i, 0, M-1){
        h=(h*dictionary)%q;
    }
    CYC(i, 0, M){
        hashPat=(dictionary*hashPat + pat[i])%q;
        hashTxt=(dictionary*hashTxt + txt[i])%q;
    }
    CYC(i, 0, N-M+1){
        if(hashPat==hashTxt){
            S++;
        }
        if(i<N-M){
            hashTxt = (dictionary*(hashTxt-txt[i]*h)+txt[i+M])%q;
            if(hashTxt<0){
                hashTxt+=q;
            }
        }
    }
    return S;
}
