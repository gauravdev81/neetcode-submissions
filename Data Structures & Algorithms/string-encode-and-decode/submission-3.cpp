class Solution {
public:

    string encode(vector<string>& strs) {
        string encoded_string = "";
        for(int i=0;i<strs.size();i++){
            encoded_string += to_string(strs[i].size());
            encoded_string += '#';
            encoded_string += strs[i];
        }
        return encoded_string;

    }

    vector<string> decode(string s) {
        vector<string> ans;
        int i=0;

        while(i< s.size()){
            //find '#'
            int j=i; 
            while(s[j]!='#'){
                j++;
            }

            // find length
            int len = stoi(s.substr(i,j-i)); 

            // skip '#' and move to start of the word
            j++;

            // extract word
            string word = s.substr(j,len);
            ans.push_back(word);

            i = j+len;

        }
        return ans;


    }
};
