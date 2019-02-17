#include <bits/stdc++.h>


using namespace std;

int main(){

    ifstream in;
    in.open("input.txt");
    ofstream out;
    out.open("output.txt");

    int N, K;
    in>>N>>K;

    vector<int> strada(N);

    for(int i=0; i<N; i++){
        in>>strada.at(i);
    }

    sort(strada.begin(), strada.end());

    int d, maxd=1, j;

    for(int i=0; i<N-1; i++){
        d=strada.at(i+1)-strada.at(i);
        if(maxd<d){
            maxd=d;
            j=strada.at(i)+((maxd)/2);
        }
    }

    if(strada.at(0)>maxd/2){
        j=0;
        maxd=2*strada.at(0);
    }

    if((K-strada.at(N-1))>maxd/2){
        j=K;
    }
    cout<<j;

    return 0;
}