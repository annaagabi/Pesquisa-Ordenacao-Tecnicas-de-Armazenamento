#include <studio.h>
#include <stdlib.h>

int main(int argc, char * argv[]{
    int n, i, j, x = 0;     // 1

    printf("Digiten:");     // 1
    scanf("%d", &n);        // 1

    for(i=0; i<n; i++){
        for(j=0; j<n; j++){
            x += 1;         // n^2
        }
    }

    printf("x = %d", x)     // 1

    return 0;               // 1
})                          // n^2 +5