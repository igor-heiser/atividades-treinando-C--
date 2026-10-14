#include <iostream>
using namespace std;

int main(){
    int idade;

    cout << "Digite sua idade: ";
    cin >> idade;

    if(idade < 18){
        cout << "Voce e menor de idade, nao pode entrar na festa!";
    } else {
        cout << "Seja bem vindo a festa!";
    }

    return 0;
}