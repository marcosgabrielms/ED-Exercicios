#include <iostream>
#include <algorithm> // Para o swap

using namespace std;

// Vetor de floats V e tamanha N

void bubbleSortReais(float v[], int n) { 

    for (int i = 0; i < n - 1; i++){  // A cada passada o maior elemento flutua para o final

        for (int j = 0; j < n - 1; j++) { 

            if (v[j] > v[j + 1]) { // Caso o elemento atual seja maior que o próximo é feita a troca
                swap(v[j], v[j + 1]);
            }
        }
    }
}

int main() {
    float valores[] = {8.5, 4.2, 9.1, 2.5, 5.5, 7.75};
    int tamanho = 6;
    cout << "Vetor Original (Desordenado): ";
    for (int i=0; i < tamanho; i++) {
        cout << valores[i] << " ";
    }
    cout << endl;

    bubbleSortReais(valores, tamanho);

    cout << "Vetor Ordenado (Crescente): ";
    for (int i=0; i < tamanho; i++) {
        cout << valores[i] << " ";
    }
    cout << endl;
    
    return 0;
}