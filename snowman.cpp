#include "snowman.hpp"
#include <iostream>


namespace ariel {
	int getLeftDigit(int num) {
		for (; num >= 10; num /= 10);

		return num;
	}

	
	string snowman(int n)
	{
		if (n < 11111111 || n > 44444444) {
			throw invalid_argument("Invalid input");
			
		}


		
		/* n = HNLRXYTB
		* 0        1         2            3             4            5             6          7
		  H = Hat, N = Nose, L = LeftEye, R = RightEye, X = LeftArm, Y = RightArm, T = Torse, B = Base

		  HHHHH
		  HHHHH
		 X(LNR)Y
		 X(TTT)Y
		  (BBB)
		*/
		int digits[8];

		for (int i = 7; i >= 0; --i, n /= 10) {
			digits[i] = n % 10;
			if (digits[i] < 1 && digits[i] > 4) {
				throw invalid_argument("Invalid input");

			}
		}
		
		string result;
		result = addHat(digits[0]);
		result.append("\n");

		result.append(addLeftArm1(digits[4]));
		result.append("(");
		result.append(addEye(digits[2]));
		result.append(addNose(digits[1]));
		result.append(addEye(digits[3]));
		result.append(")");
		result.append(addRightArm1(digits[5]));
		result.append("\n");

		result.append(addLeftArm2(digits[4]));
		result.append("(");
		result.append(addTorso(digits[6]));
		result.append(")");
		result.append(addRightArm2(digits[5]));
		result.append("\n");

		result.append(" (");
		result.append(addBase(digits[7]));
		result.append(")");

		return result;
	}

	string addHat(int n) 
	{
		string result;

		switch (n)
		{
		case 1:
			result = "      \n _===_";
			break;
		case 2:
			result = "  ___ \n .....";
			break;
		case 3:
			result = "   _  \n  /_\\ ";
			break;
		case 4:
			result = "  ___ \n (_*_)";
			break;
		default:
			// Error
			break;
		}

		return result;
	}

	string addNose(int n)
	{
		string result;

		switch (n)
		{
		case 1:
			result = ",";
			break;
		case 2:
			result = ".";
			break;
		case 3:
			result = "_";
			break;
		case 4:
			result = " ";
			break;
		default:
			// Error
			break;
		}

		return result;
	}

	string addEye(int n)
	{
		string result;

		switch (n)
		{
		case 1:
			result = ".";
			break;
		case 2:
			result = "o";
			break;
		case 3:
			result = "O";
			break;
		case 4:
			result = "-";
			break;
		default:
			// Error
			break;
		}

		return result;
	}

	string addLeftArm1(int n)
	{
		string result;

		switch (n)
		{
		case 1:
			result = " ";
			break;
		case 2:
			result = "\\";
			break;
		case 3:
			result = " ";
			break;
		case 4:
			result = " ";
			break;
		default:
			// Error
			break;
		}

		return result;
	}

	string addLeftArm2(int n)
	{
		string result;

		switch (n)
		{
		case 1:
			result = "<";
			break;
		case 2:
			result = " ";
			break;
		case 3:
			result = "/";
			break;
		case 4:
			result = " ";
			break;
		default:
			// Error
			break;
		}

		return result;
	}

	string addRightArm1(int n)
	{
		string result;

		switch (n)
		{
		case 1:
			result = " ";
			break;
		case 2:
			result = "/";
			break;
		case 3:
			result = " ";
			break;
		case 4:
			result = " ";
			break;
		default:
			// Error
			break;
		}

		return result;
	}

	string addRightArm2(int n)
	{
		string result;

		switch (n)
		{
		case 1:
			result = ">";
			break;
		case 2:
			result = " ";
			break;
		case 3:
			result = "\\";
			break;
		case 4:
			result = " ";
			break;
		default:
			// Error
			break;
		}

		return result;
	}

	string addTorso(int n)
	{
		string result;

		switch (n)
		{
		case 1:
			result = " : ";
			break;
		case 2:
			result = "] [";
			break;
		case 3:
			result = "> <";
			break;
		case 4:
			result = "   ";
			break;
		default:
			// Error
			break;
		}

		return result;
	}

	string addBase(int n)
	{
		string result;

		switch (n)
		{
		case 1:
			result = " : ";
			break;
		case 2:
			result = "\" \"";
			break;
		case 3:
			result = "___";
			break;
		case 4:
			result = "   ";
			break;
		default:
			// Error
			break;
		}

		return result;
	}

}