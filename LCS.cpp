#include<bits/stdc++.h>
using namespace std;

int lcs(string x, string y)
{
	int m = x.length();
	int n = y.length();
	
	int LCS[m+1][n+1];
	
	for(int i = 0; i <= m; i++)
	{
		for(int j = 0; j <= n; j++)
		{
			if(i == 0 || j == 0)
			{
				LCS[i][j] = 0;
			}
			
			else if (x[i-1] == y[j-1])
				LCS[i][j] = LCS[i-1][j-1] + 1;
				
			else 
				LCS[i][j] = max(LCS[i-1][j], LCS[i][j-1]);
		}
	}
	
	return LCS[m][n];
}

int main() 
{
	string x = "AGGTAB";
	string y = "GXTXAYB";
	//int m = strlen(x);
	//int n = strlen(y);
	cout<<lcs(x,y);
	return 0;
}
