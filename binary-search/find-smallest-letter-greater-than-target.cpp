class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target)
    {
        int n = letters.size();
        int i = 0;
        int val = -1;
        while(i<n)
        {
            if(letters[i]>target)
            {
                val = 1;
                return letters[i];
            }
            i++;
        }
        if(val==-1)return letters[0];
        return '0';
    }
};