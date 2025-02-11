#include <iostream>

using namespace std;

#define TAM 500

struct Filme {
    int codigo;
    string titulo;
    string genero;
    string categoria;
    float preco;
};

void cadastrarFilmes(Filme filmes[]) {
    for(int i = 0; i < TAM; i++ ){
        cout << "Digite o código do filme: " << i + 1 <<": ";
        cin >> filmes[i].codigo;
        cout << "Digite o título do filme: " << i + 1 <<": ";
        cin >> filmes[i].titulo;
        cout << "Digite o genêro do filme: " << i + 1 <<": ";
        cin >> filmes[i].genero;
        cout << "Digite a categoria do filme: " << i + 1 <<": ";
        cin >> filmes[i].categoria;
        cout << "Digite o valor de locação do filme: " << i + 1 <<": ";
        cin >> filmes[i].preco;        
    }
}
void calcularTotal(Filme filmes[]){
    int quantidade;
    cout << "Quantos filmes deseja alugar? ";
    cin >> quantidade;
    float total = 0.0;
    for(int i = 0; i < quantidade; i++){
        int codigo;
        cout << "Digite o código do filme: " << i + 1 <<": ";
        cin >> codigo;

        for(int j = 0; j<TAM; j++ ){
            if(filmes[j].codigo == codigo){
                cout << "Filme: " << filmes[j].titulo << " | Gênero: " << filmes[j].genero << " | Categoria: " << filmes[j].categoria << endl;
                total += filmes[j].preco;
                break;
            }

        }
    }
}

int main(){
    Filme filmes[TAM];
    setlocale (LC_ALL,"Portuguese");
    cadastrarFilmes(filmes);
    calcularTotal(filmes);
    
    return 0;
}
