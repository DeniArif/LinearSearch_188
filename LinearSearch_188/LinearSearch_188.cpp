#include <iostream>
using namespace std;

int arr[20];
int n;
int i;

void input()
{
	while (true)
	{
		cout << "Enter the number of element int the array : ";
		cin >> n;
		if ((n > 0) && (n <= 20))
			break;
		else
			cout << "\nArray should have minimum 1 hanf maximum 20 element.\n\n";
	}

	cout << "\n--------------------\n";
	cout << "\n Enter array element\n";
	cout << "\n--------------------\n";
	for (i = 0; i < n; i++)
	{
		cout << "<" << (i + i) << ">";
		cin >> arr[i];
	}	
}

void linearSearch()
{
	char ch;
	int comparison;

	do
	{
		cout << "\nEnter the element you want to search : ";
		int item;

		comparison = 0;
		if (arr[i] == item)
		{
			cout << " \n " << item << " found at position " << (i + 1) << endl;
			break;
		}
	}

}
