#include <stdio.h>
int findLargest(int arr[], int size) 
{
    int max = arr[0];
    
    for(int i = 1; i < size; i++) 
    {
        if(arr[i] > max) 
        {
            max = arr[i];
        }
    }
    return max;
}
int main() 
{
    int n, i;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) 
    {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    int largest = findLargest(arr, n);
    printf("\nThe largest element in the array is: %d\n", largest);
    return 0;
}
