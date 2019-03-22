#include <bits/stdc++.h>

using namespace std;

bool mat[17001][17001];
bool mod[10][10];

void paint(int, int, int, int, int, int, int);


int main(){
    int N, K;
    cin>>N>>K;
    int L=int(pow(N, K));
    char c;
    getchar_unlocked();

    for (int i = 0; i < N; ++i){
        for (int j = 0; j < N; ++j) {
            c = char(getchar_unlocked());
            //cout<<c;
            if(char(c)=='*')
                mod[i][j]=true;
            else
                mod[i][j]=false;
        }
        getchar_unlocked();
    }
    /*for(int i=0; i<N; ++i){
        for(int j=0; j<N; ++j){
            cout<<mod[i][j]<<' ';
        }
        cout<<'\n';
    }*/


    paint(N, K, 0, 0, 0, L-1, L-1);




    for(int i=0; i<L; ++i){
        for(int j=0; j<L; ++j){
            if(!mat[i][j])
                putchar_unlocked('*');
            else
                putchar_unlocked('.');
        }
        putchar_unlocked('\n');
    }
    return 0;
}

void paint(int N, int K, int cK, int xi, int yi, int xf, int yf){
    //cout<<"cK: "<<cK<<" xi: "<<xi<<" yi: "<<yi<<" xf: "<<xf<<" yf: "<<yf<<'\n';
    int W=xf-xi+1, H=yf-yi+1;
    if(cK==K-1){
        for(int i=0; i<N; ++i){
            for(int j=0; j<N; ++j){
                mat[xi+i][yi+j]=!mod[i][j];
            }
        }
    }
    else{
        for (int i = 0; i < N; ++i) {
            for (int j = 0; j < N; ++j) {
                if (!mod[i][j])
                    paint(N, K, cK + 1, xi + i * (W / N), yi + j * (H / N), xi + (i + 1) * (W / N),
                          yi + (j + 1) * (H / N));
            }
        }
    }
}