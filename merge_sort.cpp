#include<bits/stdc++.h>
using namespace std;

void merge(int arr[], int low, int mid, int high)
{
	int N1 = mid - low + 1;
	int N2 = high - mid; // high - (mid + 1) + 1 ==> high - mid
	
	int L[N1];
	int R[N2];
	
	for(int i = 0; i < N1; i++)
	{
		L[i] = arr[low + i];
	}
	
	for(int j = 0 ; j < N2; j++)
	{
		R[j] = arr[mid + 1 + j];
	}
	
	int i = 0;
	int j = 0;
	int k = low;
	
	while(i < N1 && j < N2)
	{
		if(L[i] <= R[j])
		{
			arr[k] = L[i];
			i++;
		}
		
		else
		{
			arr[k] = R[j];
			j++;
		}	
		
		k++;
	}
	
	while(i<N1)
	{
		arr[k] = L[i];
		i++;
		k++;
	}
	
	while(j<N2)
	{
		arr[k] = R[j];
		j++;
		k++;
	}
}

void merge_sort(int arr[], int low, int high)
{
	if(low < high) // Equality not considered as we do not want to call merge_sort in that case
	{
		int mid = low + ( ( high - low) / 2);
		merge_sort(arr, low, mid);
		merge_sort(arr, mid + 1, high);
		merge(arr, low, mid, high);
	}
	
}

int main()
{
	int arr[] = {10, 5, 1, 2, 4};
	int N = sizeof(arr) / sizeof(arr[0]);
	for(int i = 0; i < N; i++)
	{
		cout<<arr[i]<<" ";
	}
	
	cout<<"\n";
	
	merge_sort(arr, 0, N - 1);
	
	for(int i = 0; i < N; i++)
	{
		cout<<arr[i]<<" ";
	}
	
}
