#include <iostream>

using namespace std;

void troca(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

// Retorna o índice do MAIOR elemento do vetor
int seleciona(int v[], int n) {
    int i = 0;
    for (int j = 1; j < n; j++) {
        if (v[i] < v[j]) {
            i = j;
        }
    }
    return i;
}
void imprimeVetor(int v[], int tamanhoTotal) {
    cout << "[ ";
    for(int i = 0; i < tamanhoTotal; i++) {
        cout << v[i] << " ";
    }
    cout << "]" << endl;
}

void selectionSort (int v[], int n, int tamanhoOriginal) {
    if (n <= 1) {  //Se p vetor tem tamanho 1 ou 0, para a execução
        return;
    }

    // Acha o índice do maior elemento no intervalo atual (0 a n)
    int indiceMaior = seleciona(v, n);

    cout << "--- Passo n= " << n << " ---" <<endl;
    cout << "Maior Encontrado: " << v[indiceMaior] << " (Indice " << indiceMaior << ")" << endl;
    cout << "Trocando " << v[indiceMaior] << " com " << v[n-1] << endl;
    cout << endl;


    // Troca o maior elemento com o último elemento do vetor atual (v[n-1])
    troca(v[indiceMaior], v[n-1]);

    // Chama a recursão para ordenar o restante
    selectionSort(v, n-1, tamanhoOriginal);
}

int main() {
    int v[] = {29, 10, 14, 37, 13};
    int n = 5;

    cout << "Vetor Inicial: ";
    imprimeVetor(v, n);
    cout << endl;

    selectionSort(v, n, n);

    cout << endl;

    cout << "Vetor Final: ";

    imprimeVetor(v, n);

    return 0;

}