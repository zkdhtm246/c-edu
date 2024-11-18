#include<iostream>
/*

	*****
	****
	***
	**
	*
	--------------------------------------
		*
	   **
	  ***
	 ****
	*****

	*/

int main()
{
	int n = 11;

	for (int i = 1; i <= n; i++)
	{
		if (i < 6)
		{
			for (int k = 5; k >= i; k--)
			{
				std::cout << "*";
			}
			std::cout << std::endl;
		}
		else if(i == 6)
		{
			std::cout << "--------------------" << std::endl;
		}
		else
		{
			for (int k = 10; k >= i; k--)
			{
				std::cout << " ";

			}
			for (int j = 7; i >= j; j++)
			{
				std::cout << "*";
			}
			std::cout << std::endl;
		}

	}














}