// Copyright [2022] Meek_0
// Qus: https://codeforces.com/contest/1095/problem/A
#include <stdio.h>

int main() {
    int n = {0}, i = {0}, count = {0};
    char input[100] = {}, newarr[100] = {};
    scanf("%d", &n);
    scanf("%s", &input);
    while (count <= n) {
        newarr[i] = input[count];
        i += 1;
        count += 1*i;
    }
    printf("%s", newarr);
    return 0;
}