// #include <studio.h>
// #include <studlib.h>


// recebe vetor v[p..r] com p<=r. Rearranja o vetor e devolve j
// Em p..r tal que v[p..j-1] <= v[j] <v[j+1..r]

int separar (int *v, int p, int r){
    int c = v[r]; // pivô
    int k, t, j =p;
    for(k=p; k<r; k++){
        if(v[k <= c]){
            t=v[j];
            v[j] =v[k];
            v[k] =t;
            j++;
        }
    }
    t = v[j];
    v[j] = v[r];
    v[r] =t;
    return j;
}

void quickSort(int *v, int p, int r){
    if(p<r){
        int j = separar(v, p, r);
        quickSort(v, p, j-1);
        quickSort(v, j+1, r);
    }
}

int main (int argc, char *argv[]){
    int i;
    int v[] = {5, 1, 9, 10, 20, -1, 6, 15, 2};
    
    printf("%d\n", separar(v, 0, 9));
    for(i=0; i<10; i++){
        printf("%d", v[i]);  
    }
    printf("\n");
    

    system("Pause");
    return 0;
}