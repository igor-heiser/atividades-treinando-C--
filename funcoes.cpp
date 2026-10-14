#include <iostream>
using namespace std;

int somar(int numero1, int numero2){
    int resultado = numero1 + numero2;
    cout << resultado;
}

int main(){
    int numero1;
    int numero2;

    cout << "Digite o primeiro numero: ";
    cin >> numero1;

    cout << "Digite o segundo numero: ";
    cin >> numero2;

    somar(numero1, numero2);
    
    return 0;
}