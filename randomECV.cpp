/*
	Author: Peter Szathmary
*/
#include<iostream>
#include<random>
#include<ctime>
using namespace std;
int main()
{
	mt19937 randGen(time(0));
	uniform_int_distribution<int> ranType2(0, 2);
	uniform_int_distribution<int> ran0_9(48, 57);
	int i, type;
	char ecv[3];
	cout << "Random ECV of a KE car: KE-";
	for (i = 0; i < 3; i++)
	{
		type = ranType2(randGen);
		switch (type)
		{
		case 0: ecv[i] = ran0_9(randGen);
			break;
		case 1: ecv[i] = ran0_9(randGen);
			break;
		case 2: ecv[i] = ran0_9(randGen);
			break;
		}
	}
	for (i = 0; i < 3; i++)
	{
		cout << ecv[i];
	}
	cout << endl;
	return 0;
}
