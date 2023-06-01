//C-program to open a file, wite in it and the close it
#include<stdio.h>
#include<string.h>
int main()
{
    FILE *filepointer; //declaration of file pointer
    char dataToBeWritten[100] = "Geeks for Geeks is a computer science portal for geeks";
    //get the data to be written in the file

    //open the existing file gfgTest.c using fopen()
    //in write mode using "w" attribute
    filepointer = fopen("gfgTest.c","w");

    /*to check if the file pointer is null which is the case because the file does not exist*/

    if(filepointer == NULL)
    {
        printf("gfgTest.c failed to open");
    }
     else{
        printf("The file is now opened\n ");

        if(strlen(dataToBeWritten)>0)
        {
            fputs(dataToBeWritten, filepointer);
            fputs("/n", filepointer);
        }
        //closing the file
        fclose(filepointer);

        printf("Data is succesfully written in the file gfgTest.c\n");
        printf("The file is now closed ");
     }
     return 0;
}
//this program will succesfully create a file named gfgTest.c in the same directory as the source file i.e. file_handling.c which will contain the text; "GeeksforGeeks is a computer science portal for geeks"