// KoDer :P
/*
fgets(words, 1000, stdin);          // gets() can expand size of char
    for (int i = 0; i < words[i]; i++) {
        // scanf("%[^\n]%*s", words);          // %[^\n]%*c till \n
        if (words[i] == 'w') {
            count += 1;
        }
        printf("%s", words[i]);
    }
*/


#include<stdio.h>
#include<string.h>
#include <ctype.h>

char * lower(char * str) {
    for (int i = 0; i < strlen(str); i++) {
        str[i] = tolower(str[i]);
    }
    return str;
}

int main() {
    char *words[1000], count = 0;
    char first[1000], *end = {"END_OF_TEXT"};
    while (1) {
        scanf("%s", words+0);           // scanf("%s", first) != "END_OF_TEXT" | strcmp(words+0, first) != 0
        for (int i = 0; i < sizeof(words)/sizeof(char); i++) {
            scanf("%s", words+1);
            if ((words+1 != end) && (lower(words+0) == lower(words+1))) {
                    count += 1;
            } else if (words+1 == end) {
                break;
            }
        }
    }
    printf("%d\n", count);
    return 0;
}
