#include <bits/stdc++.h>


using namespace std;

typedef pair<int, int> pi;
typedef set<pair<int, int>> spi;

int solve(pi, int);
spi coppie;


int main(){
    ifstream in;
    in.open("input.txt");
    ofstream out;
    out.open("output.txt");
    int A, B;
    in>>A>>B;
    out<<solve(pi(A, B), 0);
    return 0;
}

int solve(pi x, int n){
    if(n==-1)
        return -1;
    if(x.first==1&&x.second==1)
        return n;
    if(coppie.find(x)!=coppie.end()){
        return -1;
    }
    int A=x.first, B=x.second;
    coppie.insert(pi(A, B));
    if((!(A%2))&&(!(B%2))){
        A/=2;
        B/=2;
    }
    else{
        if((A%2)&&(B%2)){
            A=A*3+1;
            B=B*3+1;
        }
        else{
            if(A%2)
                A+=3;
            else
                B+=3;
        }
    }

    solve(pi(A, B), n+1);
}