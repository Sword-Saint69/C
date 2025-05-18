/*Write a C program to find the largest and smallest elements in an array.*/
#include <stdio.h>
int main()
{
    int arr[100], size, i, largest, smallest;
    printf("Enter the size of array: ");
    scanf("%d", &size);
    printf("Enter the elements of array: ");
    for (i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    largest = arr[0];
    smallest = arr[0];
    for (i = 1; i < size; i++)
    {
        if (arr[i] > largest)
        {
            largest = arr[i];
        }
        if (arr[i] < smallest)
        {
            smallest = arr[i];
        }
    }
    printf("Largest element is: %d\n", largest);
    printf("Smallest element is: %d\n", smallest);
    return 0;
}