#include <stdio.h>
#include <stdbool.h>

bool isPalindrome(int x)
{
    char buf[16];
    int n = sprintf(buf, "%d", x);
    int i = 0;
    int j = n - 1;
    while (i < j)
    {
        if (buf[i] != buf[j])
        {
            return false;
        }
        i++;
        j--;
    }
    return true;
}

int main()
{
    int x = 10;
    bool palindrome = isPalindrome(x);
    printf("%s", palindrome ? "true" : "false");
    return 0;
}