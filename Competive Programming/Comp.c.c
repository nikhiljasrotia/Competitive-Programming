#include <stdio.h>
#include <stdbool.h>
bool ToCheckPalindrome(int);
int main()
{
    int x = 1234321;
    if(ToCheckPalindrome(x))
        printf("True ");
    else
        printf("False : ");

    return 0;
}
bool ToCheckPalindrome(int x)
{
    int rem,temp;
    long int rev = 0;
    temp = x;
    while(temp!=0)
    {
        if(temp<0)
            return false;
        rem = temp%10;
        rev = rev * 10 + rem;
        temp = temp/10;
    }
    if(x == rev)
        return true;
    else
        return false;
}
