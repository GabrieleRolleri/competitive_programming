#include <bits/stdc++.h>

int main(){
    std::ifstream in;
    in.open("input.txt");
    std::ofstream out;
    out.open("output.txt");

    int N;
    in>>N;

    std::vector<int> cubetti(N);
    std::vector<bool> usedColor(N+1, false);
    std::stack<int> availableColor;
    for(int i=0; i<N; i++) {
        in >> cubetti.at(i);
        usedColor.at(cubetti.at(i))=true;
    }
    for(int i=1; i<=N; i++)
        if(!usedColor.at(i))
            availableColor.push(i);

    /*while(!availableColor.empty()){
        std::cout<<availableColor.top()<<' ';
        availableColor.pop();

    }*/
    std::vector<bool> usedColor2(N+1, false);
    for(int i=0; i<N; i++){
        if(usedColor2.at(cubetti.at(i))) {
            out << i <<' '<< availableColor.top()<<'\n';
            availableColor.pop();
        }
        else
            usedColor2.at(cubetti.at(i))=true;

    }

}
void Diversifica(int N, int colore[]){

    for(int i=0; i<N; i++)
        cubetti.at(i)=colore[i];
    std::vector<int> cubetti(N);
    std::vector<bool> usedColor(N+1, false);
    std::stack<int> availableColor;
    for(int i=0; i<N; i++) {
        in >> cubetti.at(i);
        usedColor.at(cubetti.at(i))=true;
    }
    for(int i=1; i<=N; i++)
        if(!usedColor.at(i))
            availableColor.push(i);

    /*while(!availableColor.empty()){
        std::cout<<availableColor.top()<<' ';
        availableColor.pop();

    }*/
    std::vector<bool> usedColor2(N+1, false);
    for(int i=0; i<N; i++){
        if(usedColor2.at(cubetti.at(i))) {
            Vernicia(i, availableColor.top());
            availableColor.pop();
        }
        else
            usedColor2.at(cubetti.at(i))=true;

    }





}