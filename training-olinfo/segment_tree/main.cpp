#include <bits/stdc++.h>

void treeFill(int*, int*, int, int, int);
int treeQuery(int*, int, int , int, int, int);
void treeUpdate(int*, int, int, int, int, int);
void treeDisplay(int*, int);
int getDiff(int*, int, int);

int main() {

    int v[]={3, 6, 8, 3};
    int sizeV=sizeof(v)/(sizeof(int));
    int tree[4*(sizeV)];
    treeFill(v, tree, 0, sizeV-1, 0);
    treeDisplay(tree, 4*sizeV);
    std::cout<<'\n';
    std::cout<<treeQuery(tree, 0, 1, 0, sizeV-1, 0);
    std::cout<<'\n';
    treeUpdate(tree, 0, sizeV, 0, 0, getDiff(v, 7, 0));
    treeDisplay(tree, 4*sizeV);
    std::cout<<'\n';
    std::cout<<treeQuery(tree, 0, 1, 0, sizeV-1, 0);


    return 0;
}

void treeFill(int input[], int segTree[], int low, int high, int pos){
    if(low==high){
        segTree[pos]=input[low];
        std::cout<<low<<' '<<input[low]<<'\n';
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
void treeUpdate(int segTree[], int low, int high, int pos, int index, int diff){
    if(low>index||index>high) {
        return;
    }
    segTree[pos] += diff;
    if(low!=high) {
        int mid = (low + high) / 2;
        treeUpdate(segTree, low, mid, 2 * pos + 1, index, diff);
        treeUpdate(segTree, mid + 1, high, 2 * pos + 2, index, diff);
    }

}

void treeDisplay(int a[], int s){
    for(int i=0; i<(s-1); i++)
        std::cout<<a[i]<<' ';
}
int getDiff(int input[], int value, int index){
    return value-input[index];
}