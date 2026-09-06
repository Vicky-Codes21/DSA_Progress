#include <bits/stdc++.h>
using namespace std;

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = 5;
    int target = 6;

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {

            if (arr[i] + arr[j] == target) {
                cout << i << " " << j;
                return 0;
            }
        }
    }

    return 0;
}