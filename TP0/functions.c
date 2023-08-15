#include "functions.h"
void inicia_matriz(char M[20][80]){
    int i, j;
    for(i=0; i<20;i++){
        for(j=0; j<80;j++){
            if(i == 0 || i == 19){
                M[i][j] = '-';
            }
            else if(j == 0 || j == 79){
                M[i][j] = '|';
            }
            else{
                M[i][j] = ' ';
            }
        }
    }
}
void exibe_matriz(char M[20][80]){
    int i, j;
    for(i=0; i<20; i++){
        for(j=0 ;j<80; j++){
            printf("%c", M[i][j]);
        }
        printf("\n");
    }
}

void monta_1(char M[20][80], int quantidade){
    int k;
    inicia_matriz(M);
    for(k=0; k<quantidade; k++){
        insere_1(M, quantidade);
    }
}

void insere_1(char M[20][80], int quantidade){
    int randi, randj;
    srand((unsigned)time(NULL));
    while (1){
        randi = ((rand())%19)+1;
        randj = ((rand())%79)+1;
        if(M[randi][randj] == ' '){
            M[randi][randj] = '*';
            break;
        }
    }
}

void monta_2(char M[20][80], int quantidade){
    int k;
    inicia_matriz(M);
    for(k=0; k<quantidade; k++){
        insere_2(M, quantidade);
    }
}

void insere_2(char M[20][80], int quantidade){
    int randi, randj;
    srand((unsigned)time(NULL));
    while (1){
        randi = ((rand())%19)+1;
        randj = ((rand())%79)+1;
        if((M[randi][randj] == ' ') && (M[randi-1][randj] == ' ') && (M[randi][randj-1] == ' ') && (M[randi+1][randj] == ' ') && (M[randi][randj+1] == ' ')){
            M[randi][randj] = '*';
            M[randi-1][randj] = '*';
            M[randi][randj-1] = '*';
            M[randi+1][randj] = '*';
            M[randi][randj+1] = '*';
            break;
        }
    }
}

void monta_3(char M[20][80], int quantidade){
    int k;
    inicia_matriz(M);
    for(k=0; k<quantidade; k++){
        insere_3(M, quantidade);
    }
    
}

void insere_3(char M[20][80], int quantidade){
    int randi, randj;
    srand((unsigned)time(NULL));
    while (1){
        randi = ((rand())%19)+1;
        randj = ((rand())%79)+1;
        if((M[randi][randj] == ' ') && (M[randi-1][randj-1] == ' ') && (M[randi+1][randj-1] == ' ') && (M[randi+1][randj+1] == ' ') && (M[randi-1][randj+1] == ' ')){
            M[randi][randj] = '*';
            M[randi-1][randj-1] = '*';
            M[randi+1][randj-1] = '*';
            M[randi+1][randj+1] = '*';
            M[randi-1][randj+1] = '*';
            break;
        }
    }
}

void monta_4(char M[20][80], int quantidade){
    int aux, randi, randj, k;
    inicia_matriz(M);
    for(k=0; k<quantidade; k++){
        aux = 1+rand()%3;
        switch (aux){
            case 1:
                insere_1(M, quantidade);
                break;
            case 2:
                insere_2(M, quantidade);
                break;
            case 3:
                insere_3(M, quantidade);
                break;
        }
    }
}