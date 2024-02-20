#include <iostream>
#include <cstdlib>
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

    cout << "Voc� deseja operar como? 0 - Divis�o, 1 - Multiplica��o,2 - Soma, 3 - Subtrair" << endl;
    cin >> o;
    
    switch (o){
         case 0:
            resultado = n1 / n2;
            cout << "O resultado da divis�o �: "<< resultado;
            break;
         case 1:
            resultado = n1 * n2;
            cout << "O resultado da multiplica��o �: " << resultado;
            break;
         case 2:
            resultado = n1 + n2;
            cout << "O resultado da soma �: "<< resultado;
            break;
         case 3:
            resultado = n1 - n2;
            cout << "O resultado da subtra��o �: " << resultado;
            break;   
         default:
             cout << "Valor indeterminado" << endl;
             break;
    }     

   system("pause");

}
