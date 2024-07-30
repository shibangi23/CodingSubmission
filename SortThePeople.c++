class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        map<int,string> mpp;
        int n = names.size();
        for(int i=0;i<n;i++){
            mpp[heights[i]] = names[i] ;
        }

        vector<string> temp;

        for(auto i : mpp){
            temp.push_back(i.second);
        }

        reverse(temp.begin(),temp.end());

        names = temp;
        return names;
    }
};