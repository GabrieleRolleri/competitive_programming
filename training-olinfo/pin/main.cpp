#include <bits/stdc++.h>

int vetToInt(std::deque<int>::iterator, int);

std::vector<int> pot10(10);

int main() {
    std::ifstream in;
    in.open("input.txt");
    std::ofstream out;
    out.open("output.txt");

    int N, K;
    in>>N>>K;
    pot10.at(0)=1;
    for(int i=1; i<10; i++)
        pot10.at(i)=pot10.at(i-1)*10;
    std::unordered_map<int, int> mappa;
    std::deque<int> temp;
    std::stack<int> el;
    int t;
    for(int i=0; i<K; i++) {
        in >> t;
        temp.push_back(t);
    }
    bool diverse, match;
    int transInt;
    for(int i=0; i<=N-K; i++){
        match=true;
        for(auto it=(temp.end()-K-1); it!=temp.begin()-1; it--){
            diverse=false;
            for(int j=0; j<K; j++)
                if((*(temp.end()-K+j))!=(*(it+j)))
                    diverse=true;
            match|=diverse;
        }
        if(match){
            transInt=vetToInt(temp.end()-K, K);
            if(mappa.find(transInt)==mappa.end()) {
                mappa.insert(std::make_pair(transInt, 1));
                el.push(transInt);
            }
            else {
                mappa.at(transInt)++;
            }
        }
        in>>t;
        temp.push_back(t);
        if(temp.size()==2*K)
            temp.pop_front();

    }


    int v=el.top(), max=v;
    el.pop();
    while(!el.empty()){
        v=el.top();
        el.pop();
        if(mappa.at(v)>mappa.at(max))
            max=v;
    }


    int zeri=abs(std::ceil(log10(max)-(double)(K)));
    for(int i=0; i<zeri; i++)
        out<<"0 ";


    std::stack<int> digits;
    int r;
    while(max!=0) {
        r = max % 10;
        max = max / 10;

        digits.push(r);
    }
    while(!digits.empty()){
        std::cout<<digits.top()<<' ';
        digits.pop();
    }

    return 0;
}

int vetToInt(std::deque<int>::iterator b, int n){
    int S=0;
    for(int i=n-1; i>=0; i--) {
        S+=(*(b+i))*pot10.at(n-i-1);
    }
    return S;
}