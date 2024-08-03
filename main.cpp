#include <iostream>

using std::cout;
using std::cin;
using std::endl;


int main()
{
    //puxar usuario
    cout << "Bem vindo ao banco XXXX" << endl;
    cout << "Voce é:"<<endl;
    cout << "1- Usuario novo"<<endl;
    cout << "2- Usuario já cadastrado"<<endl;
    int nreg;
    cin >> nreg;
    if (nreg == 1){
        cout << "Seja vamos iniciar o seu cadastro agora mesmo!!";
    }
    if (nreg == 2){
        cout << "Seja bem vindo!";
    }
    else
    {
        cout << "Por favor insira um valor valido";
    }




system ("pause");
return 0;
}