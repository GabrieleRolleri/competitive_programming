#include <bits/stdc++.h>

#define CYC(i, a, b) for(int i=a; i<b; i++)

using namespace std;

typedef vector<int> vi;

void put(int, int, vi&, vi&, vi&);
int get(int, vi&, vi&, vi&);
int find(int, vi&);
void unite(int, int, vi&);

int main(){

    ifstream in;
    in.open("input.txt");
    ofstream out;
    out.open("output.txt");

    int N, T;
    in>>N>>T;
    vi C(N);
    vi Q(N);
    vi UF(N);
    CYC(i, 0, N){
        UF.at(i)=i;
        in>>C.at(i);
        Q.at(i)=0;
    }

    char cT;
    int a, b;
    CYC(i, 0, T){
        in>>cT;
        if(cT=='P'){
            in>>a>>b;
            put(b, a, UF, Q, C);
        }
        else{
            in>>a;
            cout<<get(a, UF, Q, C)<<'\n';
        }
    }
    return 0;
}

void put(int x, int q, vi& list, vi& quantity, vi& capacity){
    while(q>0){
        x=find(x, list);
        if(q>(capacity[x]-quantity[x])) {
            if(x==list.size()-1) {
                quantity[list.size() - 1] = capacity[list.size() - 1];
                q = 0;
            }
            else {
                unite(x + 1, x, list);
                q -= (capacity[x] - quantity[x]);
            }
        }
        else{
            quantity[x]+=q;
            q=0;
        }
    }
}
int get(int x, vi& list, vi& quantity, vi& capacity){
    if(list[x]==x)
        return quantity[x];
    else
        return capacity[x];
}

int find(int x, vi& list){
    if(x==list[x])
        return x;
    else {
        list[x] = find(list[x], list);
        return list[x];

    }
}

void unite(int a, int b, vi& list){
    a=find(a, list);
    b=find(b, list);
    list[b]=a;
}