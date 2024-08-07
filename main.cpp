#include <iostream>

using std::cout, std::endl, std::cin;

int numtt;
char nome, senha;



void intro(){
    cout << "Voce é:\n";
    cout << "1- Usuario novo\n";
    cout << "2- Usuario já cadastrado\n";
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
if (usernew()){
    cout << "Insira os dados requeridos abaixo:\n";
    cout << "Seu nome(por favor insira apenas um nome):\n";
    cin >> nome;
    cout << "Digite sua senha:\n";
    cin >> senha;
    }
else{
    cout << "Insira sua senha:\n";
    cin >> senha;
    }    
}

int main()
{
cout << "Bem vindo ao banco XXXX\n";
intro();
cin >> numtt;

while (puxanum()) {
    intro();
    cin >> numtt;
}
comeco();
}