#include <bits/stdc++.h>
#define CYC(i, a, b) for(int i=a; i<b; i++)
#define CYCI(i, a, b) for(auto i=a; i!=b; ++i)

using namespace std;

typedef vector<int> vi;
typedef vector<long long> vll;
typedef long long ll;
typedef pair<int, int> pii;
typedef pair<long, long> pll;

vi numeri;
vi segmentTree;
int N;

void constructTree(int, int, int);
int queryUtil(int, int, int, int, int);
int query(int, int);
void updateUtil(int, int, int, int, int);
void update(int, int);

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    N=20;
    int sizeofST=2*(int)pow(2, N);
    numeri.resize(N);
    segmentTree.resize(sizeofST);
    srand(time(0));
    CYC(i, 0, N){
        numeri[i]=-20+rand()%41;
        cout<<numeri[i]<<' ';
    }
    constructTree(0, N-1, 1);
    cout<<endl<<query(12, 14)<<endl;
    update(13, 14);
    cout<<endl<<query(12, 14)<<endl;

    return 0;
}

void constructTree(int left, int right, int pos){
    if(left==right){
        segmentTree[pos]=numeri[left];
    }
    else {
        int mid = (left + right) / 2;
        constructTree(left, mid, 2 * pos);
        constructTree(mid + 1, right, 2 * pos + 1);
        segmentTree[pos] = segmentTree[2*pos] + segmentTree[2*pos+1];
    }
}

int query(int left, int right){
    return queryUtil(left+1, right+1, 0, N, 1);
}

int queryUtil(int leftQ, int rightQ, int left, int right, int pos){
    if(leftQ>rightQ)
        return 0;
    if(leftQ==left&&rightQ==right){
        return segmentTree[pos];
    }
    int mid=(left+right)/2;
    return queryUtil(leftQ, min(rightQ, mid), left, mid, 2*pos)+queryUtil(max(leftQ, mid+1), rightQ, mid+1, right, 2*pos+1);
}

void update(int Q, int D){
    updateUtil(Q+1, D, 0, N, 1);
}

void updateUtil(int U, int D, int left, int right, int pos){
    if(left==right){
        segmentTree[pos]=D;
    }
    else{
        int mid=(left+right)/2;
        if(U<=mid)
            updateUtil(U, D, left, mid, 2*pos);
        else
            updateUtil(U, D, mid+1, right, 2*pos+1);
        segmentTree[pos]=segmentTree[2*pos]+segmentTree[2*pos+1];
    }
}