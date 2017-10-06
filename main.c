#include <stdio.h>
#include <stdlib.h>

//Matrix type and its values
void mValues(int *option1, int *option2)
{

    //Declaration of variables
    int i, j; // i: Line counter; j: Column counter;
    int lines, columns;

    //Defining the Matrix type
    printf("Digite a quantidade de linhas: \n");
    scanf("%d", &lines);
    printf("Digite a quantidade de Colunas: \n");
    scanf("%d", &columns);

    int matrix [lines] [columns]; //Matrix vector declaration

    //Showing the type of Matrix
    printf("Matriz do tipo: %dx%d ", lines, columns);
    if(lines == columns){

        printf("(Matriz quadrada).");

    }

    else if(lines == 1 && columns > 1){

        printf("(Matriz linha).");

    }

    else if(lines > 1 && columns == 1){

        printf("(Matriz coluna).");

    }

    printf("\n");

    for(i = 0; i < lines; i++){
        for(j = 0; j < columns; j++){

            printf("a%d%d ", i + 1, j + 1);

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

    printf("\n");

    //Call function chosen
    if(option1 != NULL && option2 != NULL){

        i = option1;
        j = option2;

        switch(i){

            case 1:

                switch(j){

                    case 1:

                        mTransposed(matrix , lines, columns);

                    break;

                }

            break;

            case 2:



            break;

            default:

                printf("/n/nERROR: CALL BY REFERENCE UNSUCCESSFUL\n\n");

        }

    }else{

    printf("\n\nERROR: UNALLOCATED VARIABLE\n\n");

    }

}

void main()
{

    //Declaration of variables
    int op1, op2;
    char end; //op: option
    printf("\n***CALCULOS DE MATRIZES*** \n \n");

    do{

        printf("Digite:\n1 - Calculos com uma Matriz apenas\n2 - Calculos com duas Matrizes\n");
        scanf("%d", &op1);

        switch(op1){

            case 1:

                printf("Digite:\n1 - Matriz Transposta\n2 - Matriz Oposta\n3 - Matriz inversa\n");
                printf("4 - Multiplicar um numero real por uma Matriz\n5 - Matriz Determinante\n");
                printf("6 - Cofator de uma Matriz\n7 - Teorema de Laplace\n");
                scanf("%d", &op2);

                switch(op2){

                    case 1:

                        mValues(op1, op2);

                    break;

                   /* case 2:

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

                    break;*/

                    default:
                        printf("Opçao invalida.\n");

                }

            break;

            /*case 2:

                printf("Digite:\n1 - Adiçao de Matrizes\n2 - Subtraçao de Matrizes\n3 - Multiplicaçao de Matrizes\n");
                scanf("%d", &op2);

                switch(op2){

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

            break;*/

            default:
                printf("Opçao invalida.\n");

        }

        printf("\nDigite 1 para continuar ou digite qualquer outro numero para sair: \n");
        scanf("%d", &end);

    }while (end == 1);

}

void mTransposed(int *A, int *m, int *n) // A = matrix, m = lines, n = columns
{

    int i, j;

    for(i = 0; i < m; i++){

        A += i;

        for(j = 0; j < n; j++){

                A += j;

                printf("%4d", *A );

        }
            printf("\n");
    }

}
