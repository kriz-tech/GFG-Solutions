class Solution {
  public:
    vector<int> minMaxCandy(vector<int>& prices, int k) {
        // Code here
    sort(prices.begin(), prices.end());

    int n = prices.size();
    int minCost = 0, maxCost = 0;

    // Minimum cost: buy cheapest first
    int i = 0, j = n - 1;
    while (i <= j) {
        minCost += prices[i++];
        j -= k; // take k expensive ones for free
    }

    // Maximum cost: buy most expensive first
    i = 0; j = n - 1;
    while (i <= j) {
        maxCost += prices[j--];
        i += k; // take k cheapest ones for free
    }

    return {minCost, maxCost};
    }
};