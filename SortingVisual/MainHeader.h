#ifndef main

// main classes

class CalcFuncs
{
private:

public:
	CalcFuncs();
	~CalcFuncs();

	static bool isNumber(char a);
	static void printGraph(std::vector<int>& printedArr);
	static bool isArrIsNull(std::vector<int>& arr);
};


// main funcs
void makeSpace();


namespace sortingAlgoritms {
	const int TIME_TO_SORT = 500;
	void selectSort(std::vector<int>& arr);
	void bubbleSort(std::vector<int>& arr);
}



#endif // !main
