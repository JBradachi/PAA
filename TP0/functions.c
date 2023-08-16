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
            printf( "%c", M[i][j]);
        }
        printf("\n");
    }
}
void exibe_agua(char M[20][80]){
    int i, j;
    for(i=0; i<20; i++){
        for(j=0 ;j<80; j++){
            if(i == 0 || i == 19 || j == 0 || j == 79 || ((i == 2 || i == 7) && (j == 72 || j == 71 || j == 70)) || ((i == 3 || i == 6) && (j == 72 || j == 73 || j == 74 || j == 75)) || ((i == 4 || i == 5) && (j == j == 73 ||j == 74 ||j == 75 ||j == 76 ||j == 77))){
                printf(WHT "%c", M[i][j]);
            }
            else if(j%4==0){
                printf(CYN "%c", M[i][j]);
            }
            else{
                printf(BLU "%c", M[i][j]);
            }
        }
        printf("\n");
    }
}


void monta_1(char M[20][80], int quantidade){
    int k;
    inicia_matriz(M);
    for(k=0; k<quantidade; k++){
        insere_1(M);
    }
}

void insere_1(char M[20][80]){
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
        insere_2(M);
    }
}

void insere_2(char M[20][80]){
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
        insere_3(M);
    }
    
}

void insere_3(char M[20][80]){
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
        aux = 1+rand()%5;
        switch (aux){
            case 1:
                insere_1(M);
                break;
            case 2:
                insere_2(M);
                break;
            case 3:
                insere_3(M);
                break;
            case 4:
                insere_5(M);
                break;
            case 5:
                insere_6(M);
                break;
        }
    }
}

void monta_5(char M[20][80], int quantidade){
    int k;
    inicia_matriz(M);
    for(k=0; k<quantidade; k++){
        insere_5(M);
    }
    
}

void insere_5(char M[20][80]){
    int randi, randj;
    srand((unsigned)time(NULL));
    while (1){
        randi = ((rand())%19)+1;
        randj = ((rand())%79)+1;

        if((M[randi][randj] == ' ') && (M[randi][randj+1] == ' ') && (M[randi][randj+2] == ' ' && (M[randi][randj+3] == ' ') && (M[randi][randj+4] == ' ')) && (M[randi][randj+5] == ' ')){
            M[randi][randj] = '*';
            M[randi][randj+1] = '*';
            M[randi][randj+2] = '*';
            M[randi][randj+3] = '*';
            M[randi][randj+4] = '*';
            break;
        }
    }
}

void gif_agua(char M[20][80]){
    int k, frames;
    for(frames = 0; frames<30; frames++){
        system("sleep 0.5");
        inicia_matriz(M);
        for(k=0; k<100; k++){
            insere_5(M);
        }
        exibe_agua(M);
        fflush(stdout);
    }
    system("clear");
}
void monta_6(char M[20][80], int quantidade){
    int k;
    inicia_matriz(M);
    for(k=0; k<quantidade; k++){
        insere_6(M);
    }
    
}

void insere_6(char M[20][80]){
    int randi, randj, encheu = 0;
    srand((unsigned)time(NULL));
    while (1){
        encheu++;
        randi = ((rand())%19)+1;
        randj = ((rand())%79)+1;

        if((M[randi][randj] == ' ') && (M[randi][randj-1] == ' ') && (M[randi][randj-2] == ' ') && (M[randi][randj+1] == ' ') && (M[randi][randj+2] == ' ') 
           && (M[randi-1][randj] == ' ') && (M[randi-1][randj-1] == ' ') && (M[randi-1][randj-2] == ' ') && (M[randi-1][randj+1] == ' ') && (M[randi-1][randj+2] == ' ') 
           && (M[randi+1][randj] == ' ') && (M[randi+1][randj-1] == ' ') && (M[randi+1][randj-2] == ' ') && (M[randi+1][randj+1] == ' ') && (M[randi+1][randj+2] == ' ')
           && (M[randi+2][randj] == ' ') && (M[randi+2][randj-1] == ' ') && (M[randi+2][randj-2] == ' ') && (M[randi+2][randj+1] == ' ') && (M[randi+2][randj+2] == ' ') && (M[randi+2][randj+3] == ' ')){

            M[randi][randj] = '.';
            M[randi][randj-1] = 'O';
            M[randi][randj-2] = '[';
            M[randi][randj+1] = 'o';
            M[randi][randj+2] = ']';
            M[randi-1][randj] = '_';
            M[randi-1][randj-1] = '_';
            M[randi-1][randj-2] = ',';
            M[randi-1][randj+1] = '_';
            M[randi-1][randj+2] = ',';
            M[randi+1][randj] = '_';
            M[randi+1][randj-1] = ')';
            M[randi+1][randj-2] = '/';
            M[randi+1][randj+1] = '_';
            M[randi+1][randj+2] = ')';
            M[randi+2][randj] = '-';
            M[randi+2][randj-1] = '"';
            M[randi+2][randj-2] = '-';
            M[randi+2][randj+1] = '-';
            M[randi+2][randj+2] = '"';
            M[randi+2][randj+3] = '-';
            break;
        }
        if(encheu==500){
                printf("ERRO, por favor insira um numero menor de imagens\n");
                break;
            }
    }
}
