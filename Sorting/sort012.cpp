#include<bits/stdc++.h>
using namespace std;

void swap(int &a, int &b);

void sort012(int arr[], int arr_size)
{
	int low = 0;
	int mid = 0;
	int high = arr_size - 1;
	
	while(mid <= high) {
		switch(arr[mid]) {
			case 0:
				swap(arr[low], arr[mid]);
				low++;
				mid++;
				break;
			case 1:
				mid++;
				break;
			case 2:
				swap(arr[mid], arr[high]);
				high--;
				break;
		}	
	}
}

void swap(int &a, int &b)
{
	int temp = a;
	a = b;
	b = temp;
}

int main() {
	int arr [] = {0, 1, 0, 0, 2, 2, 1, 1};
	int arr_size = sizeof(arr) / sizeof(arr[0]);
	sort012(arr, arr_size);
	cout<<"The sorted array is ";
	for(int i = 0; i < arr_size; i++)
		cout<<arr[i]<<" ";
	return 0;
}
