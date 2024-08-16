#include <studio.h>
#include <stdlib.h>

int main(int argc, char*argv[]){
    int n;                      // 1
    int i, soma;                // 1
    
    printf("Digite n: ");        // 1
    scanf("%d", &n);            // 1
    soma = 0;                   // 1

    for(i = 1; i<n; i++){
        soma +=1;               // n
    }

    printf("Soma = %d\n", soma); // 1
    return 0;                    // 1
}                                // n + 7