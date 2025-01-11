class Solution {
public:

     vector<int>findnsearray(vector<int>& arr1)
     {
        int n=arr1.size();
        vector<int>k(n,n);
        stack<int>st;

        for (int i=n-1;i>=0;i--)
        {
            while (!st.empty() && arr1[st.top()]>=arr1[i])
            {
                st.pop();
            }

            k[i]=st.empty()?n:st.top();
            st.push(i);
        }
        return k;

     }
     vector<int>findngearray(vector<int>& arr1)
     {
        int n=arr1.size();
        vector<int>k(n,n);
        stack<int>st;

        for (int i=n-1;i>=0;i--)
        {
            while (!st.empty() && arr1[st.top()]<=arr1[i])
            {
                st.pop();
            }

            k[i]=st.empty()?n:st.top();
            st.push(i);
        }
        return k;

     }
     vector<int>findpsearray(vector<int>& arr1)
     {
        int n=arr1.size();
        vector<int>k(n,-1);
        stack<int>st;

        for (int i=0;i<n;i++)
        {
            while (!st.empty() && arr1[st.top()]>arr1[i])
            {
                st.pop();
            }

            k[i]=st.empty()?-1:st.top();
            st.push(i);
        }
        return k;

     }
     vector<int>findpgearray(vector<int>& arr1)
     {
        int n=arr1.size();
        vector<int>k(n,-1);
        stack<int>st;

        for (int i=0;i<n;i++)
        {
            while (!st.empty() && arr1[st.top()]<arr1[i])
            {
                st.pop();
            }

            k[i]=st.empty()?-1:st.top();
            st.push(i);
        }
        return k;

     }



    long long findsubarraymin(vector<int>& arr)
    { 
        long long  ans =0;
        int n=arr.size();

        vector<int>nsearray=findnsearray(arr);
        vector<int>psearray=findpsearray(arr);


        for (int i=0;i<n;i++)
        {
            long long  nse=nsearray[i];
            long long  pse=psearray[i];

            long long   loc1=nse-i;
            long long  loc2=i-pse;

            ans = ans + (loc1 * loc2 * arr[i] );

        }
        return ans ;


    }

    long long findsubarraymax(vector<int>& arr)
    { 
        long long  ans =0;
        int n=arr.size();

        vector<int>ngearray=findngearray(arr);
        vector<int>pgearray=findpgearray(arr);

        for (int i=0;i<n;i++)
        {
            long long  nge=ngearray[i];
            long long  pge=pgearray[i];

            long long   loc1=nge-i;
            long long  loc2=i-pge;

            ans = ans + (loc1 * loc2 * arr[i] );

        }
        return ans ;


    }


    long long subArrayRanges(vector<int>& nums) {

        

        long long  max=findsubarraymax(nums);
        long long  min=findsubarraymin(nums);


        return max-min;

        

        
    }
};