// #include <studio.h>
// #include <studlib.h>

#include <locale.h>

/*  
    Função está ordenado

    Recebe um vetor v, seu tamnho n
    Retorna 0 (falso) se o vetor não está ordenado
    Retorna 1 se estiver ordenado
    Complexidade O(n)
*/

int estaOrdenado(int*v, int n){
    int i;
    for(i=0; i < n-1; i++){
        if(v[i] > v[i+1]){
            return 0;
        }
    }
    return 1;
}

/* Ordenação bolha (bubble) */

// void bolha (int *v, int n){
//     int i, j, aux;

//     for(j=0; j < n-1; j++){
//         for(i=0; i < n-1; i++){
//             if(v[i] > v[i+1]){

//                 // Troca v[i] e v[i+1]
//                 aux = v[i];
//                 v[i] = v[i+1];
//                 v[i+1] = aux;
//             }
//         }
//     }
// }

// OU

void bolha (int *v, int n){
    int i, j, aux;

    for(j = n-1; j >= 1; j++){
        int flag = 0;
        for(i = 0; i < n-1; i++){
            if(v[i] > v[i+1]){

                // Troca v[i] e v[i+1]
                aux = v[i];
                v[i] = v[i+1];
                v[i+1] = aux;
                flag = 1;
            }
        }
        if(flag ==0) return;
    }
}

void insercao(int *v, int n){
    int i, j, x;
    for(j=1; j<n; j++){
        x=v[j];
        for(i=j-1; i>= 0 && v[i]>x; i--){
            v[i+1] =v[i];
        }
        v[i+1] =x;
    }
}

int main (int argc, char *argv[]){
    // int v1[] = {1, 2, 3, 4, 5};
    // int v2[] = {5, 4, 3, 2, 1};
    // int v3[] = {1, 2, 3, 4, -1};
    // int v4[] = {1, 2, -1, 3, 4};

    setlocale(LC_ALL, "portuguese");

    // printf("%d", estaOrdenado(v1, 5));
    // printf("%d", estaOrdenado(v2, 5));
    // printf("%d", estaOrdenado(v3, 5));
    // printf("%d", estaOrdenado(v4, 5));

    int v[] = {5, 3, 1, 4, 9, 6, 10, 7, 8, 2};

    bolha(v, 10);
    if(estaOrdenado(v,10)){
        printf("Ordenado\n");

    } else{
        printf("Não ordenado\n");
    }
    
    return 0;
}