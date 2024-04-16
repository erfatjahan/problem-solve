
#include <iostream>
#include <vector>

using namespace std;

bool isPalindrome(int n) {
    int original = n;
    int reverse = 0;

    while (n > 0) {
        reverse = reverse * 10 + n % 10;
        n /= 10;
    }

    return original == reverse;
}

int countPalindromePairs(vector<int>& arr) {
    int count = 0;
    int n = arr.size();

    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            int xorResult = arr[i] ^ arr[j];
            if (isPalindrome(xorResult)) {
                count++;
            }
        }
    }

    return count;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        cout << countPalindromePairs(arr) << endl;
    }

    return 0;
}
