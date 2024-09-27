// #include <studio.h>
// #include <studlib.h>

void construirHeap(int m, int *v){
    int k, x; // k é um índice e x é usado para troca
    // Loop para inserir elementos no heap, começando do segundo elemento (k=1)
    for(k=1; k<m; k++){
        int f =k+1; // f representa a posição atual na árvore do heap
        // Enquanto f não for a raiz (1) e o elemento atual for maior que o pai
        while (f>1 && v[f/2] < v[f]){
            // Troca os elementos se a condição do heap não for satisfeita
            x = v[f];
            v[f] = v[f/2];
            v[f/2] = x;
            f /= 2 ;// Move-se para o pai
        }
        
    }

}

// Função para "peneirar" o heap, mantendo a propriedade do heap
void peneirar(int m, int *v){
    int f=2; // Começa com o primeiro filho
    int x;

    // Enquanto houver filhos
    while (f<=m){
        // Verifica se o filho direito existe e é maior que o filho esquerdo
        if(f<m && v[f] < v[f+1]) f++;// f agora aponta para o maior filho
        // Se o nó pai é maior ou igual ao maior filho, a propriedade do heap está ok
        if((v[f/2] >= v[f])) break;
         // Troca os elementos para manter a propriedade do heap
        x = v[f];
        v[f] = v[f/2];
        v[f/2] = x;
        f *=2; // Move-se para o próximo nível na árvore (para o filho)

    }
}

// Não funcionou
// Função que implementa o algoritmo Heap Sort
// void heapSort(int n, int *v){
//     int m,x;
//     // Constrói um heap máximo a partir do vetor
//     constrirHeap(n, v);
//     // Remove elementos do heap e os coloca na posição correta
//     for(m=n; m>=2; m--){
//         // Troca o primeiro elemento (maior) com o último elemento não ordenado
//         x =v[1];
//         v[1] = v[m];
//         v[m]=x;
//         // Restaura a propriedade do heap no vetor reduzido
//         peneirar(m-1,x);
//     }

// }

void heapSort (int v[], int n)
{
    int m;
    construirHeap2 (n, v);  // Constrói o heap a partir do vetor v de tamanho n
    
    for (m = n; m >= 2; --m) {
        int aux = v[0];      // O maior elemento está na posição v[0] (raiz do heap)
        v[0] = v[m-1];       // Coloca o último elemento na raiz
        v[m-1] = aux;        // O maior elemento vai para a sua posição final (no final do array)
        
        peneira (1, m-1, v); // Reajusta o heap a partir da nova raiz (posição 1) até m-1
    }
}


int main (int argc, char *argv[]){
    int v[] ={0, 5, 20, 10, 1, 12, 9, 8, 4, 15, 2};
    int i;

    // Constrói o heap máximo
    // construirHeap(10, v);
    
     // Executa o algoritmo Heap Sort
   heapSort(10, v);
   // Imprime o vetor após a construção do heap ou // Imprime o vetor após a ordenação
    for(i =1; i<=10; i++){
        printf("%d ", v[i]);
    }

    printf("\n");

    return 0;
}