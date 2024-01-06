#include <stdio.h>

int main() 
{
    FILE *filePointer;
    char data[100];
    filePointer = fopen("example.txt", "w");

    if (filePointer == NULL) 
    {
        printf("Error opening file for writing.\n");
        return 1;
    }
    printf("Enter data to write to the file: ");
    fgets(data, sizeof(data), stdin);
    fprintf(filePointer, "%s", data);
    fclose(filePointer);
    filePointer = fopen("example.txt", "r");

    if (filePointer == NULL) 
    {
        printf("Error opening file for reading.\n");
        return 1;
    }
    printf("\nData read from the file:\n");
    while (fgets(data, sizeof(data), filePointer) != NULL) 
    {
        printf("%s", data);
    }
    fclose(filePointer);

    return 0;
}
