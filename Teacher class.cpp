#pragma once
#include "Solutions^^.h"
class Teacher
{
	vector<int> first;
	vector<int> second;
	vector<int> third;

public:
	Teacher()
	{
		first.resize(10);
		second.resize(10);
		third.resize(10);
		for (int i = 0; i < 10; i++)
		{
			first[i] = 1 + rand() % 9;
			second[i] = 1 + rand() % 9;
			third[i] = first[i] * second[i];
		}
	}
	void examples()
	{
		int counter = 0;
		for (int i = 0; i < 10; i++)
		{
			cout << "Example #" << i + 1 << "/10" << endl;
			cout << first[i] << " x " << second[i] << " = ? ";
			int tmp;
			cinX(tmp, "Your Answer: ", '+');
			if (tmp == third[i])
			{
				counter++;
			}
		}
		switch (counter)
		{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		{
			system("cls");
			cout << "Test results: " << endl;
			cout << "Mark [D]" << endl;
			cout << "Correct answers: " << counter << "/10" << endl;
			system("pause");
		}
		break;
		case 6:
		case 7:
		{
			system("cls");
			cout << "Test results: " << endl;
			cout << "Mark [C]" << endl;
			cout << "Correct answers: " << counter << "/10" << endl;
			system("pause");
		}
		break;
		case 8:
		case 9:
		{
			system("cls");
			cout << "Test results: " << endl;
			cout << "Mark [B]" << endl;
			cout << "Correct answers: " << counter << "/10" << endl;
			system("pause");
		}
		break;
		case 10:
		{
			system("cls");
			cout << "Test results: " << endl;
			cout << "Mark [A]" << endl;
			cout << "Correct answers: " << counter << "/10" << endl;
			system("pause");
		}
		break;
		}
	}
};