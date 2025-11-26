#include <iostream>

using namespace std;

int linearSearch(int x, int v[], int n) {
    if (n==0) { // Vetor chegou a 0 (não encontrou nada)
        return 0;
    }

    if (v[n-1] == x) { // Ultimo elemento é o procurado?
        return 1; // Verdadeiro -> Encontrado
    }

    return linearSearch(x, v, n - 1); // Se não está na ultima posição verifica o resto do vetor
}

int main() {
    int v[] = {10, 25, 30, 5, 12};
    int n = 5;
    int procurado = 30;

    if (linearSearch(procurado, v, n) == 1) { // Número existe
        cout << "O numero " << procurado << " esta no vetor." << endl;
    } else {
        cout << "O numero " << procurado << " nao esta no vetor." << endl;
    }

    procurado = 99;
    if(linearSearch(procurado, v, n) == 1) { // Número que não existe
        cout << "O numero " << procurado << " esta no vetor." << endl;
    } else {
        cout << "O numero " << procurado << " nao esta no vetor." << endl;
    }

    return 0;
}