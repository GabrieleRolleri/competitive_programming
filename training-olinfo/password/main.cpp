#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){

    ifstream in;
    in.open("input.txt");
    ofstream out;
    out.open("output.txt");

    ll N, K, S=0;
    in>>N>>K;
    int sqr=0;
    map<double, int> maxA;
    map<double, int> minA;
    ll T;
    for(int i=0; i<N; ++i){
        in>>T;
        if(T*T==K){
            sqr++;
        }
        if(T*T<K){
            if(minA.find(T)!=minA.end()){
                minA[T]++;
            }
            else{
                minA.insert({T, 1});
            }
        }
        else{
            if(maxA.find(T)!=maxA.end()){
                maxA[T]++;
            }
            else{
                maxA.insert({T, 1});
            }
        }
    }
    S+=sqr*(sqr-1);
    for(auto& it : minA){
        double x=it.first;
        double candY=double(K)/x;
        auto pY=maxA.find(candY);
        if (pY != maxA.end()) {
            if (pY->first * x == K) {
                S += it.second * pY->second;
            }
        }
    }

    out<<S;



    return 0;
}