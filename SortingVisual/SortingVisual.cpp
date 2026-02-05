#include <iostream>
#include <string>
#include <vector>
#include <chrono>
#include <thread>

#include "MainHeader.h"


int main()
{
    restart:
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
    
    std::vector<int> arrOfNumbers;

    for (int i = 0; i < numbers.size(); i++) {
        if (CalcFuncs::isNumber(numbers[i])) {
            arrOfNumbers.push_back(numbers[i] - '0');
        }
    }


    makeSpace();
    again:
    std::cout << "Chose sort algoritm:\n" << "b - bubblesort " << "s -selectsort" << std::endl;
    char input;
    std::cin >> input;
    
    if (std::cin.fail())
    {
        std::cin.clear();
        std::cin.ignore(35678, '\n');
        std::cout << "Something gone wrong";
            goto again;
    }

    switch (input) {
    case('b'):
        sortingAlgoritms::bubbleSort(arrOfNumbers);
        break;
    case('s'):
        sortingAlgoritms::selectSort(arrOfNumbers);
        break;
    default:
        std::cout << "You made a mistake" << std::endl;
        goto again;
        break;
    }



    
    std::cout << "Again?" << std::endl;
    char yesOrNo;
    std::cin >> yesOrNo;

    if (yesOrNo == 'y'){
        goto restart;
    }
    else {
        exit;
    }

    
    

    
    return 0;
}







void makeSpace() {
    std::cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n" <<
        "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n" << std::endl;
}

