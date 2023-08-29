#include "functions.h"

int main(){
    char matriz[20][80];
    int numero_de_figuras=1, selecao=1, end=1;
    system("clear");
    printf("PROGRAMA GERADOR DE OBRA DE ARTE:\n=================================\nEscolha o tipo de figura basica a ser usada para criar a obra:\n1 - asterisco simples.\n2 - simbolo de soma com asteriscos.\n3 - letra X com asteriscos.\n4 - figuras aleatorias\n5 - tracos simples\n6 - corujas\n7 - Selva\n8 - 'GIF' de agua\n");
    printf("Digite o tipo de figura basica desejada: (Ao digitar um numero fora do escopo, será pego um valor aleatório) >>> ");
    scanf("%d", &selecao);
    if(selecao!=8){
        printf("Digite a quantidade de figuras: (menor ou igual a zero para aleatorio) >>>  ");
        scanf("%d", &numero_de_figuras);
    }
    srand((unsigned)time(NULL));
    if(numero_de_figuras<=0){
        numero_de_figuras = rand()%100;
    }
    else if(numero_de_figuras>100){
        numero_de_figuras = 100;
    }
    if(selecao>8 || selecao < 0){
        selecao = 1+rand()%7;
    }
    while (end){
    switch (selecao){
        case 1:
            system("clear");
            monta_1(matriz, numero_de_figuras);
            exibe_matriz(matriz);
            break;
        
        case 2:
            system("clear");
            monta_2(matriz, numero_de_figuras);
            exibe_matriz(matriz);
            break;
        case 3:
            system("clear");
            monta_3(matriz, numero_de_figuras);
            exibe_matriz(matriz);
            break;
        case 4:
            system("clear");
            monta_4(matriz, numero_de_figuras);
            exibe_matriz(matriz);
            break;
        case 5:
            system("clear");
            monta_5(matriz, numero_de_figuras);
            exibe_matriz(matriz);
            break;
        case 6:
            system("clear");
            monta_6(matriz, numero_de_figuras);
            exibe_matriz(matriz);
            break;
        case 7:
            system("clear");
            monta_selva(matriz, numero_de_figuras);
            exibe_matriz(matriz);
            break;
        case 8:
            system("clear");
            gif_agua(matriz);
            exibe_agua(matriz);
            break;
        }

        printf("Deseja criar outra obra? [S = 1 / N = 0] >>> ");
        scanf("%d", &end);

        while(1){
            if(end == 1 || end == 0){
                break;
            }else{
                printf("Por favor, insira um numero válido (0 || 1) >>> ");
                scanf("%d", &end);
            }
        }
    
    }
        
    
    return 0;
}
