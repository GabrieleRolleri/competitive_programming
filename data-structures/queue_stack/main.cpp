#include <bits/stdc++.h>

struct nodo{
    int val;
    nodo* next;
};

void push_front(int v, nodo* &lista){
    nodo* ptr=new nodo;
    if(lista==nullptr) {
        lista = ptr;
        ptr->next=nullptr;
        ptr->val=v;
    }
    else{
        ptr->next=lista;
        ptr->val=v;
        lista=ptr;
    }
}

void push_back(int v, nodo* &lista){
    nodo* ptr=new nodo;
    ptr->next=nullptr;
    ptr->val=v;
    if(lista==nullptr)
        lista=ptr;
    else{
        nodo* now=lista;
        while(now->next!=nullptr)
            now=now->next;
        now->next=ptr;
    }
}

int front(nodo* lista){
    if(lista!=nullptr)
        return lista->val;
    return -1;
}

int back(nodo* lista){
    if(lista!=nullptr)


}

int main(){
    nodo* lista=nullptr;



    return 0;
}