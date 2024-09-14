class Solution {
public:
    int smallestEvenMultiple(int n) {

        for (int i=2;i<INT_MAX;i=i+2)
        {
            if (i%2==0 &&  i%n==0)
            {
                return i;
            }
        }
        return 0;
    }
};