#include <iostream>
#include <conio.h>

using std::cout, std::endl, std::cin;

int numtt;
bool numerro = false;



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

void comeco(){

}

int main()
{
cout << "Bem vindo ao banco XXXX\n";
intro();
cin >> numtt;
numerro = puxanum();

while (numerro = false)
{
    intro();
    cin >> numtt;
    cout << numerro;
    numerro = puxanum();
}
}