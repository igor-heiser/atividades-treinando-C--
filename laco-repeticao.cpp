#include <iostream>
using namespace std;

int main(){
    int numero = 22;

    cout << "Tabuada do 22:" << endl;

    for(int i = 0; i <= 10; i++){
        cout << numero << " x " << i << " = " << numero * i << endl;
    }

    return 0;
}