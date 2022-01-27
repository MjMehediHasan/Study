// Copyright [2022] Meek_0
// Learning Started 27/01/22 | 11.00 p.m

#include<iostream>

// Function Prototypes
void volume_cylinder();     // If your function excepts value then must include it's <type>
void area_circle();
//
// Function Prototypes helps to get rid of defining the function before "int main()"
//
int main() {
    area_circle();
    volume_cylinder();
    return 0;
}

void area_circle() {
    double r{0};
    std::cout << "\nEnter radius of circle : " << std::endl;
    std::cin >> r;
    std::cout << "\nArea of the circle is " << (3.1416*r*r) << std::endl;
}

void volume_cylinder() {
    double h{0};
    double r{0};
    std::cout << "\nEnter radius and height of cylinder seperated by space : " << std::endl;
    std::cin >> r >> h;
    std::cout << "\nVolume Of cylinder is " << (3.1416*r*r*h) << std::endl;
}
