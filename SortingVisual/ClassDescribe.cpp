#include <iostream>
#include <vector>
#include <thread>
#include <chrono>
#include "MainHeader.h"

bool CalcFuncs::isArrIsNull(std::vector<int>& arr) {
    for (int i = 0; i < arr.size(); i++){
        if (arr[i] > 0)return false;
    }
    return true;
}

bool CalcFuncs::isNumber(char a) {
    switch (a) {
    case('0'):
    case('1'):
    case('2'):
    case('3'):
    case('4'):
    case('5'):
    case('6'):
    case('7'):
    case('8'):
    case('9'):
        return true;
        return false;
    }
}


void CalcFuncs::printGraph(std::vector<int>& printedArr) {
    std::vector<int> refactor = printedArr;
    int biggestNum = 0;
    for (int i = 0; i < printedArr.size(); i++)
    {
        if (printedArr[i] > biggestNum){
            biggestNum = printedArr[i];
        }
    }

    while (biggestNum != 0) {
         
        for (int i = 0; i < refactor.size(); i++)
        {
            if (biggestNum == refactor[i]) {
                std::cout << "*";
                refactor[i]--;
            }
            else {
                std::cout << " ";
            }
        }
        std::cout << '\n';
        biggestNum--;
    }

}

void sortingAlgoritms::selectSort(std::vector<int>& arr) {

    for (int i = 0; i < arr.size(); i++) {

        for (int j = i; j < arr.size(); j++)
        {
            if (arr[i] > arr[j]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;

                makeSpace();
                CalcFuncs::printGraph(arr);
                std::this_thread::sleep_for(std::chrono::milliseconds(sortingAlgoritms::TIME_TO_SORT));

            }
        }
    }



}

void sortingAlgoritms::bubbleSort(std::vector<int>& arr) {

    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = 1; j < arr.size(); j++)
        {
            if (arr[j - 1] > arr[j]) {
                int temp = arr[j - 1];
                arr[j - 1] = arr[j];
                arr[j] = temp;

                makeSpace();
                CalcFuncs::printGraph(arr);
                std::this_thread::sleep_for(std::chrono::milliseconds(sortingAlgoritms::TIME_TO_SORT));
            }
        }

    }


}
