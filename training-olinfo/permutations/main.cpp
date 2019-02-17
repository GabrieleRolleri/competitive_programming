#include <bits/stdc++.h>


using namespace std;

int main(){

    int N;
    cin>>N;
    if(N==1){
        cout<<1;
        return 0;
    }

    if(N<4){
        cout<<"NO SOLUTION";
        return 0;
    }
    if(N==4){
        cout<<"2 4 1 3";
        return 0;
    }
    if(N==6){
        cout<<"2 4 6 1 3 5";
        return 0;
    }
    int temp=1;

    if(N%2){
        cout<<N-1<<' ';
        while(temp!=N) {
            cout << temp<<' ';
            temp+=2;
        }
        cout<<temp<<' ';
        temp=2;
        while(temp!=N-1){
            cout<<temp<<' ';
            temp+=2;
        }
    }
    else{
        cout<<N-1<<' ';
        while(temp!=N-3) {
            cout << temp<<' ';
            temp+=2;
        }
        cout<<temp<<' ';
        temp=2;
        while(temp!=N+2){
            cout<<temp<<' ';
            temp+=2;
        }
    }



    return 0;
}