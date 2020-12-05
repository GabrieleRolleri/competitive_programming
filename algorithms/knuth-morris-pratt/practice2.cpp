#include <bits/stdc++.h>

using namespace std;

vector<int> KMP(string s, string t) {
    int ns = s.length();
    s = s + '0' + t;
    int n = s.length();
    int *P = (int*)malloc(n*sizeof(int));
    vector<int> R;
    P[0] = 0;
    int j;
    for (int i = 1; i < n; ++i) {
        j = P[i - 1];
        while (j > 0 && s[i] != s[j])
            j = P[j - 1];
        if (s[i] == s[j])
            j++;
        P[i] = j;
    }
    for(int i = ns+1; i < n; ++i){
        if(P[i]==ns)
            R.push_back(i-2*ns);
    }
    return R;
}

int main() {
    string s, t;

    cout<<"Inserisci il testo da ricercare: ";
    cin>>t;
    cout<<"\nInserisci la stringa: ";
    cin>>s;
    cout<<"\n";

    vector<int> R=KMP(s, t);

    for(int i : R){
        cout<<i<<' ';
    }

    return 0;
}
