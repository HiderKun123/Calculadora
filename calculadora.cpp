#include <iostream>
#include <limits>
#include <iomanip>
#include <string>
using namespace std;

int main() {
    
    string continuar = "s";
    
    do {
        
        float numb1, numb2, resultado;
        char operador;
        
        cout << "Bem-vindo à calculadora!"
        << endl;
        
        cout << "Digite o primeiro número: ";
        while (!(cin >> numb1)) {
            
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            
            cout << "Apenas números. Tente novamente: ";
            
        }
        
         cout << "Digite o segundo número: ";
        while (!(cin >> numb2)) {
            
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            
            cout << "Apenas números. Tente novamente: ";
            
        }
        
        cout << "Escolha um operador (+, -, *, /): ";
        cin >> operador;
        
        switch (operador) {
            
            case '-': resultado = numb1 - numb2;
            cout << "Resultado: " << resultado << endl;
            break;
            
            case '+': resultado = numb1 + numb2;
            cout << "Resultado: " << resultado << endl;
            break;
            
            case '/': if (numb2 == 0) {
                
                cout << "Não é possível dividir por zero."
                << endl;
                
            } else {
                
                resultado = numb1 / numb2;
                cout << "Resultado: " << resultado << endl;
            } break;
            
            case '*': resultado = numb1 * numb2;
            cout << "Resultado: " << resultado << endl;
            break;
            
            default:
                
                cout << "Operador inválido!"
                << endl;
            break;
        }
        
        do {
       
       cout << "Desjea realizar outra operação? (s/n) ";
        cin >> continuar;
        
        if (continuar != "s" && continuar != "n" && continuar != "sim" && continuar != "não") {
            
            cout << "Entrada inválida. Digite 's' para 'sim' e 'n' para 'não'."
            << endl;
        } 
        
        if (continuar == "exit") {
        cout << "Encerrando o programa. Obrigado por utilizar a calculadora!" << endl;
        break; } // Sai do loop imediatamente 
        
        if (continuar == "n") {
            
            cout << "Obrigado por utilizar a calculadora. Até breve!"
            << endl;
        } 
         if (continuar == "não") {
            
            cout << "Obrigado por utilizar a calculadora. Até breve!"
            << endl;
        } 
        
        
        } while (continuar != "s" && continuar != "n" && continuar != "sim" && continuar != "não");
        
        
        
    } while (continuar == "s" || continuar == "sim");
     return 0;
}