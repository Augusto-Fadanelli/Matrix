#include <stdio.h>
#include <stdlib.h>

void matrixvalues()
{

    //Declaration of variables
    int i, j; // i: Line; j: Column;
    int lines, columns;

    //Defining the Matrix type
    printf("Digite a quantidade de linhas: \n");
    scanf("%d", &lines);
    printf("Digite a quantidade de Colunas: \n");
    scanf("%d", &columns);

    int matrix [lines] [columns]; //Matrix vector declaration

    //Showing the type of Matrix
    printf("Matriz do tipo: %dx%d \n", lines, columns);
    for(i = 1; i <= lines; i++){
        for(j = 1; j <= columns; j++){

            printf("a%d%d ", i, j);

        }
        printf("\n");
    }

    //Assigning the Matrix values
    printf("Digite os valores de: \n");
    for(i = 0; i < lines; i++){
        for(j = 0; j < columns; j++){

            printf("a%d%d ", i + 1, j + 1);
            scanf("%d", &matrix [i] [j]);

        }
    }

    printf("\n");

    //Displaying the Matrix values
    for(i = 0; i < lines; i++){
        for(j = 0; j < columns; j++){

                printf("%4d",matrix [i] [j]);

        }
            printf("\n");
    }

}

void main()
{

    //Declaration of variables
    int op, end; //op: option

    printf("\n***CALCULOS DE MATRIZES*** \n \n");

    do{

        printf("Digite 1 para calculos com uma Matriz apenas \nou 2 para calculos com duas Matrizes \n");
        scanf("%d", &op);

        switch(op){

            case 1:
            printf("teste 1 \n");
            break;

            matrixvalues();

            case 2:
            printf("teste 2 \n");
            break;

            default:
            printf("Opçao invalida.\n");

        }

        printf("Digite 1 para continuar ou digite qualquer outro para sair: \n");
        scanf("%d", &end);

    }while (end == 1);

}
