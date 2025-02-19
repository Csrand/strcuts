#include <iostream>

using namespace std;

struct Aluno{
	int Matricula;
	char Tipo;
	char Socio;
};

int CadastrarAluno(Aluno L[200])
{
	int Resp, Cont=0;
	
	do
	{
	   cout << endl << "Aluno " << Cont + 1 << ":";
	   cout << endl << "Digite o numero da matricula: ";
	   cin >> L[Cont].Matricula;
	   cout << endl << "Digite o tipo de participacao: ";
	   cin >> L[Cont].Tipo;	   
	   cout << endl << "Eh socio da SBC? (S/N): ";
	   cin >> L[Cont].Socio;	   
	   	
	   cout <<endl<< "Deseja cadastrar outro aluno? [1] Sim [2] Nao"<<endl;
	   cout << "Resposta: ";
       cin >> Resp; 
       
	   Cont++;
	   if(Cont == 200)
	   {	
	      cout << "Total maximo de alunos atingido [200]!!";	
       }	   	   	
	}while(Resp == 1 && Cont < 200);
	
	return Cont;
}

void ImprimirAlunos(Aluno L[200], int TotAlunos)
{
	int Cont;
	for(Cont=0;Cont<TotAlunos;Cont++)
	{
	   cout << endl << "Aluno " << Cont + 1 << ":";
	   cout << endl << "Numero da matricula: "<< L[Cont].Matricula;
	   cout << endl << "Tipo de participacao: "<<L[Cont].Tipo;	   
	   cout << endl << "Socio da SBC: "<< L[Cont].Socio;
	}
}

float CalcularTotal(Aluno L[200], int TotAlunos)
{
	int Cont;
	float Valor, Total = 0;
	for(Cont=0;Cont<TotAlunos;Cont++)
	{
	   if (L[Cont].Tipo == 'A' || L[Cont].Tipo =='a')
	   {
	   	 Valor = 30;
	   }
	   else
	   {
	   		if (L[Cont].Tipo == 'B' || L[Cont].Tipo == 'b')
	   		{
	   			Valor = 60;
			}
			else
			{
				if (L[Cont].Tipo == 'C'|| L[Cont].Tipo == 'c' )
				{
					Valor = 90;
				}
				else // Tipo='D'
				{
					Valor = 100;
				}
			}
	   }
	   	   
	   if (L[Cont].Socio=='S')
	   {
	   	  Valor = Valor * 0.5;
	   }
	   Total = Total + Valor;
	   cout <<endl<< "Total: " << Total;
	}	
	
	
	return Total;
}

int ContarAlunos(Aluno L[200], char Tipo, int TotAlunos)
{
	int Cont, TotalTipo = 0;
	for(Cont=0;Cont<TotAlunos;Cont++)
	{
	   if (L[Cont].Tipo == Tipo)	   
	   {
	   	  TotalTipo++;
	   }
	}	
	
	return TotalTipo;
}

void ImprimirTotais(Aluno L[200], int Total)
{
	cout << endl << "IMPRESSAO OS TOTAIS POR TIPO";
	cout << endl << "Total tipo A: " << ContarAlunos(L, 'A', Total); 
	cout << endl << "Total tipo B: " << ContarAlunos(L, 'B', Total); 
	cout << endl << "Total tipo C: " << ContarAlunos(L, 'C', Total); 
	cout << endl << "Total tipo D: " << ContarAlunos(L, 'D', Total); 
}


main()
{
   int TotAlunos;
   Aluno ListaAlunos[200];
   
   system("color 1F");
   setlocale (LC_ALL,"Portuguese");
	
   TotAlunos = CadastrarAluno(ListaAlunos);
   ImprimirAlunos(ListaAlunos, TotAlunos);	  
   cout << endl<< endl<< "O total geral arrecadado foi: " << CalcularTotal(ListaAlunos, TotAlunos);
   ImprimirTotais(ListaAlunos, TotAlunos);
}
