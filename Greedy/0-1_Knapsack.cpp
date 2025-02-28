// C++ program for the above approach
//Time Complexity: O(N * W). As redundant calculations of states are avoided
//Auxiliary Space: O(W) As we are using a 1-D array instead of a 2-D array
#include <bits/stdc++.h>
using namespace std;

// Function to find the maximum profit
int knapSack(int W, int wt[], int val[], int n)
{
	// Making and initializing dp array
	int dp[W + 1];
	memset(dp, 0, sizeof(dp));

	for (int i = 1; i < n + 1; i++) {
		for (int w = W; w >= 0; w--) {

			if (wt[i - 1] <= w)
				
				// Finding the maximum value
				dp[w] = max(dp[w],
							dp[w - wt[i - 1]] + val[i - 1]);
		}
	}
	// Returning the maximum value of knapsack
	return dp[W];
}

// Driver code
int main()
{
	int profit[] = { 60, 100, 120 };
	int weight[] = { 10, 20, 30 };
	int W = 50;
	int n = sizeof(profit) / sizeof(profit[0]);
	cout << knapSack(W, weight, profit, n);
	return 0;
}
