#include<stdio.h>
void enter_array(int arr[],int size);
void display_array(int arr[],int size);
int linear_search(int arr[],int size,int key);

int main()
{
    int size,key,index;
    printf("Enter the size of array: ");
    scanf("%d",&size);

    int arr[size];
    printf("Enter Array elements: ");
    enter_array(arr,size);
    printf("Array elements: ");
    display_array(arr,size);
    printf("Enter the element you want to search: ");
    scanf("%d",&key);
    index=linear_search(arr,size,key);
    if(index==-1)
       printf("Element not found!!\n");
    else
       printf("Element found at index= %d\n",index);
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

int linear_search(int arr[],int size,int key)
{
    static int i=0;
    if(key==arr[i++])
       return i-1;
    else{
        if(i==size)
           return -1;
        linear_search(arr,size,key);
    }
}