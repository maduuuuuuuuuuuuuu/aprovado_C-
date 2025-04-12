#include <iostream>

using namespace std;

int main() {

    float nota1, nota2, nota3, frequencia;
    
    cout << "\n Digite sua frequencia: ";
    cin >> frequencia;
    
    cout << "\n Digite a primeira nota: ";
    cin >> nota1;
    
    cout << "\n Digite a segunda nota: ";
    cin >> nota2;
    
    cout << "\n Digite a terceira nota: ";
    cin >> nota3;
    
   


    float media = (nota1 + nota2 + nota3) / 3;
    bool aprovado = false;
    
    aprovado = (media>=6) && (frequencia>=75);
    
    cout << "\n frequencia: " << frequencia << "%";
    cout << "\n media: " << media;
    cout << "\n aprovado: " << aprovado;

    
    return 0;

}
