#include <bits/stdc++.h>

int main(){
    std::ifstream in;
    in.open("input.txt");
    std::ofstream out;
    out.open("output.txt");

    int N, S=0;
    in>>N;

    std::vector<int> pesi(N);
    std::vector<int> max(N, 1);

    for(int i=0; i<N; i++)
        in>>pesi.at(i);

    int maxSoFar;

    for(int i=N-1; i>=0; i--){
        maxSoFar=0;
        for(int j=i+1; j<N; j++){
            if(pesi.at(i)>pesi.at(j)||((pesi.at(j)%pesi.at(i))==0))
                maxSoFar=std::max(max.at(j), maxSoFar);

        }
        max.at(i)+=maxSoFar;
    }

    for(int i=0; i<N; i++)
        S=std::max(S, max.at(i));

    out<<N-S;
    return 0;
}