class Solution {
public:
// lamda function 
           static bool mycomprator(int &a,int &b)
            {
                 string s1=to_string(a);
                  string s2=to_string(b);
                   return (s1+s2)>(s2+s1);

            };


    string largestNumber(vector<int>& nums) {

        
       //using coustom sorting 
       sort(nums.begin(),nums.end(),mycomprator);

       if (nums[0]==0)
       {
        return "0";
       }

       string k="";

       for (int i=0;i<nums.size();i++)
       {
        k=k+to_string(nums[i]);
       }

       return k;

        
    }
};