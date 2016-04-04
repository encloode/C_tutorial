#include<stdio.h>

void array(int arr1[],int arr2[],int arr3[],int size)
{
    for (int i=0;i<size; i++)
    {
        int value;
        printf("enter value.");
        scanf("%d",&value);
        arr1[i]=value;
        printf("enter value.");
        scanf("%d",&value);
        arr2[i]=value;
        arr3[i]=arr1[i]+arr2[i];
    }
    {
        for (int i=0; i<size; i++)
            printf("%d ", arr3[i]);
    }
}
int main (void)
{
    int size;

    printf("Enter size of array.");
    scanf("%d",&size);

    int ar1[size], ar2[size], ar3[size];
    array(ar1,ar2,ar3,size);

return(0);

}

