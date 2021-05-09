#include <iostream>
#include <iomanip>
using namespace std;

int pactorial(int num)
{
	if (num == 1)
		return 1;
	else if (num == 0)
		return 1;
	else
		return num * pactorial(num - 1);
}

int main(void)
{
	int num=13;
	int result;
	while (num < 0 || num>12)
	{
		cin >> num;
	}
	result= pactorial(num);
	cout << result;
}