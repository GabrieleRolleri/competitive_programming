#include <bits/stdc++.h>

using namespace std;

int mat[10][10]={{1, 5, 4, 5, 4, 3, 4, 3, 2, 3},
                 {5, 1, 2, 3, 2, 3, 4, 3, 4, 5},
                 {4, 2, 1, 2, 3, 2, 3, 4, 3, 4},
                 {5, 3, 2, 1, 4, 3, 2, 5, 4, 3},
                 {4, 2, 3, 4, 1, 2, 3, 2, 3, 4},
                 {3, 3, 2, 3, 2, 1, 2, 3, 2, 3},
                 {4, 4, 3, 2, 3, 2, 1, 4, 3, 2},
                 {3, 3, 4, 5, 2, 3, 4, 1, 2, 3},
                 {2, 4, 3, 4, 3, 2, 3, 2, 1, 2},
                 {3, 5, 4, 3, 4, 3, 2, 3, 2, 1}
                 };


int main(){
    char T;
    int t, S=0;
    int prev=0;
    cin.get(T);
    do{
        t=int(T-'0');
        S+=mat[prev][t];
        prev=t;
        cin.get(T);
    }while(T!='\n');

    cout<<S;

    return 0;
}