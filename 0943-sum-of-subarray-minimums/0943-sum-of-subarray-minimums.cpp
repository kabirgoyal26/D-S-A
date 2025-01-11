class Solution {
public:
    vector<int>findnse(vector<int>& array)
    {
        int n=array.size();
        vector<int>nsearray(n,n);
        
        stack<int>st;

        for (int i=n-1;i>=0;i--)
        {
            while(!st.empty() && array[st.top()]>=array[i])
            {
                st.pop();
            }

            nsearray[i]=st.empty()?n:st.top();
            st.push(i);
        }
        return nsearray;

    }

    vector<int>findpse(vector<int>& array)
    {
        int n=array.size();
        vector<int>psearray(n,-1);
        
        stack<int>st;

        for (int i=0;i<n;i++)
        {
            while(!st.empty() && array[st.top()]>array[i])
            {
                st.pop();
            }

            psearray[i]=st.empty()?-1:st.top();
            st.push(i);
        }
        return psearray;

    }
    int sumSubarrayMins(vector<int>& arr) {

        long long  sum=0;
        int n=arr.size();
        int mod=1000000007;

        vector<int>nse=findnse(arr);
        vector<int>pse=findpse(arr);

        for (int i=0;i<n;i++)
        {
            long long  loc1=nse[i]-i;
            long long  loc2=i-pse[i];

            sum=(sum+((loc1*loc2%mod)*arr[i])%mod)%mod;
        }
        return (int)sum;
    }
};