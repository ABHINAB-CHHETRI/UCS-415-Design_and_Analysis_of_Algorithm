#include <iostream>
using namespace std;

int knapSack(int W, int wt[], int val[], int n) {
    if (n == 0 || W == 0)
        return 0;
    if (wt[n - 1] > W)
        return knapSack(W, wt, val, n - 1);
    return max(knapSack(W, wt, val, n - 1), 
               val[n - 1] + knapSack(W - wt[n - 1], wt, val, n - 1));
}

int main() {
    int profit[] = {60, 100, 120, 100};
    int weight[] = {10, 20, 30, 12};
    int W = 60;
    int n = sizeof(profit) / sizeof(profit[0]);

    cout << knapSack(W, weight, profit, n) << endl;
    return 0;
}
