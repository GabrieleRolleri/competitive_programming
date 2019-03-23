#include <bits/stdc++.h>

using namespace std;

int main(){

    ifstream in;
    in.open("input.txt");
    ofstream out;
    out.open("output.txt");


    int N;
    in>>N;
    int C=1, T;
    vector<int> jumps;
    vector<int> blocks;
    for(int i=0; i<N; ++i){
        in>>T;
        if(C==i){
            jumps.push_back(i);
        }
        C=max(C, i+T);
    }
    if(jumps.size()==0){
        for(int i=0; i<N; ++i)
            out<<N;
    }
    else {
        blocks.push_back(jumps[0]);
        for(int i=0; i<jumps.size()-1; ++i) {
            blocks.push_back(jumps[i+1]-jumps[i]);
        }
        blocks.push_back(N-jumps.back());
    }
    sort(blocks.begin(), blocks.end());
    int L=blocks.size();
    int S=0;
    for(int i=L-1; i>=0; --i){
        S+=blocks[i];
        out<<S<<' ';
    }
    if(L<N){
        for(int i=0; i<N-L; ++i){
            out<<N<<' ';
        }
    }





    return 0;
}




