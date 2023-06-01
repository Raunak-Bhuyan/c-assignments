#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include"random.h"
double mean(unsigned int arr[], int n)
{
    dounle ans = 0;
    for(int i=0;i<n;i++)
    ans+=arr[i];
    ans/=n;
    return ans;
}
double variance(unsigned int arr[], int n, double mean)
{
    double ans = 0;
    for(int i=0;i<n; i++)
    ans+=(arr[i]-mean)*(arr[i]-mean);
    ans/=n;
    return ans;
}
void main()
{
    int n;
    printf("enter the number of elements:\t");
    scanf("%d",&n);
    unsigned int arr[n];
    for(int i=0; i<n; i++)
    arr[i]=random32();
    double a_mean= mean(arr,n);
    double var= variance(arr,n,a_mean);
    double std_dev= sqrt(var);
    printf("Mean:%.2lf\n", a_mean);
    printf("variance:.2lf\n", var);
    printf("standard deviation:%.2lf\n", std_dev);
}
