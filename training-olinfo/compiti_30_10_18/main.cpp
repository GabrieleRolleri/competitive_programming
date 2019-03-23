#include <bits/stdc++.h>


using namespace std;


int main()
{
    int R=5, C=8;
    if(R%2){

            for (int i = 0; i < R-1; ++i) {
                cout<<"SOTTO"<<' ';
            }
            for (int i = 0; i < (C / 2 - 1); ++i) {
                cout<<"DESTRA"<<' ';
                for (int j = 0; j < R - 2; ++j) {
                    cout<<"SOPRA"<<' ';
                }
                cout<<"DESTRA";
                for (int j = 0; j < R - 2; ++j) {
                    cout<<"SOTTO"<<' ';
                }
            }
            cout<<"DESTRA"<<' ';
            for (int i = 0; i < R-1; ++i) {
                cout<<"SOPRA"<<' ';
            }
            for(int i=0; i<C-1; ++i){
                cout<<"SINISTRA"<<' ';

        }
    }
    else{

            for (int i = 0; i < C-1; ++i) {
                cout<<"DESTRA"<<' ';
            }
            for (int i = 0; i < (R / 2 - 1); ++i) {
                cout<<"SOTTO"<<' ';
                for (int j = 0; j < C - 2; ++j) {
                    cout<<"SINISTRA"<<' ';
                }
                cout<<"SOTTO"<<' ';
                for (int j = 0; j < C - 2; ++j) {
                    cout<<"DESTRA"<<' ';
                }
            }
            cout<<"SOTTO"<<' ';
            for (int i = 0; i < C-1; ++i) {
                cout<<"SINISTRA"<<' ';
            }
            for(int i=0; i<R-1; ++i){
                cout<<"SOPRA"<<' ';
            }

    }





}