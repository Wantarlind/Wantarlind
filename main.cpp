#include <iostream>
#include <windows.h>
int main() {

SetConsoleOutputCP(1251);
SetConsoleCP(1251);

//start
float num1, num2;
float res;
std::cout << "enter number 1: ";
std::cin >> num1; 

std::cout << "enter number 2: ";
std::cin >> num2;


char math;
std::cout << "enter math symbol: ";
std::cin >> math;

if (math == '+')
res = num1 + num2;
else if (math == '-')
res = num1 - num2;
else if (math == '*')
res = num1 * num2;
else if (math == '/')
res = num1 / num2;

std::cout << "result: " << res << std::endl;







//finish



std::cin.get();
std::cin.get();
    return 0;

}
