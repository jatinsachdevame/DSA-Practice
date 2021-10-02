class Solution {
public:
    vector<int> sortByBits(vector<int>& arr) {
       vector<pair<int,int>> result;
        for(int i=0;i<arr.size();i++)
        {
            int count=0;
            while(arr[i])
            {
                if(arr[i]&1)
                {
                    count++;
                    arr[i]<<=1;
                }
            }
            result.push_back(make_pair(count,arr[i]));
        }
        sort(result.begin(),result.end());
        vector<int> result2;
         int n = sizeof(result)/sizeof(result[0]); 
        for(int i=0;i<n;i++)
        {
            result2.push_back(result[i].first);            
        }
        return result2;
    }
};
