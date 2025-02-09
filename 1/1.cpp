#include <iostream>
using namespace std;
#define TAM 30
struct Candidata{
    string nome;
    float altura;
    int peso;
    string naturalidade;
    string estado;
};

void cadastrarCandidatas(Candidata candidatas[TAM]){
    int i;
    for(i=0;i<TAM;i++){
        cout << "Digite seu Nome: ";
        cin >> candidatas[i].nome;
        cout << "Digite sua Altura: ";
        cin >> candidatas[i].altura;
        cout << "Digite seu Peso: ";
        cin >> candidatas[i].peso;
        cout << "Digite sua Naturalidade: ";
        cin >> candidatas[i].naturalidade;
        cout << "Digite seu Estado (de forma abreviada EX:SP): ";
        cin >> candidatas[i].estado;
    }

 
}
void mostrarCandidatas(Candidata candidatas[TAM]){
    int i;
    bool encontrou = false;
    
    cout << " Lista de Candidatas com mais de 1.85 do estado de São Paulo\n ";

    for(i=0;i<TAM;i++){
        if(candidatas[i].altura >= 1.85 && candidatas[i].estado == "SP")
        cout << candidatas[i].nome << endl;
        encontrou = true;
    }

    if (!encontrou){
        cout << " Nenhuma candidata atende aos critérios. \n";

    }
}



Candidata candidatas[TAM];
int main(){
    setlocale (LC_ALL,"Portuguese");
    cadastrarCandidatas(candidatas);
    mostrarCandidatas(candidatas);
    return 0;
}