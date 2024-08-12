#include <iostream>
#include <stdlib.h>

#define size 200

using std::cout, std::endl, std::cin, std::end, std::begin;

int cpf[size], saldo[size], menu, op, cpfpesquisa, i, deposito;
char nome[size][50]; 
static int linha;



void pesquisar(){
    cout<< "Digite seu CPF para pesquisar sua conta\n";
    cout << "CPF:";
    cin >> cpfpesquisa;
    for ( i=0; i<size; i++ ){
        if(cpf[i] == cpfpesquisa){
            cout   << "Bem vindo " << nome[i] <<" seu saldo é: " << saldo[i] << " Reais. \n" ;
        }else { 
            break;
            }
    } 
}

void depositar(){
    cout<< "Digite seu CPF para acessar sua conta\n";
    cout << "CPF:";
    cin >> cpfpesquisa;
    for ( i=0; i<size; i++ ){
        if(cpf[i] == cpfpesquisa){
            cout  << "Bem vindo " << nome[i] <<" seu saldo é: " << saldo[i] << " Reais. \n" ;
            cout << "Quanto deseja depositar? \n";
            cin >> deposito;
            saldo[i] = saldo[i] + deposito;
            cout << "Deposito realizado com sucesso\n seu saldo agora é: " << saldo[i];
        }else { 
            break;
            }
    } 
}

void sacar(){
    cout<< "Digite seu CPF para acessar sua conta\n";
    cout << "CPF:";
    cin >> cpfpesquisa;
    for ( i=0; i<size; i++ ){
        if(cpf[i] == cpfpesquisa){
            cout  << "Bem vindo " << nome[i] <<" seu saldo é: " << saldo[i] << " Reais. \n" ;
            cout << "Quanto deseja Sacar? \n";
            cin >> deposito;
            saldo[i] = saldo[i] - deposito;
            cout << "Saque realizado com sucesso\n seu saldo agora é: " << saldo[i];
        }else { 
            break;
            }
    } 
}

void listar(){
    cout << "Iniciando listagem de usuarios\n";
    for (i=0; i<size; i++){
        if(cpf[i]>0){
            cout << "Nome: " << nome[i] << " CPF: " << cpf[i] << " Saldo: " << saldo[i] << endl;
        }
        system("pause");
    }
}

void cadastrar(){
    do{
    cout << "Insira os dados requeridos abaixo:\n";
    cout << "Seu nome(por favor insira apenas um nome):\n";
    cin >> nome[linha];
    cout << "Insira seu cpf:\n";
    cin >> cpf[linha];
    cout << "Usuario cadastrado com sucesso\n";
    saldo[linha] = 0;
    linha++;
    cout << "O que deseja fazer agora?\n 1- Continuar cadastrando 2- Sair \n";
    cin >> op;
    } while (op == 1);
    }

int main(){
do{
cout << "Bem vindo ao banco XXXX\n";
cout << "Voce deseja:\n";
cout << "1- Cadastrar um novo usuario\n";
cout << "2- Pesquisar Usuario cadastrado\n";
cout << "3- Fazer deposito\n";
cout << "4- Realizar saque\n";
cout << "5- Sair\n";
cin >> menu;
switch(menu){
    case 1:
    cadastrar();
        break;
    case 2:
    pesquisar();
        break;
    case 3:
    depositar();
        break;
    case 4:
    sacar();
        break;
    case 5:
    system("exit");
        break;
    case 1324:
    listar();
        break;   
    default:
    cout << "Por favor ensira uma opcao valida\n";
        break;
    }
}while(menu != 5);

}