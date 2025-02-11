#include <iostream>

using namespace std;

#define TAM 5

struct Produtos{
    string descricao;
    int qntdMin;
    int qntdEst;
    float preco;
};

void cadastrarProdutos(Produtos produtos[]){
    for(int i = 0; i<TAM; i++){
        cout << "Digite a descrição do produto: ";
        cin >> produtos[i].descricao;
        cout << "Digite a quantidade mínima necessária desse produto: ";
        cin >> produtos[i].qntdMin;
        cout << "Digite a quantidade em Estoque desse produto: ";
        cin >> produtos[i].qntdEst;
        cout << "Digite o preço desse produto: ";
        cin >> produtos[i].preco;
    }
}

void mostrarProdutos(Produtos produtos[]){

bool encontrou = false;

for(int i = 0; i<TAM; i++){

    if(produtos[i].qntdEst < produtos[i].qntdMin){
        cout << "O produto " << produtos[i].descricao << "cuja quantidade mínima necessária é " << produtos[i].qntdMin << "esta em falta de estoque com um total de " << produtos[i].qntdEst << "produtos\n";
        encontrou = true; 
    }
}

if(!encontrou){
    cout << "Nenhum produto com falta de estoque\n";
}
}

int main(){
    setlocale (LC_ALL,"Portuguese");
    Produtos produtos[TAM];
    cadastrarProdutos(produtos);
    mostrarProdutos(produtos);


    return 0;
}