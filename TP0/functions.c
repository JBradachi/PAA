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
    int aux, randi, randj, k;
    inicia_matriz(M);
    for(k=0; k<quantidade; k++){
        aux = 1;
        while (1){
            
            srand((unsigned)time(NULL));
            randi = ((rand())%19)+1;
            delay();
            srand((unsigned)time(NULL));
            randj = ((rand())%79)+1;
            if(M[randi][randj] == ' '){
                M[randi][randj] = '*';
                break;
            }
            delay();
        }
    }
}
void delay(){
    int i, j;
    for(i=0; i<10000;i++){
        for(j=0; j<10000;j++){
        
        }    
    }
}