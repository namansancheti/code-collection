#include<bits/stdc++.h>
using namespace std;

int partition(int arr[], int low, int high)
{
	int pivot = arr[high];
	
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
	int temp = arr[i + 1];
	arr[i + 1] = arr[high];
	arr[high] = temp;
	
	return i + 1;
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
	int arr[] = {4, 2, 1, 10, 15};
	int N = sizeof(arr) / sizeof(arr[0]);
	
	for(int i = 0; i < N; i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<"\n";
	
	quick_sort(arr, 0, N-1);
	
	for(int i = 0; i < N; i++)
	{
		cout<<arr[i]<<" ";
	}
	
	
	return 0;
}
