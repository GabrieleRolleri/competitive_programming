#include <bits/stdc++.h>

using namespace std;


int main(){

    string s;
    cin>>s;
    int i=0, maxL=1, S=0;
    while(s[i]!='\0'){
        if(s[i-1]!=s[i]){
            maxL=1;
        }
        else
            maxL++;
        i++;
        S=max(S, maxL);
    }
    cout<<S;


    return 0;
}