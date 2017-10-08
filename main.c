#include <stdio.h>
#include <stdlib.h>

void mTransposed(int lines, int columns, int matrix [] [columns])
{

    int i, j;

    for (int i = 0; i < columns; i++) {
        for (int j = 0; j < lines; j++) {
            printf("%4d", matrix [j] [i]);
        }
        printf("\n");
    }


}

void mOpposite(int lines, int columns, int matrix [] [columns])
{

    int i, j;

    for(i = 0; i < lines; i++){
        for(j = 0; j < columns; j++){

            printf("%4d", matrix [i] [j] - 2 * matrix [i] [j]);

        }
        printf("\n");
    }

}

void mInverse(int lines, int columns, int matrix [] [columns])
{

        int i, j;

}

void mRealNumber(int lines, int columns, int matrix [] [columns])
{

    int i, j;
    float realNumber;

    printf("Digite um número real:\n");
    scanf("%f", &realNumber);

    for(i = 0; i < lines; i++){
        for(j = 0; j < columns; j++){

            printf("  %.2f  ", matrix [i] [j] * realNumber);

        }
        printf("\n");
    }

}

void mAddition(int lines, int columns, int matrixA [] [columns])
{

    int matrixB = mValues( 2, 1, 1);
    int i, j;

    for(i = 0; i < lines; i++){
        for(j = 0; j < columns; j++){

                printf("%4d",matrixA [i] [j] + matrixB);
                matrixB++;

        }
            printf("\n");
    }

}

void mSubtraction(int lines, int columns, int matrixA [] [columns])
{



}

void mMultiplication(int lines, int columns, int matrixA [] [columns])
{



}

//Matrix type and its values
int mValues(int op1, int op2, int counter)
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

        switch(op1){

            case 1:

                switch(op2){

                    case 1:

                        mTransposed(lines, columns, matrix);

                    break;

                    case 2:

                        mOpposite(lines, columns, matrix);

                    break;

                    case 3:

                        mInverse(lines, columns, matrix);

                    break;

                    case 4:

                        mRealNumber(lines, columns, matrix);

                    break;

                    case 5:



                    break;

                    case 6:



                    break;

                    case 7:



                    break;

                }

            break;

            case 2:

                switch(op2){

                    case 1:

                        if(counter == 0){

                            mAddition( lines, columns, matrix);

                        }else if(counter == 1){

                            return (matrix);

                        }

                    break;

                    case 2:



                    break;

                    case 3:



                    break;

                }

            break;

            default:

                printf("/n/nERROR: CALL BY REFERENCE UNSUCCESSFUL\n\n");

        }

}

void main()
{

    //Declaration of variables
    int op1, op2, matrixA, matrixB;
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

                        mValues(op1, op2, 0);

                    break;

                   case 2:

                        mValues(op1, op2, 0);

                    break;

                    case 3:

                        mValues(op1, op2, 0);

                    break;

                    case 4:

                        mValues(op1, op2, 0);

                    break;

                    case 5:

                        mValues(op1, op2, 0);

                    break;

                    case 6:

                        mValues(op1, op2, 0);

                    break;

                    case 7:

                        mValues(op1, op2, 0);

                    break;

                    default:
                        printf("Opçao invalida.\n");

                }

            break;

            case 2:

                printf("Digite:\n1 - Adiçao de Matrizes\n2 - Subtraçao de Matrizes\n3 - Multiplicaçao de Matrizes\n");
                scanf("%d", &op2);

                switch(op2){

                    case 1:

                        mValues(op1, op2, 0);

                    break;

                    case 2:

                        mValues(op1, op2, 0);

                    break;

                    case 3:

                        mValues(op1, op2, 0);

                    break;

                    default:
                        printf("Opçao invalida.\n");

                }

            break;

            default:
                printf("Opçao invalida.\n");

        }

        printf("\nDigite 1 para sair ou digite qualquer outro numero para continuar: \n");
        scanf("%d", &end);

    }while (end != 1);

}
