// #include <stdio.h>
// #include <stdbool.h>
// #include <string.h>

// bool isPalindrome(long long int x) {
//     if (x < 0) return false;

//     char s[20];
//     sprintf(s, "%lld", x);

//     int len = strlen(s);
//     int left = 0, right = len - 1;

//     while (left < right) {
//         if (s[left] != s[right]) return false;
//         left++;
//         right--;
//     }
//     return true;
// }

#include <stdbool.h>

bool isPalindrome(long long int x) {
    if (x < 0) return false;

    long long int original = x;
    long long int reversed = 0;

    while (x > 0) {
        reversed = reversed * 10 + x % 10;
        x /= 10;
    }

    return original == reversed;
}