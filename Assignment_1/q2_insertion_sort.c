#include<stdio.h>
#define SWAP(a,b) (int temp=a;a=b;b=temp;)

struct ret1{
    int its;
    int comparison;
};

void enter_array(int[],int);
void display_array(int[],int size);
void insertion_sort(int[],int,struct ret1*);

int main()
{    
    struct ret1 ret;
    ret.its=0;
    ret.comparison=0;
    int size;
    printf("Enter the size of array: ");
    scanf("%d",&size);

    int arr[size];
    printf("Enter Array elements: ");
    enter_array(arr,size);
    printf("Array elements before sorting: ");
    display_array(arr,size);
    insertion_sort(arr,size,&ret);
    printf("Array elements after sorting: ");
    display_array(arr,size);
    printf("No. of iterations = %d No.of comparison= %d\n",ret.its,ret.comparison);
    return 0;
}

void enter_array(int arr[],int size)
{
    for(int i=0;i<size;i++)
    {
       scanf("%d",&arr[i]);
    }
}

void display_array(int arr[],int size)
{
    for(int i=0;i<size;i++)
    {
       printf("%d\t",arr[i]);
    }
    printf("\n");
}

void insertion_sort(int arr[],int size,struct ret1 *r)
{
    int i,j,temp;
    for(i=1;i<size;i++)
    {
        r->its++;
        temp=arr[i];
        for(j=i-1;j>=0 && temp<arr[j];j--)
        {
            r->comparison++;
           arr[j+1]=arr[j];
        }
        arr[j+1]=temp;
    }
}