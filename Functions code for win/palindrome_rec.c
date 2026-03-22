#include <stdio.h>
int reverse(int n, int rev)
{   if (n == 0)
        return rev;
    return reverse(n / 10, rev * 10 + (n % 10));
}
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    int result = reverse(n, 0);
    printf("Reversed number = %d\n", result);
    if ( n == result){
            printf("Palindrome\n");
    }
    else
    printf("Not Palindrome\n");
    return 0;
}