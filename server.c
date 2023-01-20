#include "hezron.h"
#include <stdio.h> 
#include <string.h>


int *proc_1_1_svc(int argp, struct svc_req *rqstp) // procedure 1 accepts an integer and returns an integer.
{
    static int total_days;
    printf("\nPROCEDURE 1 CALLED:\n\t Agument passed to procedure 1 is %d\n", argp);
    total_days = 365 * argp;
     
    return &total_days;
}



float *proc_2_1_svc(int argp, char *argp2, struct svc_req *rqstp) // procedure 2 accepts an integer and a string and returns a float.
{
    static float output;
    printf("\nPROCEDURE 2 CALLED:\n\t arguments passed to procedure 2 \n\t\t Iinteger = %d \n\t\t String = %s\n", argp, argp2);
    output = (float)argp + atof(argp2); 
    return &output;
}



char **proc_3_1_svc(int argp, struct svc_req *rqstp) // procedure 3 accepts an integer and returns a string
{
    
    printf("\nPROCEDURE 3 CALLED: \n\t Agument passed to procedure 3: Integer = %d\n", argp);
    static char *output;
    output = (char *)malloc(10);
    int n = strlen(output) - 1;
    sprintf(output, "this is s string %d", argp);
    output[n] = '\0';
    return &output;
    

}
