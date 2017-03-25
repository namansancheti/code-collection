#include<bits/stdc++.h>
using namespace std;

#define d 256

void rabin_karp(char pat[], char text[], int q)
{
	int M = strlen(pat);
	int N = strlen(text);
	int h = 1;
	int p = 0;
	int t = 0;
	int j;
	int i;
	
	for(i = 0; i < M - 1; i++)
	{
		h = (h * d) % q;
	}
	
	for(i = 0; i < M; i++)
	{
		p = (d * p + pat[i]) % q;
		t = (d * t + text[i]) % q;
	}
	
	for(i = 0; i <= N - M; i++)
	{
		if(p == t)
		{
			for(j = 0; j < M; j++)
			{
				if(text[i + j] != pat[j])
					break;
			}
			
			if(j == M)
				cout<<"\nPattern found at index"<<i;
		}
	
	
		if(i < N-M)
		{
			t = (d * (t - text[i] * h) + text[i + M]) % q;
			if(t < 0)
				t = t + q;
		}
	}
		
}

int main()
{
	char text[] = "GEEKS FOR GEEKS";
	char pat[] = "GEEK";
	int q = 101; // Prime number
	rabin_karp(pat, text, q);
	return 0;
}

