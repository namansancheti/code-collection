#include<bits/stdc++.h>
using namespace std;

int main()
{
	string text = "ACAABAA";
	string pat = "AABA";
	int N = text.length(); // Length of the text
	int M = pat.length(); // Length of the pattern
	
	for(int i = 0; i <= N - M; i++) // Run N - M + 1 times
	{
		int j;
		for(j = 0; j < M; j++)
		{
			if(text[i + j] != pat[j])
				break;
		}
		
		if(j == M)
		{
			cout<<"Found the pattern at index"<<i<<"\n";
		}
	}
	
	return 0;
}
