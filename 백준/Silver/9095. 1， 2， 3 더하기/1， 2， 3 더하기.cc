#include<iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    int arr[20] = {};
    arr[1] = 1; arr[2] = 2; arr[3] = 4;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        for(int i = 4; i <= n; i++) {
            arr[i] = arr[i-1] + arr[i-2] + arr[i-3];
        }
        cout << arr[n] << endl;
    }
}