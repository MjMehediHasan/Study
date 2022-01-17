// "Copyright [2022] Mehedi Hasan"
// Learning Started 17/01/22 | 9.00 p.m


#include<iostream>
#include <regex>
#include<string>

int main() {
    // Declares
    const double celsius{9}, farenheight {1.8}, kelvin {273};
    double convert{0};
    std::string unit{0};
    // Inputs
    std::cout << "\nTell me the temperature (also put c/f/k at the end of number): " << std::endl;
    std::cin >> convert;
    std::cin >> unit;   // This Will take the remaining buffer from "Double" type | c/f/k
  if (std::regex_match(unit, std::regex("c|C|\\sC|\\sc"))) {
    //
    // Simple "Regular Expression"(regex) to give the AI to understand the Unit ! "\s" for "White Spaces" !
    //
    std::cout << "\n\nIn Farenheight ==> " << (convert+32) * farenheight << " F" << std::endl;
    std::cout << "In kelvin      ==> " << convert + kelvin << " K" << std::endl;
  } else if (std::regex_match(unit, std::regex("f|F|\\sf|\\sF"))) {
    std::cout << "\n\nIn celsius ==> " << convert / celsius << " C" << std::endl;
    std::cout << "In kelvin      ==> " << convert + kelvin << " K" << std::endl;
  } else if (std::regex_match(unit, std::regex("k|K|\\sk|\\sK"))) {
    std::cout << "\n\nIn Farenheight ==> " << (convert+32) * farenheight << " F" << std::endl;
    std::cout << "In celsius      ==> " << convert / celsius << " C" << std::endl;
  } else {
      std::cout << "Look What You Made Me DO !" << std::endl;
  }
}