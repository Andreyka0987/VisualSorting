#include <iostream>
#include <string>
#include <vector>
#include <chrono>
#include <thread>

#include "MainHeader.h"


int main()
{
    
    makeSpace();
    std::cin.clear();
    std::cout << "Enter integers without spacebars:" << std::endl;
    std::string numbers;
    std::getline(std::cin,numbers);
    std::cin.clear();
    if (std::cin.fail()){
        std::cin.clear();
        std::cin.ignore(35678,'\n');
    }
    makeSpace();
    std::cout << "Chose sort algoritm:\n" << "b - bubblesort " << "s -selectsort" << std::endl;




    
    std::vector<int> arrOfNumbers;

    for (int i = 0; i < numbers.size(); i++) {
        if (CalcFuncs::isNumber(numbers[i])) {
            arrOfNumbers.push_back(numbers[i] - '0');
        }
    }

    
    sortingAlgoritms::selectSort(arrOfNumbers);

    
    return 0;
}







void makeSpace() {
    std::cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n" <<
        "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n" << std::endl;
}

