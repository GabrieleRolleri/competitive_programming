#include <bits/stdc++.h>

using namespace std;

int main(){
    ifstream in;
    in.open("input.txt");
    ofstream out;
    out.open("output.txt");


    int N, K;
    in>>N>>K;
    vector<int> V(N);

    for(int i=0; i<N; i++){cin>>V.at(i);}
    int sT=0, sM=INT_MIN;
    for(int i=0; i<K; i++){sT+=V.at(i);}
    for(int i=0, j=K; j<N; i++, j++){
        sM=max(sM, sT);
        sT+=V.at(j);
        sT-=V.at(i);
    }
    sM=max(sM, sT);
    out<<sM;


    return 0;
}
