#include <bits/stdc++.h>

void treeFill(int*, int*, int, int, int);
int treeQuery(int*, int, int , int, int, int);
void treeUpdate(int*, int*, int, int, int, int);

int main() {
    std::ifstream in;
    in.open("input.txt");
    std::ofstream out;
    out.open("output.txt");

    int N;
    in>>N;

    int v[50000];
    for(int i=0; i<N; i++){
        v[i]=0;
    }

    int tree[4*(N)];
    treeFill(v, tree, 0, N-1, 0);

    int M;
    in>>M;

    bool temp;
    int t1, t2;
    for(int i=0; i<M; i++){
        in>>temp>>t1>>t2;
        if(temp) {
            out << treeQuery(tree, t1, t2, 0, N - 1, 0)<<'\n';
        }
        else {
            for(int i=t1; i<=t2; i++) {
                treeUpdate(v, tree, 0, N - 1, 0, i);
                v[i]=!v[i];
            }
        }
    }

    return 0;
}

void treeFill(int input[], int segTree[], int low, int high, int pos){
    if(low==high){
        segTree[pos]=input[low];
        return;
    }
    int mid=(low+high)/2;
    treeFill(input, segTree, low, mid, 2*pos+1);
    treeFill(input, segTree, mid+1, high, 2*pos+2);
    segTree[pos]=segTree[2*pos+1]+segTree[2*pos+2];
}

int treeQuery(int segTree[], int qLow, int qHigh, int low, int high, int pos){
    if(qLow<=low&&high<=qHigh)
        return segTree[pos];
    if(qLow>high||qHigh<low)
        return 0;
    int mid=(low+high)/2;
    return treeQuery(segTree, qLow, qHigh, low, mid, 2*pos+1)+treeQuery(segTree, qLow, qHigh, mid+1, high, 2*pos+2);
}
void treeUpdate(int input[], int segTree[], int low, int high, int pos, int index){
    if(low>index||index>high) {
        return;
    }
    if(input[index])
        segTree[pos] -= 1;
    else
        segTree[pos] += 1;
    if(low!=high) {
        int mid = (low + high) / 2;
        treeUpdate(input, segTree, low, mid, 2 * pos + 1, index);
        treeUpdate(input, segTree, mid + 1, high, 2 * pos + 2, index);
    }

}
