#include <bits/stdc++.h>

int paper(int, int, int[], int[]);
void topologicalSort(int, std::queue<int>&, std::vector<bool>&, std::list<int>*);

int main(){

    std::ifstream in;
    in.open("input.txt");
    std::ofstream out;
    out.open("output.txt");

    int N, M;
    in>>N>>M;
    std::cout<<N<<' '<<M<<' ';
    int A[M], B[M];
    for(int i=0; i<M; i++) {
        in >> A[i] >> B[i];
        A[i]--;
        B[i]--;
    }
    std::cout<<paper(N, M, A, B);


}

int paper(int N, int M, int A[], int B[]){
    int S=0;
    std::queue<int> sorted;
    std::vector<bool> visited(N, false);
    std::list<int> adj[N];
    for(int i=0; i<M; i++){
        adj[A[i]].push_back(B[i]);
    }


    std::vector<std::set<int>> sets(N);
    int v;
    while(!sorted.empty()){
        v=sorted.front();
        for(auto it=adj[v].begin(); it!=adj[v].end(); it++){
            sets.at(v).insert(sets.at(*it).begin(), sets.at(*it).end());
            sets.at(v).insert(*it);
        }
        sorted.pop();
    }
    for(int i=0; i<N; i++){
        if(sets.at(i).size()==N-1)
            S++;
    }
    return S;
}

