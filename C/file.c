#include <stdio.h>

int main(void) 
{
    char *filename;
    printf("Enter the name of the file you want to open: ");
    scanf("%s", filename);

    FILE *fptr = fopen(filename, "w+");

    if(fptr == NULL)
    {
        printf("Invalid File Format. Please Try Again.");
    }

}
