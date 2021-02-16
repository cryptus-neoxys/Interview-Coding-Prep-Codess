#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
#define ll long int

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    ll N;
    cin >> N;
    ll arr[N];
    for(int  i = 0; i < N; ++i) {
        cin >> arr[i];
    }
    bool even = true;
    for(int i = 0; i < N - 1; ++i) {
        if((arr[i] < arr[i+1]) != even) {
            int c = arr[i];
            arr[i] = arr[i + 1];
            arr[i + 1] = c;
        }
        even = !(even);
    }
    for(int  i = 0; i < N; ++i) {
        cout << arr[i] << " ";
    }
    return 0;
}