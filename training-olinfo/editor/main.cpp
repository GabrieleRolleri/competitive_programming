#include <bits/stdc++.h>

using namespace std;


int main(){
    int N, S=0;
    cin>>N;
    bool statusI=false, statusB=false;
    char T;
    for(int i=0; i<N; ++i){
        cin>>T;
        if(T=='n'){
            if(statusB){
                statusB^=true;
                S++;
            }
            if(statusI){
                statusI^=true;
                S++;
            }
        }
        if(T=='i'){
            if(statusB){
                statusB^=true;
                S++;
            }
            if(!statusI){
                statusI^=true;
            }
        }
        if(T=='N'){
            if(statusB){


            }
            else{
                statusB^=true;
            }
            if(statusI){
                statusI^=true;
                S++;
            }
        }
        if(T=='I'){
            if(statusB){


            }
            else{
                statusB^=true;
            }
            if(statusI){


            }
            else{
                statusI^=true;
            }

        }

    }
    S+=statusB;
    S+=statusI;

    cout<<S;




    return 0;
}