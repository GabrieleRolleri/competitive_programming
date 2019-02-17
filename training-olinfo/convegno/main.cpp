#include <bits/stdc++.h>

int nFigli(int, std::list<int>*);
int coppie(int N, int C[]);

std::vector<int> under;    //sottoposti of every employee

int main() {
    std::ifstream in;
    in.open("input.txt");
    std::ofstream out;
    out.open("output.txt");

    int N;
    in>>N;
    under.resize(N);

    int te[N];
    for(int i=0; i<N; i++){
        in>>te[i];
    }

    std::cout<<coppie(N, te);




    return 0;
}

int coppie(int N, int C[]){
    std::list<int> adj[N];  //adjancency list of employees
    int t;
    int pCapo;
    for(int i=0; i<N; i++){
        t=C[i];

        if(t!=-1)
            adj[t].push_back(i);
        else
            pCapo=i;
    }

    nFigli(pCapo, adj);
    int S=0;
    for(int i=0; i<N; i++){
        S+=under.at(i);
    }
    return S;
}

int nFigli(int n, std::list<int> *adj){
    int S=0;
    for(auto it=adj[n].begin(); it!=adj[n].end(); it++){
        S+=nFigli((*it), adj)+1;
    }
    under.at(n)=S;
    return S;
}


