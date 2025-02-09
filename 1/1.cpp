#include <iostream>
using namespace std;
#define TAM 30
struct Candidatas{
    string nome;
    float altura;
    int peso;
    string naturalidade;
    string estado;
};

void cadastrarCandidatas(Candidatas V[TAM]){
    int i;
    for(i=0;i<TAM;i++){
        cout << "Digite seu Nome: ";
        cin >> V[i].nome;
        cout << "Digite sua Altura: ";
        cin >> V[i].altura;
        cout << "Digite seu Peso: ";
        cin >> V[i].peso;
        cout << "Digite sua Naturalidade: ";
        cin >> V[i].naturalidade;
        cout << "Digite seu Estado (de forma abreviada EX:SP): ";
        cin >> V[i].estado;
    }

 
}
void mostrarCandidatas(Candidatas V[TAM]){
    int i;
    bool encontrou = false;
    
    cout << " Lista de Candidatas com mais de 1.85 do estado de São Paulo\n ";

    for(i=0;i<TAM;i++){
        if(V[i].altura >= 1.85 && V[i].estado == "SP")
        cout << V[i].nome << endl;
        encontrou = true;
    }

    if (!encontrou){
        cout << " Nenhuma candidata atende aos critérios. \n";

    }
}



Candidatas Cdstr[TAM];
int main(){
    setlocale (LC_ALL,"Portuguese");
    cadastrarCandidatas(Cdstr);
    mostrarCandidatas(Cdstr);
    return 0;
}