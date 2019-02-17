#include <bits/stdc++.h>

using namespace std;

bool funzione(int a, long double b);

int main(){
    ifstream in;
    in.open("input.txt");
    ofstream out;
    out.open("output.txt");
    int nStelle;
    in>>nStelle;
    vector<long double> D(nStelle);
    long double temp1, temp2, temp3;
    for(auto it=D.begin(); it!=D.end(); it++){
        in>>temp1>>temp2>>temp3;
        *it=sqrt(temp1*temp1+temp2*temp2+temp3*temp3);
    }
    sort(D.begin(), D.end());
    int nQuery;
    in>>nQuery;
    int temp;
    for(int i=0; i<nQuery; i++){
        in>>temp;
        out<<upper_bound(D.begin(), D.end(), temp, funzione)-D.begin()<<endl;
    }
    return 0;
}

bool funzione(int a, long double b){
    if(a<b)
        return true;
    else
        return false;
}