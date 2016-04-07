#include<iostream>
#include<stdio.h>

using namespace std;

template <typename Arbitrary_type>

void sort(Arbitrary_type Arr[], int number_of_elements)
{
	Arbitrary_type Dummy_variable;

	// using bubble sorting to sort decending order

	for (int i = 0; i < number_of_elements - 1; i++)
	{
		for (int j = i + 1; j < number_of_elements; j++)
			if (Arr[i] < Arr[i])
			{
				Dummy_variable = Arr[i];
				Arr[i] = Arr[j];
				Arr[j] = Dummy_variable;
			}
	}
	for (int k = 0; k < number_of_elements; k++)
	{
		cout << Arr[k] << " ";
	}

}
int main()
{
	int arr1[] = { 8, 7, 1, 2, 6, 3, 9 };
	double arr2[] = { 4.2, 5.1, 3.4,2.5,3.5,5.2,6.4};
	char arr[] = { "ntuliSS"};

	sort(arr, 7);
	cout << endl;

	sort(arr1, 7);
	cout << endl;

	sort(arr2, 7);
	
	system("pause");
}


