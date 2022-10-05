#include <stdio.h>      // Standard input-output header
#include <math.h>       // Math equations
//#include <string.h>      To manipulate Strings, only necessary if use "void enterFunction()"
#include <stdlib.h>     // Standard library
//#include <ctype.h>       Most of the functions in this library serve to sort ASCII characters,  only necessary if use "void enterFunction()"
#include <windows.h>    // Contains declarations for all Windows API functions

float err = 0;      // Global variable 
int inter = 0;      // Global variable


void system(){
    int dim;
    printf("\n\n\t\t Enter with the dimension of the matrix: ");
    scanf("%d", &dim);
    while (dim < 1)
    {
        printf("\n\n\t\t Invalid dimension %d of the matrix, enter again: ", dim);
        scanf("%d", &dim);
    }

    float matrix[dim][dim];
    float constant[dim];

    //fflush(stdin);      //Capture \n

    for(int i = 0; i < dim; i++){
        for(int j = 0; j < dim; j++){
            printf("\n\n\t\t Enter with the a[%d][%d] coefficient: ", i+1, j+1);
            scanf("%f", &matrix[i][j]);
        }
    }
}

// Function to enter with the error to stop the program
void initialError(){
    printf("\n\n\t\t Enter error to stop: ");
    scanf("%f", &err);
    if(err >= 1){
       printf("\n\n\t\t Error to stop entered too big, enter again: ");
       scanf("%f", &err);
    }
    system("cls");
}

// Function to enter with the amount of interections that the program has to execute
void interaction(){
    printf("\n\n\t\t Enter the amount of interaction: ");
    scanf("%d", &inter);
    while (inter < 1)
    {
        printf("\n\n\t\t Amount of interaction less then 1, enter again: ");
        scanf("%d", &inter);
    }
    system("cls");
}

// Function to calculate the absolute value of any real value
double absol(double x){
    if(x < 0){
        return -x;
    }
    else{
        return x;
    }
}

// Function to calculate the relative error [(xn - xn-1)/xn]
double relativeError(double xk, double xkl1){
    double calc_error;
    calc_error = absol((xk - xkl1)/xk);     // Error must always be positive
    return calc_error;
}

int main(){
    int choose;
    do{
        printf("\n\n\t\t ********************************************************************");
        printf("\n\t\t                      WELCOME TO THE LINEAR SYSTEMS SOLUTIONS");
        printf("\n\t\t ********************************************************************");
        printf("\n\n\t\t 1 - Jacobi Method");
		printf("\n\n\t\t 2 - Gauss-Seidel Method");
        printf("\n\n\t\t 3 - Exit");
		printf("\n\n\t\t Choose an option: ");
        scanf("%d", &choose);
        while(choose < 1 || choose > 3){
			printf("\n\n\t\t Choose a right option: ");
			scanf("%d", &choose);
		}
        system("cls");

        if (choose != 3){
           interaction();
           initialError();
           system("cls");
        }

        switch (choose)
        {
        case 1:
            
            break;
        case 2:
            
            break;
        }
    }while (choose != 3);
    printf("\n\n\t\t\t\t\t\t\t That's it \2"); //🙂
    Sleep(500);
    return 0;
}