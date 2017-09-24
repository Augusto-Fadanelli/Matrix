#include <stdio.h>
#include <stdlib.h>

struct matriz {
    int linhas;
    int colunas;
    int m;
};

void main()
{

    //Declaraçao de Variaveis
    int i, j, qtm, cont, op; // i: Linha; j: Coluna; qtm: Quantidade de Matrizes; cont: Contador; op: opçao
    int lines, columns;
    struct matriz matriz;

    printf("Digite a quantidade de Matrizes: \n");
    scanf("%d", &qtm);

    //Repete o processo para cada Matriz
    for(cont = 0; cont < qtm; cont++){

    printf("%dª Matriz, ", cont + 1);

    //Definindo o tipo de Matriz
    printf("Digite a quantidade de linhas: \n");
    scanf("%d", &lines);
    printf("Digite a quantidade de Colunas: \n");
    scanf("%d", &columns);

    int matrix [lines] [columns];
    matriz.m = matrix;

    //int matrix [cont] [lines] [columns]; //Declaraçao do vetor Matrix. O primeiro vetor serve para definir a Matriz

    struct matriz vetor[qtm];
    //Mostrando o tipo de Matriz
    printf("Matriz do tipo: %dx%d \n", matriz.linhas, matriz.colunas);
    for(i = 1; i <= matriz.linhas; i++){
        for(j = 1; j <= matriz.colunas; j++){

            printf("a%d%d ", i, j);

        }
        printf("\n");
    }

    //Atribuindo os valores da Matriz
    printf("Digite os valores de: \n");
    for(i = 0; i < matriz.linhas; i++){
        for(j = 0; j < matriz.colunas; j++){

            printf("a%d%d ", i + 1, j + 1);
            scanf("%d", &matriz.m [i] [j]);

        }
    }
    vetor[cont] = matriz;
    printf("\n");

    //Mostrando os valores da Matriz
    int x;
    for (x = 0; x < qtm; x++) {
        matriz m = vetor[x];
        for(i = 0; i < m.linhas; i++){
            for(j = 0; j < m.colunas; j++){

                printf("%d ", m [i] [j]);

            }
            printf("\n");
        }
    }





    }

   /* printf("Escolha a operaçao: \n 1 - Adiçao \n");
    scanf("%d", op);

    if(op = 1){



    } */

}
