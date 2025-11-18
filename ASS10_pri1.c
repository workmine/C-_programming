#include <stdio.h>
int sumArray(int arr[], int size) 
{
    int sum = 0;
    for(int i = 0; i < size; i++) 
    {
        sum += arr[i];
    }
    return sum;
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
    int result = sumArray(arr, n);
    printf("\nSum of all elements = %d\n", result);
    
    return 0;
}
