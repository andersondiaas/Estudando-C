#include <iostream>
#include <locale>

using namespace std;

int main(){
    setlocale(LC_ALL, "Portuguese");
    
    double n1,n2;
    
    int o;
    
    int resultado;
    
    cout << "----------------" << endl;
    cout << "Calculadora Bala" << endl;
    cout << "----------------" << endl << endl;
    
    cout << "Digite um primeiro valor: " << endl;
    cin >> n1;
    
    cout << "Digite um segundo valor: " << endl;
    cin >> n2;

    cout << "Você deseja operar como? 0 - Divisão, 1 - Multiplicação,2 - Soma, 3 - Subtrair" << endl;
    cin >> o;
    
    switch (o){
         case 0:
            resultado = n1 / n2;
            cout << "O resultado da divisão é: "<< resultado;
            break;
         case 1:
            resultado = n1 * n2;
            cout << "O resultado da multiplicação é: " << resultado;
            break;
         case 2:
            resultado = n1 + n2;
            cout << "O resultado da soma é: "<< resultado;
            break;
         case 3:
            resultado = n1 - n2;
            cout << "O resultado da subtração é: " << resultado;
            break;   
         default:
             cout << "Valor indeterminado" << endl;
             break;
    }     

}
