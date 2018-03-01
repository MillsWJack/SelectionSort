#include <iostream>

#include <vector>
#include <ctime>

using namespace std;

void populateList(vector<int>& list);
void printList(const vector<int>& list);
void selectionSort(vector<int>& list);

int main()
{
	srand(static_cast<unsigned int>(time(0)));

	//Randomly set amount of elements
	int elements = 3 + rand() % 50;
	vector<int> list(elements);

	populateList(list);
	cout << "Unsorted: \t";
	printList(list);

	selectionSort(list);
	cout << "\nSorted: \t";
	printList(list);
	cout << endl;

	return 0;
}

void populateList(vector<int>& list)
{
	//Randomly populate list with elements
	for (int i = 0; i < list.size(); i++)
	{
		int randNum = 1 + rand() % 1000;
		list[i] = randNum;
	}
}

void printList(const vector<int>& list)
{
	for (int i = 0; i < list.size(); i++)
	{
		cout << list[i] << " ";
	}
}

void selectionSort(vector<int>& list)
{
	for(int j = 0; j < list.size(); j++)
	{
		for (int i = 0; i < list.size(); i++)
		{
			if (list[i] > list[j])
			{
				int temp = list[i];
				list[i] = list[j];
				list[j] = temp;

				cout << "\n\t\t";
				printList(list);
			}
		}
	}
}