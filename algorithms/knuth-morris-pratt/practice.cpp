#include <bits/stdc++.h>

using namespace std;


void prefix(string S, vector<int> &P, int n){
  int j;
  P[0]=0;
    for(int i = 1 ; i < n; ++i){
      j=P[i-1];
      while(j>0 && S[i]!=S[j])
        j=P[j-1];
      if(S[i]==S[j])
        ++j;
      P[i]=j;
    }
}


int main(){

  string s, t;

  cout<<"Inserisci il testo: ";
  cin>>t;
  cout<<"\nInserisci la stringa: ";
  cin>>s;
  cout<<"\n";

  int ns = s.length();
  s = s + '0' + t;
  int n = s.length();
  vector<int> R(n);

  prefix(s, R, n);

  for(int i = ns+1; i < n; ++i)
    if(R[i]==ns)
      cout<<"Trovata occorenza a: "<<i-2*ns<<'\n';

  return 0;
}
