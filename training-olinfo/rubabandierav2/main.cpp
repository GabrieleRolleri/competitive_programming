#include <bits/stdc++.h>

int main() {
    std::ifstream in;
    in.open("input.txt");
    std::ofstream out;
    out.open("output.txt");

    int Q;
    in>>Q;
    std::vector<long long> pot2;
    pot2.push_back(0);
    pot2.push_back(1);
    for(int i=2; i<=60; i++){
        pot2.push_back(pot2.at(i-1)*2);
    }
    long long N;
    for(int i=0; i<Q; i++){
        in>>N;
        auto it=pot2.end()-1;

        for(; (it!=pot2.begin())&&(*it>N); it--){/*std::cout<<*it<<'\t'<<'h';*/}
        out<<2*(N-*it)+1<<'\n';


    }




    return 0;
}