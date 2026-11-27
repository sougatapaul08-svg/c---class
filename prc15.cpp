#include<iostream>
using namespace std;

int main() {
    int arr[100], beg, end, mid, search, i, n;

    cout << "How many numbers are in the array: ";
    cin >> n;

    cout << "Enter " << n << " numbers in ascending order --> ";
    for(i = 0; i < n; i++)
        cin >> arr[i];

    beg = 0;
    end = n - 1;

    cout << "Enter a number to search: ";
    cin >> search;

    while(beg <= end) {
        mid = (beg + end) / 2;

        if(arr[mid] == search) {
            cout << "\nItem found at position " << (mid + 1);
            return 0;
        }

        if(search > arr[mid])
            beg = mid + 1;
        else
            end = mid - 1;
    }

    cout << "\nSorry! " << search << " does not exist";
    return 0;
}