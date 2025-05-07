#include <iostream>
#include <string>
#include <sstream>

//using namespace std

int main(void){

    // std::string a;
    // int num;
    // std::cout << "Hello please enter a phrase:" << std::endl;
    // std::getline(std::cin, a);
    // std::cout << "The string you entered is: " << a << std::endl;
    // std::stringstream(a) >> num;
    // std::cout << "The int is: " << num << "\n";
    int numbers[5];
    int *p;
    p = numbers;
    *p = 1;
    *(p+4) = 5;
    numbers[1] = 2;
    p++;
    p++;
    *p = 3;
    p = &numbers[3];
    *p = 4;
    for (int n=0; n<5; n++)
    std::cout << numbers[n] << ", ";
    return 0;
}