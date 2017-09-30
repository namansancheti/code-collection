#include<bits/stdc++.h>
using namespace std;

void insertion_sort(int arr[], int N)
{
	for(int i = 1; i <= N-1; i++)
	{
		int j = i;
		while(j >= 0 && arr[j] < arr[j-1])
		{
			int temp = arr[j-1];
			arr[j-1] = arr[j];
			arr[j] = temp;
			j--;
		}
	}
	
}

int main()
{
	int arr[] = {1, 4, 10, 5, 6};
	int N = sizeof(arr) / sizeof(arr[0]);
	
	for(int i = 0; i < N; i++)
	{
		cout<<arr[i]<<" ";
	}
	
	cout<<"\n";
	
	insertion_sort(arr, N);
	
	for(int i = 0; i < N; i++)
	{
		cout<<arr[i]<<" ";
	}
	
	return 0;
}
