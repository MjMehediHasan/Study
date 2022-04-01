#include <stdio.h>

int main() 
{
    char ch, s[200], sen[200];
    scanf("%c %[^\n]%*c %[^\n]%*s", &ch, s, sen);
    printf("%c\n%s\n%s", ch, s, sen);
    return 0;
}
