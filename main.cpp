#include <iostream>
#define size 200

using std::cout, std::endl, std::cin, std::end, std::begin;

int cpf[size], saldo[size], menu, op;
char nome[size][50], senha[size][50]; 
static int linha;



void menu1(){
    
}


void comeco(){
    do{
    cout << "Insira os dados requeridos abaixo:\n";
    cout << "Seu nome(por favor insira apenas um nome):\n";
    cin >> nome[linha];
    cout << "Digite sua senha:\n";
    cin >> senha[linha];
    cout << "Insira seu cpf:\n";
    cin >> cpf[linha];
    cout << "Usuario cadastrado com sucesso\n";
    saldo[linha] = 0;
    linha++;
    cout << "O que deseja fazer agora?\n 1- Continuar cadastrando 2- Sair \n";
    cin >> op;
    } while (op == 1);
    }

int main()
{
cout << "Bem vindo ao banco XXXX\n";
cout << "Voce deseja:\n";
cout << "1- Cadastrar um novo usuario\n";
cout << "2- Pesquisar Usuario cadastrado\n";
cout << "3- Fazer deposito\n";
cout << "4- Realizar saque\n";
cout << "5- Retirar extrato\n";
cout << "6- Sair\n";
cin >> menu;
switch(menu){
    case 1:
        break;
    case 2:
        break;
    case 3:
        break;
    case 4:
        break;
    case 5:
        break;
    default:
        break;
    }
comeco();

}