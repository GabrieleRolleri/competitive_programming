#include <bits/stdc++.h>

using namespace std;


int main(){

    ifstream in;
    in.open("input.txt");
    ofstream out;
    out.open("output.txt");

    int N;
    in>>N;
    int V[30];
    V[1]=1;
    V[0]=1;
    for(int i=2; i<30; ++i){
        V[i]=3*V[i-1]-V[i-2];
    }
    out<<V[N];
    return 0;
}
