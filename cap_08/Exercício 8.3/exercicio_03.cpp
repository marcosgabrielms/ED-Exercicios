#include <iostream>

using namespace std;

//Função para troca de valores
void troca (int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

// Move o maior elemento para a ultima posição
void empurra(int v[], int n) { 
    for (int i = 0; i < n - 1; i ++) {
        if(v[i] > v[i+1]) {
            troca(v[i], v[i+1]);
        }
    }
}

void bubbleSort(int v[], int n) {
    // Se o vetor tiver tamanho 1 já está ordenado
    if ( n <= 1){
        return;
    }

    // Usa a função para jogar o maior item para o final
    empurra(v, n);

    //Chama a recursão ignorando o último elemento
    bubbleSort(v, n-1);
}

int main() {
    int v[] = {5, 1, 4, 2, 8};
    int n = 5;

    cout << "Vetor antes: ";
    for(int i = 0; i < n; i++) cout << v[i] << " ";
    cout << endl;

    bubbleSort(v, n);

    cout << "Vetor depois: ";
    for (int i = 0; i < n; i++) cout << v[i] << " ";
    cout << endl;

    return 0;
}