// KoDer :P

#include<iostream>
#include<string>

std::string lower(std::string c)
{
    for (int i{0}; i < c.length(); i++) {
        if (c[i] >= 'A' && c[i] <= 'Z') {
            c[i] = c[i] + 32;
        }
    }
    return c;
}

int main() {
    int count{0};
    while (true) {
        std::string ins[1000];
        std::cin >> ins[0];
        for (int i{1}; i < 1000; ++i) {
            std::cin >> ins[i];
            if (lower(ins[i]) == lower(ins[0])) {
                count += 1;
            } else if (ins[i] == "END_OF_TEXT") {
                break;
            }
        }
        break;
    }
    std::cout << count << std::endl;
}
