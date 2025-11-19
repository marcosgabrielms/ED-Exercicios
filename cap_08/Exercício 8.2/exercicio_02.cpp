#include <iostream>
#include <cstring>

using namespace std;

const int TAM = 50; //Tamanho máximo de cada nome

void insere(char x[], char v[][TAM], int n) {

     while (n > 0 && strcmp(x, v[n-1]) < 0) {

        strcpy(v[n], v[n-1]); // Copia o texto da posição anterior para a atual

        n--;

    }
    strcpy(v[n], x);
}

void insertionSort(char v[][TAM], int n) {
    for (int i=0; i < n; i++){
    
        char aux[TAM];

        strcpy(aux, v[i]);

        insere(aux, v, i);
    }
}

int main() {

    char nomes[][TAM] = {"Marcos", "Lincoln", "Helio", "Thalysson", "Alvaro", "Joao"};
    int n = 6;

    cout << "Antes da Ordenacao: " << endl;
    for(int i=0; i<n; i++) cout << nomes[i] << " ";
    cout << endl << endl;

    insertionSort(nomes, n);

    cout << "Depois da Ordenacao: " << endl;
    for (int i=0; i < n; i++) cout << nomes[i] << " ";
    cout << endl;

    return 0;
}

