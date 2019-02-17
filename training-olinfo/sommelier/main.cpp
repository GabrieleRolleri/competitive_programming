#include <bits/stdc++.h>

using namespace std;




int main(){

    ifstream in;
    in.open("input.txt");
    ofstream out;
    out.open("output.txt");

    int N;
    in>>N;
    vector<int> grad(N);
    vector<int> dp(N, 0);
    for(int i=0; i<N; i++)
    {
        in>>grad.at(i);
    }
    dp.at(N-1)=1;
    int maxL=0;
    for(int i=N-1; i>=0; i--){
        maxL=0;
        for(int j=i+2; j<N; j++)
            if(grad.at(i)<=grad.at(j))
                maxL=max(maxL, dp.at(j));
        dp.at(i)=maxL+1;
    }

    out<<*max_element(dp.begin(), dp.end());

    return 0;
}