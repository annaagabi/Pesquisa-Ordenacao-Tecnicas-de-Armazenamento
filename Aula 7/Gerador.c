// #include <studio.h>
// #include <studlib.h>

#include <locale.h>

void gerarVetor(int *v, int n, char *fileName){
    int i;
    FILE *fp;
    srand(time(NULL));
    for(i=0; i<n; i++){
        v[i] = rand();
    }
    fp = fopen(fileName, 'wb');
    if(fp != NULL){
        fwrite(v, sizeof(int), n, fp);
        fclose(fp);
    }
}

void lerVetor( int *v, int n, char *fileName){
    FILE *fp;
    fp = fopen(fileName, "rb");
    fread(v, sizeof(int), n, fp);
    fclose(fp);

}

void gerarVetorOrdenado(int *v, int n, char *fileName){
    int i;
    FILE *fp;
    srand(time(NULL));
    for(i=0; i<n; i++){
        v[i] = i;
    }
    fp = fopen(fileName, 'wb');
    if(fp != NULL){
        fwrite(v, sizeof(int), n, fp);
        fclose(fp);
    }
}
void gerarVetorDecrescente(int *v, int n, char *fileName){
    int i;
    FILE *fp;
    srand(time(NULL));
    for(i=0; i<n; i++){
        v[i] = n-1-i;
    }
    fp = fopen(fileName, 'wb');
    if(fp != NULL){
        fwrite(v, sizeof(int), n, fp);
        fclose(fp);
    }
}

void imprimir(int *v, int n){
    int i;
    for(i=0; i<n; i++){
        printf("%d", v[i]);
    };
    printf("\n");
}

int main( int argc, char *argv[]){
    int *v, n;
    char fileName[255];

    setlocale(LC_ALL, "portuguese");

    printf("Digite o tamanho do vetor: ");
    scanf("%d", &n);

    printf("Digite o nome do arquivo: ");
    scanf("%s", fileName);

    v = (int *) malloc (sizeof(int) *n);

    gerarVetor(v, n, fileName);
    lerVetor(v, n, fileName);
    printf("Vetor gerado: \n");
    imprimir(v, n);

    return 0;
}
