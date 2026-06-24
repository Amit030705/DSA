#include<bits/stdc++.h>
using namespace std;

void firstNegInt(int arr[], int n, int k, vector<int>& ans) {
    queue<int> q; // stores indices

    int i = 0, j = 0;

    while (j < n) {

        if (arr[j] < 0)
            q.push(j);

        if (j - i + 1 == k) {

            if (!q.empty())
                ans.push_back(arr[q.front()]);
            else
                ans.push_back(0);

            // Remove indices that are out of the current window
            if (!q.empty() && q.front() == i)
                q.pop();

            i++;
        }

        j++;
    }
}

int main() {
    int arr[] = {-8, 2, 3, -6, 10};
    int n = 5;

    int k;
    cout << "Enter k: ";
    cin >> k;

    vector<int> ans;

    firstNegInt(arr, n, k, ans);

    for (int x : ans) {
        cout << x << " ";
    }

    return 0;
}