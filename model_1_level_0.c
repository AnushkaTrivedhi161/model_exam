#include<stdio.h>
int main()
{
    char ch;
    scanf("%c",&ch);
    if(ch>='A' && ch<='Z')
    {
        ch=(char)(int)ch+32;
    }
    printf("Lowercase Character: %c",ch);
    return 0;
}
