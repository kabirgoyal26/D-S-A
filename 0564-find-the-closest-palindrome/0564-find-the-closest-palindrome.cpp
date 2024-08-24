class Solution {
 public:
  // This function finds the nearest palindrome to the given number n.
  string nearestPalindromic(string n) {
    // Get the two closest palindromes to the given number.
    const auto& [prevPalindrome, nextPalindrome] = getPalindromes(n);
    
    // Return the closest palindrome, comparing the distances to n.
    return abs(prevPalindrome - stol(n)) <= abs(nextPalindrome - stol(n))
               ? to_string(prevPalindrome)
               : to_string(nextPalindrome);
  }

 private:
  // This function returns the two closest palindromes to the given number.
  pair<long, long> getPalindromes(const string& s) {
    const long num = stol(s);  // Convert the string to a long integer.
    const int n = s.length();  // Get the length of the string.
    pair<long, long> palindromes;  // A pair to hold the closest palindromes.

    // Create the first palindrome candidate by mirroring the first half of the number.
    const string half = s.substr(0, (n + 1) / 2);  // Get the first half (including middle digit if odd length).
    const string reversedHalf = reversed(half.substr(0, n / 2));  // Reverse the first half (excluding the middle digit if odd length).
    const long candidate = stol(half + reversedHalf);  // Form the palindrome candidate.

    // Check if the candidate palindrome is less than the given number.
    if (candidate < num)
      palindromes.first = candidate;  // Assign it as the previous palindrome.
    else {
      // Decrease the first half and create a new palindrome if the candidate is not valid.
      const string prevHalf = to_string(stol(half) - 1);  // Decrease the first half.
      const string reversedPrevHalf = reversed(prevHalf.substr(0, n / 2));  // Reverse the decreased first half.
      
      // Handle special cases for edge numbers.
      if (n % 2 == 0 && stol(prevHalf) == 0)
        palindromes.first = 9;  // Handle the case where the decreased half results in zero.
      else if (n % 2 == 0 && prevHalf == "9")
        palindromes.first = stol(prevHalf + '9' + reversedPrevHalf);  // Handle cases where all digits are 9.
      else
        palindromes.first = stol(prevHalf + reversedPrevHalf);  // Create the previous palindrome.
    }

    // Check if the candidate palindrome is more than the given number.
    if (candidate > num)
      palindromes.second = candidate;  // Assign it as the next palindrome.
    else {
      // Increase the first half and create a new palindrome if the candidate is not valid.
      const string nextHalf = to_string(stol(half) + 1);  // Increase the first half.
      const string reversedNextHalf = reversed(nextHalf.substr(0, n / 2));  // Reverse the increased first half.
      palindromes.second = stol(nextHalf + reversedNextHalf);  // Create the next palindrome.
    }

    return palindromes;  // Return the two closest palindromes.
  }

  // Helper function to reverse a string.
  string reversed(const string& s) {
    return {s.rbegin(), s.rend()};  // Create a reversed copy of the string.
  }
};
