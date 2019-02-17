#include <bits/stdc++.h>


using namespace std;

struct cliente{
    string nome;
    string cognome;
    int bolla;
    cliente* next;
};

void aggiunta(cliente*);
void pop(cliente*, int*);
int size(cliente*);
void pop_back(cliente*);



int main(){
    auto sLista=new cliente;
    sLista->next=nullptr;
    int incasso;
    aggiunta(sLista);
    aggiunta(sLista);
    pop(sLista, &incasso);
    pop(sLista, &incasso);

    cout<<"L'ufficio postale ha ricavato "<<incasso<<" euro\n";
}

void aggiunta(cliente* lista){
    while(lista->next!=nullptr){
        lista=lista->next;
    }
    auto temp=new cliente;
    lista->next=temp;
    cout<<"Inserisci il nome del nuovo cliente: ";
    cin>>temp->nome;
    cout<<"Inserisci il cognome del nuovo cliente: ";
    cin>>temp->cognome;
    cout<<"Inserisci l'importo del bolletino del nuovo cliente: ";
    cin>>temp->bolla;
    temp->next=nullptr;
}

void pop(cliente* lista, int* s){
    auto sLista=lista;
    lista=lista->next;
    cout<<"Il cliente "<<lista->nome<<" "<<lista->cognome<<" ha pagato "<<lista->bolla<<"€\n";
    *s+=lista->bolla;
    sLista->next=lista->next;
    delete lista;
}