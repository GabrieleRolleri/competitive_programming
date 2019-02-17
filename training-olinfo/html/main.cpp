#include <bits/stdc++.h>
#define CYC(i, a, b) for(int i=a; i<b; i++)
#define CYCI(i, a, b) for(auto i=a; i!=b; ++i)

using namespace std;

typedef vector<int> vi;
typedef vector<long long> vll;
typedef long long ll;
typedef pair<int, int> pii;
typedef pair<long, long> pll;

int main(){
    ifstream in;
    in.open("input.txt");
    ofstream out;
    out.open("output.txt");
    int N;
    in>>N;
    in.get();
    list<int> stringa(N);
    CYCI(it, stringa.begin(), stringa.end()){
        *it=in.get();
    }
    list<int>::iterator start;
    vi amp={'a', 'm', 'p', ';'};
    CYCI(it, stringa.begin(), stringa.end()){
        if(*it==int('&')){
            it++;
            start=it;
            ll i=0;

            while(int(*it)==amp[i%4]){
                i++;
                it++;
            }
            while(i%4!=0){
                it--;
                i--;
            }
            if(it!=start){
                stringa.erase(start, it);
                it--;
            }
        }
    }
    out<<stringa.size()<<'\n';
    CYCI(it, stringa.begin(), stringa.end()){
        out<<char(*it);
    }






    return 0;
}
