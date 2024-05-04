#include <stdio.h>

int roman_int[] = {
    ['I'] = 1,
    ['V'] = 5,
    ['X'] = 10,
    ['L'] = 50,
    ['C'] = 100,
    ['D'] = 500,
    ['M'] = 1000,
};

int romanToInt(char *s)
{
    int result = 0;
    for (int i = 0; s[i] != 0; i++)
    {
        int a = roman_int[s[i]];
        int b = roman_int[s[i + 1]];
        if (a < b)
        {
            result += b - a;
            i++;
        }
        else
        {
            result += a;
        }
    }
    return result;
}

int main()
{
    char *s = "MCMXCIV";
    int result = romanToInt(s);
    printf("%d", result);
    return 0;
}