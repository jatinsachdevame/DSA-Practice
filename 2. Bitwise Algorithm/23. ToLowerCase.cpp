class Solution {
public:
    string toLowerCase(string str) {
        
        for(int i=0;i<str.length();i++)
        {
            if((char(str[i])>=65) && (char(str[i])<=90))
            str[i]^=1<<5;
        }
        return str;
    }
};
