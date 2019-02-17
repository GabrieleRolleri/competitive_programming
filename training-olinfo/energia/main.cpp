#include <bits/stdc++.h>


int main(){
    std::ifstream in;
    in.open("input.txt");
    std::ofstream out;
    out.open("output.txt");

    long long N, S=0;
    std::cin>>N;
    std::vector<int> costoCifreUntil(10);
    costoCifreUntil={6, 8, 13, 18, 22, 27, 33, 36, 43, 49};
    std::vector<int> costoCifre(10);
    costoCifre={6, 2, 5, 5, 4, 5, 6, 3, 7, 6};
    int lastDigit;
    while(N>=10){
        lastDigit=N%10;
        S+=(costoCifreUntil[9]*((N-(N%10))/10)+costoCifreUntil[lastDigit]);
        N=N-(N%10);
        N/=10;
    }
    if(N!=1)
        S+=costoCifreUntil[N];
    else
        S+=2;

    std::cout<<S;
    return 0;
}