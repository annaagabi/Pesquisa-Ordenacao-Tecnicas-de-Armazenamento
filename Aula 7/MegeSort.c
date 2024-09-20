void intercalar(int p, int q, int r, int *v){
    int *w;
    w = malloc((r-p) * sizeof(int));
    int i = p, j=q;
    int k=0;

    while (i<q && j<r){
        if(v[i] <=v[j]){
            w[k] =v[i];
            i++;
            k++;

        }else{
            w[k] = v[j];
            j++;
            k++;
        }
    }

    while(i<q){
        w[k] =v[i];
        k++;
        i++;
    }

    while(j<r){
        w[k] = v[j];
        j++;
        k++;
    }

    for(i=p; i<r; i++) v[i] = w[i-p];
    free(w);
}

void mergeSort(int p, int r, int *v){
    if(p< r-1){
        int q= (p+r)/2;
        mergeSort(p,q,v);
        mergeSort(q,r,v);
        intercalar(p, q, r, v);
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
    int v[]={1, 3, 5, 7, 9, 11, 2, 4, 6, 8, 10};
    intercalar(0, 6, 12, v);

    imprimir(v, 11);
    return 0;

}