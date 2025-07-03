#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Item {
    int value;
    int weight;
};

class Solution {
public:
    static bool comp(Item a, Item b) {
        double r1 = (double)a.value / a.weight;
        double r2 = (double)b.value / b.weight;
        return r1 > r2; // higher value-to-weight first
    }

    double fractionalKnapsack(vector<int>& val, vector<int>& wt, int M) {
        int n = val.size();
        vector<Item> items(n);

        // Fill items vector
        for (int i = 0; i < n; i++) {
            items[i].value = val[i];
            items[i].weight = wt[i];
        }

        // Sort items by value/weight ratio
        sort(items.begin(), items.end(), comp);

        double maxProfit = 0.0;

        for (int i = 0; i < n; i++) {
            if (items[i].weight <= M) {
                maxProfit += items[i].value;
                M -= items[i].weight;
            } else {
                // Take fractional part
                double fraction = (double)M / items[i].weight;
                maxProfit += items[i].value * fraction;
                break; // bag is full
            }
        }

        return maxProfit;
    }
};
