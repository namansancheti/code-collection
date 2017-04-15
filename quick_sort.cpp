#include<bits/stdc++.h>
using namespace std;

int N;

int partition(int arr[], int low, int high)
{
	int pivot = arr[high]; // Pick the last element as the pivot
	int i = low - 1;
	
	for(int j = low; j <= high - 1; j++)
	{
		if(arr[j] <= pivot)
		{
			i++;
			int temp = arr[i];
			arr[i] = arr[j];
			arr[j] = temp;
		}
	}
	
    int temp2 = arr[i + 1];
    arr[i + 1] = arr[high];
    arr[high] = temp2;
	return i + 1; // Return the index of the pivot element
}

void quick_sort(int arr[], int low, int high)
{
	if(low < high)
	{
		int pi = partition(arr, low, high);
		quick_sort(arr, low, pi - 1);
		quick_sort(arr, pi + 1, high);
	}
	
}

int main()
{
	int arr[] = {10, 7, 8, 9, 1, 5};
	N = sizeof(arr) / sizeof(arr[0]);
	
	quick_sort(arr, 0, N - 1);
	
	cout<<"The sorted array is ";
	for(int i = 0; i < N; i++)
	{
		cout<<arr[i]<<" ";
	}
	
	
	return 0;
}
