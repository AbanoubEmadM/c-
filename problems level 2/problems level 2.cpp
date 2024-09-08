#include <iostream>
#include <string>

using namespace std;

enum enPassFail {Pass = 1, Fail = 2};

void ReadNumbers(int& Num1, int& Num2, int& Num3)
{
	cout << "Num1: ";
	cin >> Num1;

	cout << "Num2: ";
	cin >> Num2;

	cout << "Num3: ";
	cin >> Num3;

}
int SumOfThreeNumbers(int Num1, int Num2, int Num3)
{
	int Sum = Num1 + Num2 + Num3;
	return Sum;
}
int AverageOfThreeNumbers(int Num1, int Num2, int Num3)
{
	return (float)SumOfThreeNumbers(Num1, Num2, Num3) / 3;
}
enPassFail CheckAverage(float Average)
{
	if (Average >= 50)
		return enPassFail::Pass;
	else
		return enPassFail::Fail;
}
void PrintResults(float Average)
{
	if (CheckAverage(Average) == enPassFail::Pass)
		cout << "Pass";
	else
		cout << "Fail";
}
int main()
{	
	int Num1, Num2, Num3;
	ReadNumbers(Num1, Num2, Num3);
	PrintResults(AverageOfThreeNumbers(Num1, Num2, Num3));
}
