#include <iostream>

using namespace std;

void impimeVetor(int v[], int n) {
    cout << "[ ";
    for(int i = 0; i < n; i++) cout << v[i] << " ";
    cout << "]" << endl;
}

// Função da Figura 8.11
void insere(int x, int v[], int n) {

    while (n > 0 && x < v[n-1]) { // O número que quero inserir (x) é MENOR que o vizinho da esquerda

        // Se o vizinho da esquerda é maior, ele precisa "andar" para a direita.
        // Copiamos o valor de v[n-1] para a posição atual v[n].
        v[n] = v[n-1];

        n--; // Recuamos o índice 'n' para a esquerda para comparar com o próximo número.
    }
    v[n] = x;
}

void insertionSort(int v[], int n, int tamanhoTotal) {
    if (n <= 1) return;

    // Ordena recursivamente a parte anterior (n-1)
    insertionSort(v, n - 1, tamanhoTotal);

    // Insere o elemento atual (v[n-1]) na parte que já está ordenada
    int elementoAtual = v[n-1];
    insere(elementoAtual, v, n - 1);

    cout << "Ordenando ate o indice " << (n -1) << " (inseriu " << elementoAtual << "):";
    impimeVetor(v, tamanhoTotal);
}

int main() {
    int v[] = {29, 10, 14, 37, 13};
    int n = 5;

    cout << "Vetor Inicial: ";
    impimeVetor(v, n);
    cout << endl;

    insertionSort(v, n, n);

    cout << endl << "Vetor Final: ";
    impimeVetor(v, n);
    
    return 0;
}