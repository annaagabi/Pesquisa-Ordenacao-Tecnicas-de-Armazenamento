// #include <studio.h>
// #include <studlib.h>

void f(){
    printf("f()\n");
    f();
}

int fatorial(int n){ // Função que calcula fatorial
    if(n==0){
        return 1;
    }
    else{
        return fatorial(n-1)*n;
    }
}

int soma(int n){
    if (n==1){
        return 1;

    }else{
        return soma(n-1)+n;
    }
}

int main(int argc, char *argv[]){
    // f();
    int n;
    printf("Digite n: ");
    scanf("%d", &n);
    printf("%d\n", soma(n));
    // printf("%d\n", fatorial(n));
    return 0;
}