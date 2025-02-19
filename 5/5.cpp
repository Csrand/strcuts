#include <iostream>
#include <locale.h>

using namespace std;
#define TAM 30

struct Voos {
    int codigo;
    int horario;
    int qntdPassageiros;
    float valoPassagem;
    string origem;
    string destino;
};

void cadastroDeVoos(Voos voos[TAM]) {
    for (int i = 0; i < TAM; i++) {
        cout << "Digite o código do Vôo:\n";
        cin >> voos[i].codigo;
        cout << "Digite o horário do Vôo em números por extenso (EX 1930):\n";
        cin >> voos[i].horario;
        cout << "Digite a quantidade de passageiros do Vôo:\n";
        cin >> voos[i].qntdPassageiros;
        cout << "Digite o valor da passagem do Vôo:\n";
        cin >> voos[i].valoPassagem;
        cout << "Digite o estado de origem (ex: SP)\n";
        cin >> voos[i].origem;
        cout << "Digite o destino do Vôo:\n";
        cin >> voos[i].destino;
    }
}

void consultaVoosUsuario(Voos voos[TAM], string origem) {
    cout << "\nVôos encontrados para a origem: " << origem << "\n";
    
    for (int i = 0; i < TAM; i++) {
        if (voos[i].origem == origem) {
            cout << "--------------------------\n";
            cout << "Origem: " << voos[i].origem << endl;
            cout << "Destino: " << voos[i].destino << endl;
            cout << "Horário: " << voos[i].horario << endl;
            cout << "Quantidade de Passageiros: " << voos[i].qntdPassageiros << endl;
            cout << "Valor da Passagem: " << voos[i].valoPassagem << endl;
        }
    }

    cout << "\nVôos de sua Origem com horário de saída pela manhã:\n";
    for (int i = 0; i < TAM; i++) {
        if (voos[i].origem == origem && voos[i].horario < 1200) {
            cout << "--------------------------\n";
            cout << "Origem: " << voos[i].origem << endl;
            cout << "Destino: " << voos[i].destino << endl;
            cout << "Horário: " << voos[i].horario << endl;
        }
    }
}

int main() {
    string origem;
    setlocale(LC_ALL, "Portuguese");

    Voos voos[TAM];
    cadastroDeVoos(voos);

    cout << "Digite o estado de origem para consulta (ex: SP)\n";
    cin >> origem;

    consultaVoosUsuario(voos, origem);

    return 0;
}
