#include <stdio.h>
int linearSearch(int arr[], int n, int key) 
{
    for(int i = 0; i < n; i++) 
    {
        if(arr[i] == key) 
        {
            return i;
        }
    }
    return -1; 
}
void printArray(int arr[], int size) 
{
    for(int i = 0; i < size; i++) 
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
int main() 
{
    int n, i, key, result;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) 
    {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    printf("\nArray: ");
    printArray(arr, n);
    printf("\nEnter element to search: ");
    scanf("%d", &key);
    result = linearSearch(arr, n, key);
    if(result != -1) 
    {
        printf("%d is found at position %d (index %d)\n", key, result + 1, result);
    } else
    {
        printf("%d is not present in the array\n", key);
    }
    
    return 0;
}
