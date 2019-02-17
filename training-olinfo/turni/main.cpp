#include <bits/stdc++.h>

int N, K, S=0;
std::vector<std::pair<short, short>> per;

void algo(int);

int main() {
    std::ifstream in;
    in.open("input.txt");
    std::ofstream out;
    out.open("output.txt");

    in>>K>>N;
    per.resize(N+1);
    for(int i=0; i<N; i++){
        in>>per.at(i).first>>per.at(i).second;
    }
    per.at(N).second=-1;
    algo(0);
    out<<S+1;

    return 0;
}

void algo(int inizio){
    int scelto=N;
    for(int i=0; i<N; i++){
        //std::cout<<per.at(i).first<<'\t'<<per.at(i).second<<'\n';
        if((inizio!=0&&per.at(i).first<=inizio+1)||(inizio==0&&per.at(i).first<=inizio)){
            if(per.at(i).second>per.at(scelto).second) {
                //std::cout<<'\n'<<i<<'\n';
                //std::cout<<per.at(i).first<<'\t'<<per.at(i).second<<'\n';
                scelto = i;
            }
        }
    }
    //std::cout<<'\n';
    if(per.at(scelto).second<K-1) {
        algo(per.at(scelto).second);

        S++;
    }
}