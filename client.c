
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "hezron.h"



int *proc_1_1(int, CLIENT *);
float *proc_2_1(int, char *, CLIENT *);
char **proc_3_1(int, CLIENT *);

int main(int argc, char *argv[])
{
    printf("Hezron Client Has started\n");
    CLIENT *cl;
    int num1;
    int num2;
    char num_string[40];
    int num3;
    
    printf("Enter an integer to pass to pocedure 1:\n");
    scanf("%d", &num1);
    
    
    printf("Enter an integer and string to pass to pocedure 2:\n");
    scanf("%d", &num2);
    scanf("%s", num_string);
    
    printf("Enter an integer to pass to pocedure 3:\n");
    scanf("%d", &num3);
    
    
    
    
    cl = clnt_create(argv[1], HEZRON, HEZRON_1, "tcp");
    if (cl == NULL)     {
        printf("An Error has occured : Unable to to connet to the server. \n Check if the server is running or check your code\n");
        exit(1);
        }

    
    int procOneResult = *proc_1_1(num1, cl);
    printf("RESULT FROM PROCEDURE 1 : total number of days in %d years is : %d\n", num1, procOneResult);

    
    float procTwoResult = *proc_2_1(num2, num_string, cl);
    printf("RESULT FROM PROCEDURE 2: %f\n", procTwoResult);

    
    char *result_string = *proc_3_1(num3, cl);
    printf("RESULT FROM PROCEDURE 3: %s\n", result_string);

    
    clnt_destroy(cl); //exit
    return 0;
}
