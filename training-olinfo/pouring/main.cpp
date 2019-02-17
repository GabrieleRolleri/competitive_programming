#include <bits/stdc++.h>

int main(){
    std::ifstream in;
    in.open("input.txt");
    std::ofstream out;
    out.open("output.txt");

    long long Ac, Bc;
    in>>Ac>>Bc;
    long long As, Bs;
    in>>As>>Bs;
    long long Ag, Bg;
    in>>Ag>>Bg;


    std::map<std::pair<long long, long long>, long long> coppie;
    std::queue<std::pair<long long, long long>> BFS;
    BFS.push(std::make_pair(As, Bs));
    coppie.insert(std::make_pair(std::make_pair(As, Bs), 0));
    std::pair<long long, long long> v=BFS.front();
    while(v.first!=Ag||v.second!=Bg){
        v=BFS.front();
        BFS.pop();
        if(coppie.find(std::make_pair(0, v.second))==coppie.end()){
            BFS.push(std::make_pair(0, v.second));
            coppie.insert(std::make_pair(std::make_pair(0, v.second), coppie.at(v)+1));
        }
        if(coppie.find(std::make_pair(v.first, 0))==coppie.end()) {
            BFS.push(std::make_pair(v.first, 0));
            coppie.insert(std::make_pair(std::make_pair(v.first, 0), coppie.at(v)+1));
        }
        if(coppie.find(std::make_pair(Ac, v.second))==coppie.end()) {
            BFS.push(std::make_pair(Ac, v.second));
            coppie.insert(std::make_pair(std::make_pair(Ac, v.second), coppie.at(v)+1));
        }
        if(coppie.find(std::make_pair(v.first, Bc))==coppie.end()) {
            BFS.push(std::make_pair(v.first, Bc));
            coppie.insert(std::make_pair(std::make_pair(v.first, Bc), coppie.at(v)+1));
        }
        if(v.second>=(Ac-v.first)) {
            if (coppie.find(std::make_pair(Ac, v.second - (Ac - v.first))) == coppie.end()) {
                BFS.push(std::make_pair(Ac, v.second - (Ac - v.first)));
                coppie.insert(std::make_pair(std::make_pair(Ac, v.second - (Ac - v.first)), coppie.at(v)+1));
            }
        }
        else {
                if (coppie.find(std::make_pair(v.first + v.second, 0)) == coppie.end()) {
                    BFS.push(std::make_pair(v.first + v.second, 0));
                    coppie.insert(std::make_pair(std::make_pair(v.first + v.second, 0), coppie.at(v)+1));
                }
        }
        if(v.first>=(Bc-v.second)) {
            if (coppie.find(std::make_pair(v.first - (Bc - v.second), Bc)) == coppie.end()) {
                BFS.push(std::make_pair(v.first - (Bc - v.second), Bc));
                coppie.insert(std::make_pair(std::make_pair(v.first - (Bc - v.second), Bc), coppie.at(v)+1));
            }
        }
        else {
            if (coppie.find(std::make_pair(0, v.second + v.first)) == coppie.end()) {
                BFS.push(std::make_pair(0, v.second + v.first));
                coppie.insert(std::make_pair(std::make_pair(0, v.second + v.first), coppie.at(v)+1));
            }
        }
    }

    out<<coppie.at(std::make_pair(Ag, Bg));

    return 0;
}