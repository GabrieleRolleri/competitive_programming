#include <bits/stdc++.h>

std::vector<std::vector<short>> lookup;

int query(int, int);

int main() {
    std::ifstream in;
    in.open("input.txt");
    std::ofstream out;
    out.open("output.txt");

    int N, K;
    in>>N>>K;
    lookup.resize(N);


    for(int i=0; i<N; i++) {
        lookup.at(i).resize((int)log2(N)+1);
        in >> lookup.at(i).at(0);
    }
    for(int j=1; N >= (1<<j); j++){
        for(int i=0; (i+(1<<j)-1) < N; i++){
            if(lookup[i][j-1]>lookup[i+(1<<(j-1))][j-1])
                lookup[i][j]=lookup[i][j-1];
            else
                lookup[i][j]=lookup[i+(1<<(j-1))][j-1];
        }
    }
    int S=0, t;
    for(int i=0; i<N; i++){
        t = abs(query(std::max(i-K, 0), std::min(i + K, N-1)) - lookup[i][0]);
        if (t > S)
            S = t;
    }








    std::cout<<S;





    return 0;
}

int query(int L, int R){
    int j=(int)log2(R-L+1);
    if(lookup[L][j] >= lookup[R-(1 << j)+1][j])
        return lookup[L][j];
    else
        return lookup[R - (1 << j) + 1][j];
}