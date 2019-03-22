#include <bits/stdc++.h>

using namespace std;


int main(){
    ifstream in;
    in.open("input.txt");
    ofstream out;
    out.open("output.txt");
    int N;
    in>>N;
    vector<int> tramp(N+10, 0);
    for(int i=0; i<N; ++i)
        in>>tramp[i];
    int curr=0, j=0, candidate=1;
    while(curr<N){
        candidate=curr+1;
        if(curr+tramp[curr]>=N){
            ++j;
            break;
        }
        for(int i=curr+1; i<curr+tramp[curr]+1; ++i){
            if((tramp[i]+i)>(candidate+tramp[candidate]))
                candidate=i;
        }
        curr=candidate;
        ++j;
    }

    out<<j;



    return 0;
}