#include <bits/stdc++.h>
#define CYC(i, a, b) for(int i=a; i<b; i++)
using namespace std;

typedef vector<int> vi;



int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N, S=0;
    cin>>N;
    vi pens(N);
    CYC(i, 0, N){
        cin>>pens[i];
    }
    if(pens[0]==0){
        if(pens[1]>1){
            --pens[1];
        } else
            ++S;

    }

    CYC(i, 1, N-1){
        if(pens[i]==0){
            if(pens[i-1]>1)
                ++pens[i];
            else
                if(pens[i+1]>1)
                    --pens[i+1];
                else
                    S++;
        }
    }
    if(N>1){
        if(pens[N-1]==0){
            if(pens[N-2]>1){
                --pens[1];
            } else
                ++S;
        }
    }
    cout<<S;
    return 0;
}
