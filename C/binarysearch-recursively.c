#include <stdio.h>
#include <stdlib.h>

void sort(int a[], int size);
void binarysearch(int a[], int min, int max, int key);
int main(void)
{
    //Getting input of size of array:
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    //Getting user input for elements of array
    int a[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter the value of element [%d] of the array: ", i);
        scanf("%d", &a[i]);
    }

    //sorting the array using bubble sort:
    sort(a, n);


    //Printing the sorted array:
    printf("Sorted array: ");
    for(int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    //Preparing for binary search:
    int key, max, min;

    //Getting input of number to search in the array:
    printf("Enter the number you want to find from the array: ");
    scanf("%d", &key);
    max = n - 1;
    min = 0;

    //Performing binary search:
    binarysearch(a, min, max, key);
    
}

 void sort(int a[], int size)
 {
    //Bubble sort
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
    //finding the middle element
    int mid = (max + min)/2;

    //break condition:
    if((min == max)&&(a[mid] != key))
    {
        printf("\nNumber not found.\n");
        return;
    }

    //Performing the search:
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
 }
