#include<iostream>
using namespace std;

int main()
{
	int currval=0, val=0,cnt=1;
	if (cin >> currval)
	{
		val = currval;
		while (cin >> currval)
		{
			if (val == currval)
				cnt++;
			else
			{
				cout << val << "appear" << cnt << "times"<<endl;
				val = currval;
				cnt = 1;
			}
		}
		cout << val << "appear" << cnt << "times" << endl;
	}
	return 0;

}