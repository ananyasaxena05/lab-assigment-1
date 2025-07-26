#include<stdio.h>
int main(){
int n;
printf("enter the number of elements");
scanf("%d\n", &n);
int arr[n];
printf("Input  elements in the array :\n");
    for(int i=0; i<n; i++)
    {

        scanf("%d", &arr[i]);  // Read the input and store it in the array
    }
       printf("\nElements in array are: ");
    for(int i=0; i<n; i++)
    {
        printf("%d  ", arr[i]);  // Print each element in the array
    }
    printf("\n");


int sum=0;
for(int i=0;i<n;i++){
    sum=sum+arr[i];

    }
    printf("sum=");
    printf("%d",sum);
    float avg=sum/n;
     printf("avg=");
    printf("%f",avg);
    return 0;
    }
