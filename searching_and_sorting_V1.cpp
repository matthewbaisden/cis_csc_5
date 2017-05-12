#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

// Create array
int main()
{
	int size;
	// Ask user to input the size of the array he/she wants
	cout << "How big do you want the array?" << endl;
	// Store the size of the array in sz
	cin >> size;
	// Kitty cat proof user input
	
	// Array size, declare
	int array[size];
	// Populate array with random numbers
	
	srand( ( time(0)));
	{
		for(int i=0; i<size; i++) 
		{
			cin >> array[i];
			if (array[i]>=10)
			i++;
		}
	}
	// Search the array for the elements
	int index_found_array = linear_search(array,size,target);

	// output our results
	if ( index_found_array != -1 ) 
		cout << "Found " << target << " at index " << index_found_array << endl;
	else 
		cout << "Did not find " << target << endl;
}

// Search the displayList array for contents, Binary Search
int displayList(int array[], int sz, int target)
{
	for(int i=0;i<sz;i++)
	{
		if ( array[i]==target ) return i; // if target value found, return with subscript
	}
	return -1;
}

// Bubble sort the elements from largest to smallest
void sort
{
	for(int i=0; i <size; i++)
		for(int j=1; j<size; j++)
		{
			if (array[i-1] < array[j])
			{
				int temp= = a[i];
				array[i] = a[j];
				array[j] = temp;
			}
				swap (array[i] a[j]);
		}
}
