#include<bits/stdc++.h>
#include<list>
using namespace std;

int main () {
    int max = 0;
    list <int> li {5,1,3,9,8,6};
    for (int i : li) {
        if (i > max) {
            max = i;
        }
    }
    cout << "Max Element in list is : " << max;
}