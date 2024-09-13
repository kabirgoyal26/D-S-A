class Solution {
public:
    vector<int> xorQueries(vector<int>& arr, vector<vector<int>>& queries) {


        int n=arr.size();
        vector<int>store_commulative_xor(n,0);

        store_commulative_xor[0]=arr[0];
        for(int i=1;i<n;i++)
        {
            store_commulative_xor[i]=store_commulative_xor[i-1]^arr[i];
        }

        vector<int>ans;

        for (vector<int>& query : queries )
        {
            int left=query[0];
            int right=query[1];
            

            int m=store_commulative_xor[right]^(left==0?0:store_commulative_xor[left-1]);
            ans.push_back(m);

            
        }
    return ans ;




// brute force method 
//     vector<int>ans;
//     for (vector<int>& query : queries )
//     {
//         int left=query[0];
//         int right=query[1];
//         int x=0;

//         for (int i = left;i<=right;i++)
//         {
//             x=x^arr[i];
//         }

//         ans.push_back(x);
//     }
//     return ans ;



        
    }
};