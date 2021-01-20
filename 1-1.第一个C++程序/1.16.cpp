#include<iostream>
using namespace std;

int main()
{
	int val,sum=0;
	for (; cin >> val;)
		sum += val;
	cout << "sum of cin :" << sum << endl;
	return 0;
}