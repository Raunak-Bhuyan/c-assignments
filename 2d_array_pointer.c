#include<stdio.h>
int main()
{
    int arr[5][5]={{0,1,2,3,4},
                   {2,3,4,5,6},
                   {4,5,6,7,8},
                   {5,4,3,2,6},
                   {2,5,4,3,1},};
    int arr2[5][5];

    //initializing each element of the pointer array with the address of element present in the other array.

    for(int i=0;i<5;i++){
        for(int j = 0; j<5;j++){
            arr2[i][j] = &arr[i][j];
        }
    }

    //printing the array using the array of pointers
     
     printf("the values are\n");
     for(int i=0; i<5; i++){
        for(int j=0; j<5; j++){
            printf("%d", *arr2[i][j]);
        }
        printf("\n");
     }

     return 0;
}