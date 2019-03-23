#include <bits/stdc++.h>

using namespace std;

int cal(int, int, int, int, int);

int main(){
    int T;
    cin>>T;

    for(int i=0; i<T; ++i){
        int wR, wG, wB;
        int A, C, r, g, b;
        cin>>A>>C>>r>>g>>b;
        wR=cal(r+1, g, b, A, C);
        wG=cal(r, g+1, b, A, C);
        wB=cal(r, g, b+1, A, C);
        if(wR>wG){
            if(wR>wB){
                cout<<"RED";
            }
            else{
                cout<<"BLUE";
            }
        }
        else{
            if(wG>wB){
                cout<<"GREEN";
            }
            else{
                cout<<"BLUE";
            }
        }
        cout<<'\n';
    }
    return 0;
}

int cal(int r, int g, int b, int A, int C){
    return A*(r*r+g*g+b*b)+C*min(min(r, b), g);
};
