// #include <studio.h>
// #include <studlib.h>

#include <locale.h>

// Função Busca linear
// Recebe um vetor v, seu tamanho n e um inteiro x
// Retorna 1 se x está no vetor, 0 caso o contrário

int buscaLinear (int *v, int n, int x){
     int i;                                         // 1

     for (i=0; i<n; i++){
        if(v[i] == x){
            return i;                               // até n vezes
        }
     }
     return -1;
}

int buscaLinearRecursiva( int *v, int n, int x){
    if(n==0){
        return -1;

    }else if(v[n-1] == x){
        return n-1;

    }else{
        return buscaLinearRecursiva(v, n-1, x);
    }
}

int main (int argc, char *argv[]){
    int v[] ={ 10, 4, 3, 1, 9, 8, 10, 15,-1 };
    int x;

    setlocale(LC_ALL, "Portuguese");

    printf("Digite x:");

    scanf("%d", &x);

    if(buscaLinear(v, 10, x)){
        printf ("x está no vetor\n");

    }else{
        printf("x não está no vetor");
    }

    return 0;
}

/*
O IF é executado:
    - Melhor caso: 1 vez
    - Caso médio: n/2 vezes
    - Pior caso: n vezes

Melhor caso: O(1)
Caso médio e pior caso: O(n)
*/ 