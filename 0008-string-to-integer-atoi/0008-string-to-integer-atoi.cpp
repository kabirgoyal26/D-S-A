#include <limits.h>
#include <cctype> // for isdigit()

class Solution {
public:
    int myAtoi(string str) {
        int result = 0;   
        int i = 0;    
        int sign = 1;   

        // Skip leading whitespace
        while (i < str.size() && str[i] == ' ') {
            i++;
        }

        // Handle potential '+' or '-' sign
        if (i < str.size() && (str[i] == '-' || str[i] == '+')) {
            sign = (str[i] == '-') ? -1 : 1;
            i++;
        }

        // Convert the digits to an integer
        while (i < str.size() && isdigit(str[i])) {
            int digit = str[i] - '0';

            // Check for overflow/underflow
            if (result > INT_MAX / 10 || (result == INT_MAX / 10 && digit > INT_MAX % 10)) {
                return sign == 1 ? INT_MAX : INT_MIN;
            }

            result = result * 10 + digit;
            i++;
        }

        return result * sign;
    }
};
