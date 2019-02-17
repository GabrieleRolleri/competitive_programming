#include <bits/stdc++.h>

bool compatible(int, std::vector<int>);

int main(){
    std::ifstream in;
    in.open("input.txt");
    std::ofstream out;
    out.open("output.txt");

    int N;
    in>>N;

    std::vector<int> confezioni(N);
    std::vector<bool> configuration(101, false);
    for(int i=0; i<N; i++)
        in>>confezioni.at(i);
    configuration.at(0)=true;
    for(int j=0; j<101; j++) {
        for (int i = 0; i < 101; i++)
            if (configuration.at(i))
                for (int j = 0; j < N; j++)
                    if((i+confezioni.at(j))<101)
                        configuration.at(i + confezioni.at(j)) = true;
    }
    int S=100;
    while(configuration.at(S)){S--;}
    out<<S;


    return 0;

}

