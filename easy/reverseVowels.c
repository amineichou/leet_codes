#include <stdio.h>

int made_strlen(char *str)
{
    int i = 0;

    if (!str)
        return (-1);
    while (str[i])
        i++;
    return (i);
}

int made_strcmp(char *s1, char *s2)
{
    int i = 0;
    if (!s1 || !s2)
        return (-111111);
    while (s1[i] == s2[i] && s1[i] && s2[i])
        i++;
    return (s1[i] - s2[i]);
}

char *reverseVowels(char *s)
{
    int i = 0;
    char tmp;
    int sSize = made_strlen(s) - 1;
    while (s[i] && i < sSize)
    {
        if (s[i] == 'a' || s[i] == 'e' || s[i] == 'o' || s[i] == 'u' || s[i] == 'i' ||
            s[i] == 'A' || s[i] == 'E' || s[i] == 'O' || s[i] == 'U' || s[i] == 'I')
        {
            while (s[sSize] != 'a' && s[sSize] != 'e' && s[sSize] != 'o' && s[sSize] != 'u' && s[sSize] != 'i' &&
                   s[sSize] != 'A' && s[sSize] != 'E' && s[sSize] != 'O' && s[sSize] != 'U' && s[sSize] != 'I')
                sSize--;
            if (s[sSize] == 'a' || s[sSize] == 'e' || s[sSize] == 'o' || s[sSize] == 'u' || s[sSize] == 'i' ||
                s[sSize] == 'A' || s[sSize] == 'E' || s[sSize] == 'O' || s[sSize] == 'U' || s[sSize] == 'I')
            {
                tmp = s[sSize];
                s[sSize] = s[i];
                s[i] = tmp;
                sSize--;
            }
        }
        i++;
    }
    return (s);
}

// tests
int main(void)
{
    char s[] = "leetcode";
    char true[] = "leotcede";
    char *res = reverseVowels(s);
    printf("\033[0;33mTESTING...\n");
    printf("\n");
    if (made_strcmp(true, res) == 0)
    {
        printf("\033[0;32m>>>>>>>SUCCESS<<<<<<<<\n");
    }
    else
        printf("\033[0;31m>>>>>>>FAILED<<<<<<<<\n");
    printf("output   : \"%s\"\nexpected : \"%s\"\n", res, true);
    printf("\n");

    char s1[] = "ai";
    char true1[] = "ia";
    char *res1 = reverseVowels(s1);
    if (made_strcmp(true1, res1) == 0)
    {
        printf("\033[0;32m>>>>>>>SUCCESS<<<<<<<<\n");
    }
    else
        printf("\033[0;31m>>>>>>>FAILED<<<<<<<<\n");
    printf("output   : \"%s\"\nexpected : \"%s\"\n", res1, true1);
    printf("\n");

    char s2[] = "aA";
    char true2[] = "Aa";
    char *res2 = reverseVowels(s2);
    if (made_strcmp(true2, res2) == 0)
    {
        printf("\033[0;32m>>>>>>>SUCCESS<<<<<<<<\n");
    }
    else
        printf("\033[0;31m>>>>>>>FAILED<<<<<<<<\n");
    printf("output   : \"%s\"\nexpected : \"%s\"\n", res2, true2);
    printf("\n");

    char s3[] = "   amine   ";
    char true3[] = "   emina   ";
    char *res3 = reverseVowels(s3);
    if (made_strcmp(true3, res3) == 0)
    {
        printf("\033[0;32m>>>>>>>SUCCESS<<<<<<<<\n");
    }
    else
        printf("\033[0;31m>>>>>>>FAILED<<<<<<<<\n");
    printf("output   : \"%s\"\nexpected : \"%s\"\n", res3, true3);
    printf("\n");

    char s4[] = "Oi";
    char true4[] = "iO";
    char *res4 = reverseVowels(s4);
    if (made_strcmp(true4, res4) == 0)
    {
        printf("\033[0;32m>>>>>>>SUCCESS<<<<<<<<\n");
    }
    else
        printf("\033[0;31m>>>>>>>FAILED<<<<<<<<\n");
    printf("output   : \"%s\"\nexpected : \"%s\"\n", res4, true4);
}