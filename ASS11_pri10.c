#include <stdio.h>
int checkPalindrome(char str[]) {
    int i = 0, j;
    for (j = 0; str[j] != '\0'; j++);
    j--; 
    while (i < j) {
        if (str[i] != str[j])
            return 0; 
        i++;
        j--;
    }
    return 1;
}
int main() {
    char str[100];
    printf("Enter a string: ");
    gets(str);
    if (checkPalindrome(str))
        printf("The string is a palindrome.");
    else
        printf("The string is NOT a palindrome.");

    return 0;
}
