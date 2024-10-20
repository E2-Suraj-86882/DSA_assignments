#include<stdio.h>
#define SIZE 9
void display_array(int[SIZE]);
int binary_search(int[SIZE],int,int,int);

int main()
{
    int arr[SIZE]={11,22,33,44,55,66,77,88,99};
    int key,index,left=0,right=SIZE-1;
 
    printf("Array elements: ");
    display_array(arr);
    printf("Enter the element you want to search: ");
    scanf("%d",&key);
    index=binary_search(arr,key,left,right);
    if(index==-1)
       printf("Element not found!!\n");
    else
       printf("Element found at index= %d\n",index);
    return 0;
}

void display_array(int arr[SIZE])
{
    for(int i=0;i<SIZE;i++)
    {
       printf("%d\t",arr[i]);
    }
    printf("\n");
}

int binary_search(int arr[SIZE],int key,int left,int right)
{
    int mid=(left+right)/2;
    if(left>right)
       return -1;
    if(key==arr[mid])
       return mid;

    if(key<arr[mid])
        binary_search(arr,key,left,mid-1);
    else
        binary_search(arr,key,mid+1,right);
} 