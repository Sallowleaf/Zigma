// Zigma.cpp : A program which asks a number and prints the sigma.
//

#include "stdafx.h"
#include <iostream>



int main()
{
	int Numberinput=0;
	int Result=0;
	std::cout << "Think of a Number?";
	std::cin >> Numberinput;
	
	//for (int i = 0; i <= Numberinput; ++i)
	//{
		//std::cout << "I am in.";

		//Result == Result + i; 
	//}
		//std::cout << "here you are: " << Result << "\n"
	int i = 0;
		while (i<Numberinput)
		{
			++i;
			Result = Result + i;
			
		}
	
		
    return 0;
}

