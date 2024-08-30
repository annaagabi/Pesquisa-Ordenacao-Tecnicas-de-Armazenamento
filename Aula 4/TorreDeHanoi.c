// #include <studio.h>
// #include <studlib.h>

void hanoi (int nDisco, int origem, int destino, int auxiliar){
    if(nDisco!=0){
        hanoi(nDisco-1, origem, auxiliar, destino);
        printf("Mover disco de %d para %d\n", origem, destino);
        hanoi(nDisco-1, auxiliar, destino, origem);
    }
}

int main (int argc, char *argv[]){
    int nDisco;
    printf("Digite a quantidade de discos: ");
    scanf("%d", &nDisco);
    hanoi(nDisco, 1,2,3);
    return 0;
}