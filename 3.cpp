#include<bits/stdc++.h>

using namespace std;

int divisibleby3 (int arr[], int size) {
    int flag = 0;
    for (int i=0;i<size;i++) {
        if (arr[i]%3 == 0) {
            flag++;
        }
        else if (arr[i] < 0) {
            cout << "Invalid";
            exit(0);
        }
        else
            continue;
    }
    return flag;
}

int main () {
    int size, count;
    int arr[] = {5,23,2,-200};
    size = sizeof(arr)/4;
    if (size<0) {
        cout << "Invalid!";
        exit(0);
    }

    count = divisibleby3(arr, size);
    cout << "No of element divisible by 3 are " << count;
}