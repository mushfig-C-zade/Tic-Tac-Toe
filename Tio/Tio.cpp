#include <iostream>

using namespace std;

int main()
{
	int counter = 0, i = 0, j = 0;

	constexpr int length = 3;

	char area[length][length];

	int selectedNumber;

	for (size_t i = 0, k = 49; i < length; i++)
	{
		for (size_t j = 0; j < length; j++)
		{
			area[i][j] = k++;
		}
	}

	while (true)
	{
		system("cls");

		for (size_t i = 0; i < length; i++)
		{
			for (size_t j = 0; j < length; j++)
			{
				cout << area[i][j] << ' ';
			}
			cout << '\n';
		}
		if (area[0][0] == area[0][1] && area[0][0] == area[0][2])
		{
			cout << "Siz qalibsiz";
			break;
		}
		else if (area[1][0] == area[1][1] && area[1][0] == area[1][2])
		{
			cout << "Siz qalibsiz";
			break;
		}
		else if (area[2][0] == area[2][1] && area[2][0] == area[2][2])
		{
			cout << "Siz qalibsiz";
			break;
		}
		else if (area[0][0] == area[1][0] && area[0][0] == area[2][0])
		{
			cout << "Siz qalibsiz";
			break;
		}
		else if (area[0][1] == area[1][1] && area[0][1] == area[2][1])
		{
			cout << "Siz qalibsiz";
			break;
		}
		else if (area[0][2] == area[1][2] && area[0][2] == area[2][2])
		{
			cout << "Siz qalibsiz";
			break;
		}
		else if (area[0][0] == area[1][1] && area[0][0] == area[2][2])
		{
			cout << "Siz qalibsiz";
			break;
		}
		else if (area[2][0] == area[1][1] && area[2][0] == area[0][2])
		{
			cout << "Siz qalibsiz";
			break;
		}
		int counter = 0;
		for (size_t i = 0; i < 9; i++)
		{
			if (area[0][i] == 'X'||area[0][i]=='O')
			{
				counter++;
			}			
		}
		if (counter==9)
		{
			cout << "Oyun berabere bitdi ";
			break;
		}

		do
		{
			cout << "\nEdedi daxil edin: ";

			cin >> selectedNumber;

			i = selectedNumber / 3;

			j = selectedNumber % 3 - 1;

		} while (area[i][j] == 'O' || area[i][j] == 'X');

		area[i][j] = ++counter % 2 == 0 ? 'O' : 'X';

	}



	system("pause");
}