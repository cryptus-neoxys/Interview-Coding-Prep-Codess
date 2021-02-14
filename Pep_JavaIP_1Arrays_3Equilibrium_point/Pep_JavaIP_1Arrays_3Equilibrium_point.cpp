#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    long int N;
    cin >> N;
    // cout << N << endl;
    long int arr[N] = {0}, lSum[N] = {0}, rSum[N] = {0};
    for(int i = 0; i < N; ++i) {
        cin >> arr[i];
        // cout << arr[i] << "\t";
    }
    // cout << endl;
    lSum[0] = arr[0]; rSum[N-1] = arr[N-1];
    for(int i = 1; i < N; ++i) {
        lSum[i] = arr[i] + lSum[i-1];
        rSum[N-i-1] = arr[N-i-1] + rSum[N-i];
    }
    // for(int i = 0; i < N; ++i) {
    //     cout << "Arr: " << arr[i];
    //     cout << "\t lSum: " << lSum[i];
    //     cout << "\t rSum: " << rSum[i] << endl;
    // }
    long int ans = -1;
    for(int i = 0; i < N; ++i) {
        if(lSum[i] == rSum[i]) {
            ans = i;
            break;
        }
    }
    cout << ans;
    return 0;
}