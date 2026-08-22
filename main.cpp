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
else if (math == '/') {
if ( num2 == 0 ) {
std::cout << "делить на ноль нельзя и ты ваще щеночек";
return 0;
 } else {
res = num1 / num2;
}
} else {
std::cout << "неизвестный символ";
return 0;
  }





std::cout << "result: " << res << std::endl;







//finish



std::cin.get();
std::cin.get();
 

}
