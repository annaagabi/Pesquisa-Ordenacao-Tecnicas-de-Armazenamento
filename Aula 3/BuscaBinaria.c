// #include <studio.h>
// #include <studlib.h>

#include <locale.h>

int buscaBinaria(int *v, int n, int x){
    /*
        int v: Ponteiro para o array onde a busca será realizada.
        int n: Número de elementos no array.
        int x: Elemento que se deseja buscar.
    */

    int e, d, m;
    /*
        e: Índice do extremo esquerdo do subarray considerado.
        d: Índice do extremo direito do subarray considerado.
        m: Índice do meio do subarray considerado.
    */

    e = 0;
    d = n-1;
    m = (e+d)/2;

    /*
        e = 0: O início do array.
        d = n-1: O final do array (índice do último elemento).
        m = (e+d)/2: Calcula o índice do meio.
    */

    while(e <= d && x != v[m]){
        /*
            e <= d: Garante que o subarray ainda tem elementos para serem verificados.
            x != v[m]: Verifica se o elemento do meio não é o que estamos buscando.
        */
        if(x < v[m]){
            d = m-1;
        }else{
            e = m+1;
        }
        /*
            Se x < v[m]: O elemento procurado está na metade esquerda, então ajusta d para m-1.
            Caso contrário, x > v[m]: O elemento está na metade direita, então ajusta e para m+1.
        */

        m = (e+d)/2; // Após isso, o valor de m é recalculado para verificar o novo elemento do meio:
    }

    if(v[m] == x){
        return 1;

    } else{
        return 0;
    }

    /*
        v[m] == x: Se o elemento do meio é igual ao que buscamos, a função retorna 1 (elemento encontrado).
        Caso contrário, v[m] != x: Se não foi encontrado, a função retorna 0 (elemento não encontrado).
    */
}

int main (int argc, char *argv[]){
    /*
        int argc: Conta o número de argumentos passados pela linha de comando ao executar o programa.
        char *argv[]: Um array de strings que contém os argumentos passados pela linha de comando.
    */

    int v[] = { 1, 3, 5, 8, 10, 14, 15, 16, 20 ,25};
    int x;

    setlocale(LC_ALL, "Portuguese");

    printf("Digite x: ");
    scanf("%d", &x);

    if(buscaBinaria(v, 10, x)){
        printf("x está no vetor\n");

    } else{
        printf("x não está no vetor");
    }
    /*
        buscaBinaria(v, 10, x): Chama a função buscaBinaria, passando o array v, o tamanho do array (10 elementos) e o valor x digitado pelo usuário.
            - Se o valor de retorno for 1 (o elemento foi encontrado no array), a função printf exibe a mensagem "x está no vetor".
            - Se o valor de retorno for 0 (o elemento não foi encontrado no array), a função printf exibe a mensagem "x não está no vetor"
    */

    return 0;
}