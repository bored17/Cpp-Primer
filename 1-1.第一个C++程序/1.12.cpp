#include<iostream>
using namespace std;

int main()
{
	int sum = 0;
	for (int i = -100; i <=100; i++)
	{
		sum += i;
	}
	cout << "sum of -100 to 100 is" << sum << endl;
}