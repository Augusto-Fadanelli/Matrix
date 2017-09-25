#include <stdio.h>
#include <stdlib.h>

struct gValues{

    int lines, columns;

};

//Matrix type and its values
int mValues()
{

    //Declaration of variables
    int i, j; // i: Line counter; j: Column counter;
    struct gValues gV;

    //Defining the Matrix type
    printf("Digite a quantidade de linhas: \n");
    scanf("%d", &gV.lines);
    printf("Digite a quantidade de Colunas: \n");
    scanf("%d", &gV.columns);

    int matrix [gV.lines] [gV.columns]; //Matrix vector declaration

    //Showing the type of Matrix
    printf("Matriz do tipo: %dx%d ", gV.lines, gV.columns);
    if(gV.lines == gV.columns){

        printf("(Matriz quadrada).");

    }

    else if(gV.lines == 1 && gV.columns > 1){

        printf("(Matriz linha).");

    }

    else if(gV.lines > 1 && gV.columns == 1){

        printf("(Matriz coluna).");

    }

    printf("\n");

    for(i = 0; i < gV.lines; i++){
        for(j = 0; j < gV.columns; j++){

            printf("a%d%d ", i + 1, j + 1);

        }
        printf("\n");
    }

    //Assigning the Matrix values
    printf("Digite os valores de: \n");
    for(i = 0; i < gV.lines; i++){
        for(j = 0; j < gV.columns; j++){

            printf("a%d%d ", i + 1, j + 1);
            scanf("%d", &matrix [i] [j]);

        }
    }

    printf("\n");

    //Displaying the Matrix values
    for(i = 0; i < gV.lines; i++){
        for(j = 0; j < gV.columns; j++){

                printf("%4d",matrix [i] [j]);

        }
            printf("\n");
    }

    return matrix [gV.lines] [gV.columns];

}

void main()
{

    //Declaration of variables
    static int op;
    int end; //op: option

    printf("\n***CALCULOS DE MATRIZES*** \n \n");

    do{

        printf("Digite:\n1 - Calculos com uma Matriz apenas\n2 - Calculos com duas Matrizes\n");
        scanf("%d", &op);

        switch(op){

            case 1:

                printf("Digite:\n1 - Matriz Transposta\n2 - Matriz Oposta\n3 - Matriz inversa\n");
                printf("4 - Multiplicar um numero real por uma Matriz\n5 - Matriz Determinante\n");
                printf("6 - Cofator de uma Matriz\n7 - Teorema de Laplace\n");
                scanf("%d", &op);

                switch(op){

                    case 1:

                        mTransposed();

                    break;

                    case 2:

                        mValues();

                    break;

                    case 3:

                        mValues();

                    break;

                    case 4:

                        mValues();

                    break;

                    case 5:

                        mValues();

                    break;

                    case 6:

                        mValues();

                    break;

                    case 7:

                        mValues();

                    break;

                    default:
                        printf("Opçao invalida.\n");

                }

            break;

            case 2:

                printf("Digite:\n1 - Adiçao de Matrizes\n2 - Subtraçao de Matrizes\n3 - Multiplicaçao de Matrizes\n");
                scanf("%d", &op);

                switch(op){

                    case 1:

                        mValues();

                    break;

                    case 2:

                        mValues();

                    break;

                    case 3:

                        mValues();

                    break;

                    default:
                        printf("Opçao invalida.\n");

                }

            break;

            default:
                printf("Opçao invalida.\n");

        }

        printf("\nDigite 1 para continuar ou digite qualquer outro numero para sair: \n");
        scanf("%d", &end);

    }while (end == 1);

}

void mTransposed()
{

    mValues();
    struct gValues gV;

    printf("\n\nlinhas: %d\ncolunas: %d\n\n", gV.lines, gV.columns);

}
