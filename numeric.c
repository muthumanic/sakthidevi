#include <stdio.h>
int main()
{
    char str[100];
    char * s = str;
    int alphabets, digits, others;
    alphabets = digits = others = 0;
    printf("Enter any string ");
    gets(str);
    while(*s)
    {
        if((*s>='a'&&*s<='z')||(*s>='A'&&*s<='Z'))
            alphabets++;
        else if(*s>='0'&&*s<='9')
            digits++;
        else
            others++;
            s++;
    }
    printf("Alphabets = %d\n",alphabets);
    printf("Digits = %d\n",digits);
    printf("Special characters = %d",others);
    return 0;
}
