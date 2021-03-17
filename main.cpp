#include <iostream>
#include "snowman.hpp"

using namespace ariel;

void chooseHat(int x);
void chooseNose(int x);
void chooseLeftEye(int x);
void chooseRightEye(int x);
void chooseLeftArm(int x);
void chooseRightArm(int x);
void chooseTorso(int x);
void chooseBase(int x);

int main() {
	int result = 0;
	int choice = 0;
	char flag;
	
	do {
		cout << "Do you wanna build a snowman? Y/N" << endl;
		cin >> flag;

		if (flag == 'n' || flag == 'N') {
			cout << "\nYou've made Anna sad :(" << endl;

			return 0;
		}
	} while (flag != 'y' && flag != 'Y');

	// HNLRXYTB
	cout << "\nYay! Let's build a snowman!\n" << endl;

	chooseHat(choice);
	cin >> choice;
	result = result * 10 + choice;
	
	chooseNose(choice);
	cin >> choice;
	result = result * 10 + choice;

	chooseLeftEye(choice);
	cin >> choice;
	result = result * 10 + choice;

	chooseRightEye(choice);
	cin >> choice;
	result = result * 10 + choice;

	chooseLeftArm(choice);
	cin >> choice;
	result = result * 10 + choice;

	chooseRightArm(choice);
	cin >> choice;
	result = result * 10 + choice;

	chooseTorso(choice);
	cin >> choice;
	result = result * 10 + choice;

	chooseBase(choice);
	cin >> choice;
	result = result * 10 + choice;

	cout << "\nHere's your snowman!" << endl;
	cout << snowman(result);

	return 0;
}

void chooseHat(int x) {
	cout << "Choose a hat (1-4): " << endl;
	cout << "1. Straw Hat:" << endl << addHat(1) << endl << endl;
	cout << "2. Mexican  Hat:" << endl << addHat(2) << endl << endl;
	cout << "3. Fez Hat:" << endl << addHat(3) << endl << endl;
	cout << "4. Russian Hat:" << endl << addHat(4) << endl << endl;
}

void chooseNose(int x) {
	cout << "\nChoose a nose (1-4): " << endl;
	cout << "1. Normal:" << endl << addNose(1) << endl << endl;
	cout << "2. Dot:" << endl << addNose(2) << endl << endl;
	cout << "3. Line:" << endl << addNose(3) << endl << endl;
	cout << "4. None:" << endl << addNose(4) << endl << endl;
}

void chooseLeftEye(int x)
{
	cout << "\nChoose a left eye (1-4): " << endl;
	cout << "1. Dot:" << endl << addEye(1) << endl << endl;
	cout << "2. Bigger Dot:" << endl << addEye(2) << endl << endl;
	cout << "3. Biggest Dot:" << endl << addEye(3) << endl << endl;
	cout << "4. Closed:" << endl << addEye(4) << endl << endl;
}

void chooseRightEye(int x)
{
	cout << "\nChoose a right eye (1-4): " << endl;
	cout << "1. Dot:" << endl << addEye(1) << endl << endl;
	cout << "2. Bigger Dot:" << endl << addEye(2) << endl << endl;
	cout << "3. Biggest Dot:" << endl << addEye(3) << endl << endl;
	cout << "4. Closed:" << endl << addEye(4) << endl << endl;
}

void chooseLeftArm(int x)
{
	cout << "\nChoose a left arm (1-4): " << endl;
	cout << "1. Normal Arm:" << endl << addLeftArm1(1) << endl << addLeftArm2(1) << endl << endl;
	cout << "2. Upwards Arm:" << endl << addLeftArm1(2) << endl << addLeftArm2(2) << endl << endl;
	cout << "3. Downwards Arm:" << endl << addLeftArm1(3) << endl << addLeftArm2(3) << endl << endl;
	cout << "4. None:" << endl << addLeftArm1(4) << endl << endl << addLeftArm2(4) << endl;
}

void chooseRightArm(int x)
{
	cout << "\nChoose a right arm (1-4): " << endl;
	cout << "1. Normal Arm:" << endl << addRightArm1(1) << endl << addRightArm2(1) << endl << endl;
	cout << "2. Upwards Arm:" << endl << addRightArm1(2) << endl << addRightArm2(2) << endl << endl;
	cout << "3. Downwards Arm:" << endl << addRightArm1(3) << endl << addRightArm2(3) << endl << endl;
	cout << "4. None:" << endl << addRightArm1(4) << endl << endl << addRightArm2(4) << endl;
}

void chooseTorso(int x)
{
	cout << "\nChoose a torso (1-4): " << endl;
	cout << "1. Buttons:" << endl << addTorso(1) << endl << endl;
	cout << "2. Vest:" << endl << addTorso(2) << endl << endl;
	cout << "3. Inward Arms:" << endl << addTorso(3) << endl << endl;
	cout << "4. None:" << endl << addTorso(4) << endl << endl;
}

void chooseBase(int x)
{
	cout << "\nChoose a base (1-4): " << endl;
	cout << "1. Buttons:" << endl << addBase(1) << endl << endl;
	cout << "2. Feet:" << endl << addBase(2) << endl << endl;
	cout << "3. Flat:" << endl << addBase(3) << endl << endl;
	cout << "4. None:" << endl << addBase(4) << endl << endl;
}

