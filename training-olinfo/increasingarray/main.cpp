#include <bits/stdc++.h>


using namespace std;

int main(){
    int N;
    cin>>N;
    long long x, S=0, maxEl=0;
    for(int i=0; i<N; i++){
        cin>>x;
        if(x<maxEl)
            S+=maxEl-x;
        else
            maxEl=x;
    }
    cout<<S;

    return 0;
}