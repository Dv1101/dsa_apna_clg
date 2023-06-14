#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    int arr[6] = {6, 7, 4, 3, 5, 2};
    int maximum = arr[5];
    cout << maximum << " ";

    for (int i = 5; i >= 0; --i) {
        if (arr[i] > maximum) {
            cout << arr[i] << " ";
            maximum = arr[i];
        }
    }

    return 0;
}
