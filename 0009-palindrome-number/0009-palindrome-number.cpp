class Solution {
public:
bool isPalindrome(int x) {
    if (x < 0) return false;
    int n = 0, x2 = x;
    while (x2 > 0) { x2 /= 10; n++; }

    for (int i = 0; i < n / 2; i++) {
        int left  = (x / (int)pow(10, n - 1 - i)) % 10;
        int right = (x / (int)pow(10, i)) % 10;
        if (left != right) return false;
    }
    return true;
}
};