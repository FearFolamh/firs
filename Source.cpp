#include <iostream>
#include <fstream>

int main()
{
	//int mn = 3;
	std::cout << "start" << '\n';
	
	std::ofstream f("3.txt");

	for (long long i = ( 11 * pow(10, 9) + 1);i < 12 * pow(10, 9);i = i + 2)
	{
		int k = 0;
		if (pow(i, 0.25) == int(pow(i, 0.25)))
		{
			std::cout << i << '\n';
			for (int j = 1;j <= pow(i, 0.125);j = j + 2)
			{
				if (i % j == 0)
				{
					k++;
					if (k > 1)
						break;
				}

			}
			std::cout << i << '\n';

		}
		if (k == 1)
		{
			f << i << '\n';
			std::cout<< i << '\n';
		}


	}
	std::cout << "end" << '\t' << "1" << '\n'<< '\n';

	//system("start 1.exe");
}
