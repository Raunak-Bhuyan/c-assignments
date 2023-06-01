#include<stdio.h>
#include<string.h>
int main()
{
    FILE *filepointer;
    char dataToBeRead[100];
    filepointer = fopen("gfgTest.c","r");
    if(filepointer == NULL)
    {
        printf("gfgTest.c file failed to open");
    }
    else{
        printf("the file is now opened \n");

        while(fgets(dataToBeRead, 100, filepointer) != NULL)
        {
            printf("%s", dataToBeRead);
        }
        fclose(filepointer);

        printf("Data is succesfully resd from the file");
        printf("The file is now closed");
    }
    return 0;
}