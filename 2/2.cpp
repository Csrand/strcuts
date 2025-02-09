#include <iostream>
using namespace std;
#define TAM 100

struct Colmeia{
    int codigo;
    string regiao;
    string estado;
    string qualificacao;
    int numAbelhas;

};
void cadastrarColmeias(Colmeia colmeias[TAM]){

    int i;
    for( i=0; i<TAM; i++){
    cout << "Digite os dados da Colmeia" << i + 1 <<endl;
    cout << "Código: ";
    cin >> colmeias[i].codigo;
    cout << "Região: ";colmeias[i].codigo;
    cin >> colmeias[i].regiao;
    cout << "Estado: ";
    cin >> colmeias[i].estado;
    cout << "Qualificação: ";
    cin >> colmeias[i].qualificacao;
    cout << "Número de abelhas: ";
    cin >> colmeias[i].numAbelhas;
    }
}

void mostrarColmeias(const Colmeia colmeias[TAM], const string &filtro){
    bool encontrou = false;
    cout << "\nColmeias com qualificação " << filtro << endl;
    for (int i = 0; i<TAM; i++){
        if(colmeias[i].qualificacao == filtro){
            cout <<"Código: " << colmeias[i].codigo << ", Região: " << colmeias[i].regiao << ", Estado: " << colmeias[i].estado;
            encontrou = true;
        }

    }
    if(!encontrou) {
        cout << "Nenhuma colmeia atende aos critérios. \n";
    }
}



int main(){
    Colmeia colmeias[TAM];

    cadastrarColmeias(colmeias);

    string filtro;
    cout <<"\n Digite a qualificação desejada (forte, médio, fraco): ";
    cin >> filtro;

    mostrarColmeias(colmeias, filtro);
}