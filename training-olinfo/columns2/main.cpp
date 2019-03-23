#include <bits/stdc++.h>

using namespace std;

int main(){
    int N, K, S=0, R=0;
    cin>>N>>K;
    int L;
    for(int i=0; i<N; ++i){
        cin>>L;
        if(L==11*K){
            S+=11;
        }
        else{
            if(L>10*K){
                S+=10;
                R+=L-(10*K);
            }
            else{
                S+=((L-(L%K))/K);
                R+=L%K;
            }
        }
    }
    cout<<S<<' '<<R;
    return 0;
}