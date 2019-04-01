#include<iostream>
#include<string>
using namespace std;

const int val = 20;
struct Person
{
	char firstName[10];
	char lastName[10];
	float age;
	int ssn[val];
};


class employee {
private:
	int empNum[val];
	float wage;

	Person person;

	char title[10];

public:
	void outputInfo();
	void inputInfo();
	void calSalary(int a[], int);
};



int main()
{
	const int numOfEmployees = 1;

	employee employees[numOfEmployees];

	for (int i = 0; i <= numOfEmployees; i++)
	{
		employees[i].inputInfo();

	}
	for (int i = 0; i <= numOfEmployees; i++)
	{
		employees[i].outputInfo();
	}
	system("PAUSE");
	return 0;
}

	

void employee::inputInfo()
{
	char empNumString[val];
	char ssnString[val];

	string nyes;
	for (int i = 0; i < val; i++) empNum[i] = -1;
	cout << "Hello Employee! Lets get started, \n Input your name: " << endl;
	cin >> person.firstName;
	cout << "Your last name?: " << endl;
	cin >> person.lastName;
	cout << "Great, how old are you?: " << endl;
	cin >> person.age;
	for (int i = 0; i < val; i++) person.ssn[i] = -1;
	cout << "Now whats your social security number?: " << endl;
	cin >> ssnString;
	for (int i = 0; i < ssnString[i]; i++) {
		switch (ssnString[i]) {
		case '0': person.ssn[i] = 0; break;
		case '1': person.ssn[i] = 1; break;
		case '2': person.ssn[i] = 2; break;
		case '3': person.ssn[i] = 3; break;
		case '4': person.ssn[i] = 4; break;
		case '5': person.ssn[i] = 5; break;
		case '6': person.ssn[i] = 6; break;
		case '7': person.ssn[i] = 7; break;
		case '8': person.ssn[i] = 8; break;
		case '9': person.ssn[i] = 9; break;
		case '10': person.ssn[i] = 10; break;
		case '11': person.ssn[i] = 11; break;
		case '12': person.ssn[i] = 12; break;
		case '13': person.ssn[i] = 13; break;
		case '14': person.ssn[i] = 14; break;
		case '15': person.ssn[i] = 15; break;
		case '16': person.ssn[i] = 16; break;
		case '17': person.ssn[i] = 17; break;
		case '18': person.ssn[i] = 18; break;
		case '19': person.ssn[i] = 19; break;
		}
	}
	cout << "Do you want your social security number as your employee number? " << endl;
	cin >> nyes;
		if (nyes == "yes")
		{
			for (int i = 0; i < val; i++)
			{
				person.ssn[i] = empNum[i];
			}
			goto SKIPPED;
		}
		else {
			

			cout << "What's your Employee Number?: " << endl;
			cin >> empNumString;
			for (int i = 0; empNumString[i]; i++)
			{
				switch (empNumString[i]) {
				case '0': empNum[i] = 0; break;
				case '1': empNum[i] = 1; break;
				case '2': empNum[i] = 2; break;
				case '3': empNum[i] = 3; break;
				case '4': empNum[i] = 4; break;
				case '5': empNum[i] = 5; break;
				case '6': empNum[i] = 6; break;
				case '7': empNum[i] = 7; break;
				case '8': empNum[i] = 8; break;
				case '9': empNum[i] = 9; break;
				case '10': empNum[i] = 10; break;
				case '11': empNum[i] = 11; break;
				case '12': empNum[i] = 12; break;
				case '13': empNum[i] = 13; break;
				case '14': empNum[i] = 14; break;
				case '15': empNum[i] = 15; break;
				case '16': empNum[i] = 16; break;
				case '17': empNum[i] = 17; break;
				case '18': empNum[i] = 18; break;
				case '19': empNum[i] = 19; break;
				}
			}
		}

	
	SKIPPED:cout << "What's your wage?: " << endl;
	cin >> wage;
	cout << "Lastly, whats your title?: " << endl;
	cin >> title;

}

void employee::outputInfo()
{
	employee output;
	

	// loop through the elements of the array


	// loop through the elements of the array
	
	cout << "Your Name: " << person.firstName << " " << person.lastName << endl;
	cout << "Age: " << person.age << endl;

	cout << "SSN: ";
	for (int i = 0; i < val; i++) {
		if (person.ssn[i] == -1)
		{
			break;
		}
		cout << person.ssn[i];
	}
	cout << endl;
	if (empNum == person.ssn)
	{
		cout << "Wage: " << wage << endl;
		cout << "Title: " << title << endl;
	}
	else 
	{
		cout << "Employee Number: ";
		for (int i = 0; i < val; i++) {
			if (empNum[i] == -1)
			{
				break;
			}
			cout << empNum[i];
		}
		cout << endl;
		cout << "Wage: " << wage << endl;
		cout << "Title: " << title << endl;
	}

}

void employee::calSalary(int arr[], int)
{
	employee calSalary;
	int choice;
	int hours;

	int product = hours * arr[choice];
	cout << "Which Employee's salary do you want to calculate? 1-10" << endl;
	cin >> choice;

	cout << "How many hours did you work?: " << endl;
	cin >> hours;

	cout << "Employee" << choice << " salary is: " << hoursarr[choice].wage
	
}
