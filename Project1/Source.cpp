#include <iostream>;
#include <string>;




const int arrayRows = 3;
const int arrayColumns = 7;



char DisplayArray(char seats[arrayColumns][arrayRows]) {
	std::cout << "=";
	for (int i = 0; i < arrayColumns; i++)
	{
		std::cout << i;
	};
	std::cout << "=";
	std::cout << "\n";

	for (int y = 0; y < arrayRows; y++)
	{
		for (int x = 0; x < arrayColumns + 2; x++)
		{
			if (x == 0)
			{
				std::cout << y;
			};
			if ((x > 0) && (x < arrayColumns + 1))
			{
				std::cout << seats[x - 1][y];
			};
			if (x == arrayColumns + 1)
			{
				std::cout << "|";
			}
		};
		std::cout << "\n";
	};

	for (int i = 0; i < arrayColumns + 2; i++)
	{
		std::cout << "=";
	};
	return 'x';
};





int main() {

	char seats[arrayColumns][arrayRows];


	std::cout << "=";
	for (int i = 0; i < arrayColumns; i++)
	{
		std::cout << i;
	};
	std::cout << "=";
	std::cout << "\n";

	for (int y = 0; y < arrayRows; y++)
	{
		for (int x = 0; x < arrayColumns + 2; x++)
		{
			if (x == 0)
			{
				std::cout << y;
			};
			if ((x > 0) && (x < arrayColumns + 1))
			{
				seats[x - 1][y] = { 'A' };
				std::cout << seats[x - 1][y];
			};
			if (x == arrayColumns + 1)
			{
				std::cout << "|";
			}
		};
		std::cout << "\n";
	};

	for (int i = 0; i < arrayColumns + 2; i++)
	{
		std::cout << "=";
	};






	char running = 'y';
	while (running == 'y')
	{
		std::cout << "\n";
		std::cout << "reserve seat? y/n";
		std::cin >> running;

		if (running == 'y')
		{
			int column;
			int row;

			std::cout << "pick column";
			std::cin >> column;
			std::cout << "pick row";
			std::cin >> row;

			if (seats[column][row] == 'R')
			{
				std::cout << "seat already reserved";
			};
			if (seats[column][row] == 'A')
			{
				seats[column][row] = 'R';
				DisplayArray(seats);
			};
		}
	}





	system("pause");
};