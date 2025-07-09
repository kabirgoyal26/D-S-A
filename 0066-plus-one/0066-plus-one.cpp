class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {

        int carry=1;

        for (int i=digits.size()-1;i>=0;i--)
        {
            int temp=digits[i]+carry;

            if (temp>9)
            {
                carry=1;
                digits[i]=0;
            }
            else 
            {
                carry=0;
                digits[i]=temp;

            }
        }


        if (carry)
        {
            digits.insert(digits.begin(), carry);
        }
        return digits ;
    }
};