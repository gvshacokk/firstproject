#include <iostream>
#define size 200

using std::cout, std::endl, std::cin;

int numtt, cpf[size], menu;
char nome[size][50], senha[size][50]; 
static int linha = 0;



void menu1(){
    cout << "Voce é:\n";
    cout << "1- Usuario novo\n";
    cout << "2- Usuario já cadastrado\n";
}

void menu2(){
    cout << "O que deseja fazer agora?\n";
    cout << "1- Fazer deposito\n";
    cout << "2- Realizar saque\n";
    cout << "3- Retirar extrato?\n";
    cout << "4- Sair\n";
    cin  >> menu;
}

bool puxanum(){
if (numtt == 1){
    cout << "Seja vamos iniciar o seu cadastro agora mesmo!!\n";
    return false;
}
if (numtt == 2){
    cout << "Seja bem vindo de volta!\n";
    return false;
}
else
    cout << "Por favor insira um valor valido\n";
    return true;
}

bool usernew(){
     if (numtt == 1){
        return true;
    }
    else{
        return false;
    }
}

void comeco(){
    cout << "Insira os dados requeridos abaixo:\n";
if (usernew()){
    cout << "Seu nome(por favor insira apenas um nome):\n";
    cin >> nome[linha];
    cout << "Digite sua senha:\n";
    cin >> senha[linha];
    linha++;
    menu2();
    }
else{
    cout << "Insira seu cpf:\n";
    cin >> cpf[linha];
    cout << "Insira sua senha:\n";
    cin >> senha[linha];
    }    
}

void cadastro(){

}

int main()
{
cout << "Bem vindo ao banco XXXX\n";
menu1();
cin >> numtt;

while (puxanum()) {
    menu1();
    cin >> numtt;
}
comeco();

}