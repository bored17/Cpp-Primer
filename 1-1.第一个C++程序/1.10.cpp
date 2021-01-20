#include<iostream>
using namespace std;

int main()
{
	int val = 10, sum = 0;
	while (val)
	{
		sum += val;
		val--;
	}
	cout << "10 to 1  sum is" << sum << endl;
}