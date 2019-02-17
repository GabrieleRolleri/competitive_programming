

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
int N, sizeofSt;

void constructTree(int, int, int);
int queryUtil(int, int, int, int, int);
int query(int, int);
void updateUtil(int, int, int, int, int);
void update(int, int);

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int Q;
    cin>>N>>Q;
    int x=(int)(ceil(log2(N)));
    sizeofSt=2*(int)pow(2, x)-1;
    numeri.resize(N);
    segmentTree.resize(sizeofSt);
    CYC(i, 0, N){
        numeri[i]=false;
    }
    constructTree(0, N, 0);
    bool temp;
    int start, end;
    CYC(i, 0, Q){
        cin>>temp>>start>>end;
        if(temp){
            cout<<query(start, end)<<' ';
        }
        else{
            update(start, end);
        }

    }

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
        segmentTree[pos] = 0;
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
    return segmentTree[pos]+queryUtil(leftQ, min(rightQ, mid), left, mid, 2*pos)+queryUtil(max(leftQ, mid+1), rightQ, mid+1, right, 2*pos+1);
}

void update(int left, int right){
    updateUtil(left+1, right+1, 0, N, 1);
}

void updateUtil(int leftU, int rightU, int left, int right, int pos){
    if(leftU>rightU)
        return;
    if(leftU==left&&rightU==right){
        segmentTree[pos]+=((right-left+1)-2*segmentTree[pos]);
    }else {
        int mid = (left + right) / 2;
        updateUtil(leftU, min(rightU, mid), left, mid, 2 * pos);
        updateUtil(max(leftU, mid + 1), rightU, mid + 1, right, 2 * pos + 1);
    }
}