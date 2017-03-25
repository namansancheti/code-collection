#include<bits/stdc++.h>
using namespace std;

// Enhanced Bubble sort which stops if there is no swap in any iteration i.e. the array becomes sorted in some intermediate step.

void bubble_sort(int arr[], int N)
{
	bool swap_occured;
	for(int i = 1; i <= N - 1; i++)
	{
		swap_occured = false;
		for(int j = 0; j < N - i; j++)
		{
			if(arr[j+1] <= arr[j])
			{
				int temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
				if(!swap_occured)
				{
					swap_occured = true;
				}
			}
		}
		if(!swap_occured)
			return;
	}
}

int main()
{
	int arr[] = {4, 10, 2, 1, 5};
	//int arr[] = {1, 2, 4, 5, 10};
	
	int N = sizeof(arr) / sizeof(arr[0]);
	
	for(int i = 0; i < 5; i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<"\n";
	
	bubble_sort(arr, N);
	
	for(int i = 0; i < 5; i++)
	{
		cout<<arr[i]<<" ";
	}
	
	return 0;
}

