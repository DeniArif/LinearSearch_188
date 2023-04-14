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
	int comparissons;

	do
	{
		cout << "\nEnter the element you want to search : ";
		int item;
		cin >> item;

		comparissons= 0;
		for (i = 0; i < n; i++)
		{
			comparissons++;
			if (arr[i] == item)
			{
				cout << " \n " << item << " found at position " << (i + 1) << endl;
				break;
			}
		}
		if (i == n)
			cout << "\n" << item << "Not Found In The Array\n";
		cout << "\nNumber Of Comparissons : " << comparissons << endl;

		cout << "\nContinue Search (y/n) ? ";
		cin >> ch;
	} while ((ch == 'y') || (ch == 'Y'));	
}

int main()
{
	input()
}
