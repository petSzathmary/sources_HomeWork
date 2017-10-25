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
	uniform_int_distribution<int> ranType1(0, 2);
	uniform_int_distribution<int> ranType2(0, 1);
	uniform_int_distribution<int> ran0_9(48, 57);
	uniform_int_distribution<int> ranA_Z(65, 90);
	int i, type;
	char ecv[3];
	cout << "Random ECV of a KE car: KE-";
	for (i = 0; i < 3; i++)
	{
		type = ranType1(randGen);
		switch (type)
		{
		case 0: ecv[i] = ran0_9(randGen);
			break;
		case 1: ecv[i] = ran0_9(randGen);
			break;
		case 2: ecv[i] = ran0_9(randGen);
			break;
		/*case 3: ecv[i] = ranA_Z(randGen);
			break;
		case 4: ecv[i] = ranA_Z(randGen);
			break;*/
		}
	}
	char ecvA_Z[2];
	for (i = 0; i < 2; i++)
	{
		type = ranType2(randGen);
		switch (type)
		{
		case 0: ecvA_Z[i] = ranA_Z(randGen);
			break;
		case 1: ecvA_Z[i] = ranA_Z(randGen);
			break;
		}
	}
	for (i = 0; i < 3; i++)
	{
		cout << ecv[i];
	}
	for (i = 0; i < 2; i++)
	{
		cout << ecvA_Z[i];
	}
	cout << endl;
	return 0;
}
