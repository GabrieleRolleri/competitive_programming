#include <bits/stdc++.h>

int main() {
    std::ifstream in;
    in.open("input.txt");
    std::ofstream out;
    out.open("output.txt");

    int N, S=0;
    in>>N;

    std::set<std::string> results;
    std::string r1, t1, t2, d;
    for(int i=0; i<N; i++) {
        in>>r1;
        in>>d;
        in>>t1;
        in>>d;
        in>>t2;
        if( ( results.find( t1 ) == results.end() )&&( results.find( t2 ) == results.end() )&&( results.find( r1 ) == results.end() ))
            S++;
        results.insert(r1);
    }

    std::cout<<S;
    return 0;
}