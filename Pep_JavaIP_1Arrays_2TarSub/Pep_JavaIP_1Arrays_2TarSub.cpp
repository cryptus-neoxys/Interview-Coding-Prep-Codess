#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>
#define ll long int

using namespace std;
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    ll N, S, Sum = 0;
    cin >> N >> S;
    ll arr[N] = {0}, i = 0, j = 0;
    while (i < N) {
        cin >> arr[i];
        Sum += arr[i];
        while (Sum > S) {
            Sum -= arr[j++];
        }
        if (Sum == S) break;
        i++;
    }
    if (i == j) {
        if (arr[i] == S) cout << S;
        else cout << "Not found";
    } else {
        for (int k = j; k <= i; ++k) {
            cout << arr[k] << " ";
        }
    }
    return 0;
}