#include <stdio.h>
#include <stdlib.h>

void sort(int a[], int size);
void binarysearch(int a[], int min, int max, int key);
int main(void)
{
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int a[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter the value of element [%d] of the array: ", i);
        scanf("%d", &a[i]);
    }

    sort(a, n);

    printf("Sorted array: ");
    for(int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    int key, max, min;
    printf("Enter the number you want to find from the array: ");
    scanf("%d", &key);
    max = n - 1;
    min = 0;
    binarysearch(a, min, max, key);
    
}

 void sort(int a[], int size)
 {
    for(int i = 0; i < size; i++)
    {
        for(int j = i + 1; j < size; j++)
        {
            int max = a[i];
            if(a[i] > a[j])
            {
                int temp;
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    return;
 }

 void binarysearch(int a[], int min, int max, int key)
 {
    int mid = (max + min)/2;

    if((min == max)&&(a[mid] != key))
    {
        printf("\nNumber not found.\n");
        return;
    }

    if(a[mid] == key)
    {
        printf("Number Found! Number found at %d index. (%d postion)", mid, mid+1);
    }
    else if(a[mid] < key)
    {
        binarysearch(a, mid + 1, max, key);
    }
    else if(a[mid] > key)
    {
        binarysearch(a, min, mid - 1, key);
    }
    return;    

    // int mid = (min + max)/2;

    // if((max == min)&&(a[mid]!=key))
    // {
    //     printf("Not found.\n");
    //     exit(0);
    // }
    // else if(a[mid]==key)
    // {
    //     printf("Found.\n");
    //     printf("The element is in the index %d\n", mid);
    // }
    // else if (a[mid] < key)
    // {
    //     binarysearch(a, mid + 1, max, key);
    // }
    // else {
    //     binarysearch(a, min, mid - 1, key);
    // }
 }
