#include <stdio.h>

int main(){

char buff[255];

///creating and opening a file
FILE *fp;

fp = fopen("test.txt","r");

/////writing into a file
// fprintf(fp,"test for the fprintf \n");
// fputs("Thsi is a test for the fputs \n",fp);


///readig form a file
fscanf(fp,"%s",buff);
printf("1: using fscanf: %s \n", buff);

fgets(buff, 255, (FILE*)fp);
printf("2: using fgets: %s \n",buff);


fclose(fp);

return 0;

}