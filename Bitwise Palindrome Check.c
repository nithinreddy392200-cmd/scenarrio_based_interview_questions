#include <stdio.h>

int isPalindrome(int n) {
    if (n < 0) return 0;
    int original = n, reversed = 0;
    while (n > 0) {
        reversed = reversed * 10 + n % 10;
        n /= 10;
    }
    return original == reversed;
}

int main() {
    int num = 121;
    printf("%d is %s palindrome\n", num, isPalindrome(num) ? "" : "not a ");
    return 0;
}
