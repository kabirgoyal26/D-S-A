class Solution {
public:
    int countSeniors(vector<string>& details) {
        int ans=0;

        for (auto m : details )
        {
            string k= m.substr(11,2);
            int x=stoi(k);

            if(x>60)
            {
                ans++;
            }
        }
        return ans ;
    }
};