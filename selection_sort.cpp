#include<bits/stdc++.h>
using namespace std;

void selection_sort(int arr[], int N)
{
	for(int i = 1; i <= N - 1; i++)
	{
		int min_ele = arr[i-1];
		int min_ele_index = i - 1;
		for(int j = i; j < N; j++)
		{
			if(arr[j] < min_ele)
			{
				min_ele = arr[j];
				min_ele_index = j;
			}
		}
		int temp = arr[i-1];
		arr[i-1] = arr[min_ele_index];
		arr[min_ele_index] = temp;
	}
	
}

int main()
{
	int arr[] = {4, 5, 1, 10, 0};
	int N = sizeof(arr) / sizeof(arr[0]);
	
	for(int i = 0; i < N; i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<"\n";
	
	selection_sort(arr, N);
	
	for(int i = 0; i < N; i++)
	{
		cout<<arr[i]<<" ";
	}
	return 0;
}
