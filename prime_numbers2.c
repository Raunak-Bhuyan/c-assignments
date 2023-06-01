#include<stdio.h>
#include<stdlib.h>

void sieve(int* arr, int n)
{
    for(int i = 1; i < n; i++)
    {
        arr[i] = i;
    }
    arr[0] = -1;
    arr[1] = -1;

    //applying sieve of erastosthenes
    for(int i =2 ; i<n; i++)
    {
        for(int j = 2; j*i<n; j++)
        {
            arr[i*j]=-1;
        }
    }
}
 int main()
 {
    int n;
    printf("enter n: ");
    scanf("%d", &n);
    n++;
    int* arr = (int *)malloc(n * sizeof(int));

    sieve(arr, n);

    //printing prime numbers
    for(int i = 0; i<n; i++)
    {
        if(arr[i]>0)
        printf("%d", arr[i]);
    }
    free(arr);
    return 0;
 }