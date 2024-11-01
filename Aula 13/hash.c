struct celula{
    char *s;
    int colisao;
};

struct celula tabela [100];

int colisao = 50;

int hash(char *s){
    return(int) s[0];
}

void inserir (char *s){
    int posicao = hash(s);

    while(tabela[posicao].colisao != 0){
        posicao = tabela[posicao].colisao;
    }
    tabela[colisao].s = s;
    tabela[posicao].colisao = colisao;
    colisao++;
}

int busca (char *s){
    int posicao = hash(s);

    while(posicao !=0 && !strcpm(s, tabela[posicao])){
        posicao = tabela[posicao].colisao;
    }
}

int main(int argc, char *argv[]){
    return 0;
}
