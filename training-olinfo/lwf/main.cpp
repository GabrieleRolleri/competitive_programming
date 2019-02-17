#include <bits/stdc++.h>

int main(){
    std::ifstream in;
    in.open("input.txt");
    std::ofstream out;
    out.open("output.txt");

    int N;
    std::cin>>N;
    std::stack<int> fibo;
    std::stack<bool> bin;
    int f1=1, f2=1, t;
    for(int i=0; f1<=N; i++){
        fibo.push(f1);
        t=f2;
        f2+=f1;
        f1=t;
    }
    while(!fibo.empty()){
        if(fibo.top()>N){
            std::cout<<fibo.top()<<'\t'<<false<<'\n';
            fibo.pop();
            bin.push(false);

        }
        else{
            std::cout<<fibo.top()<<'\t'<<true<<'\n';
            N-=fibo.top();
            fibo.pop();
            bin.push(true);
        }
    }

    while(!bin.empty()){
        std::cout<<bin.top();
        bin.pop();
    }
    return 0;
}
