class Solution {
public:
    int x;
    bool output;
    bool isAnagram(string s, string t) {
        std::sort(s.begin(),s.end());
        std::sort(t.begin(),t.end());
        x= t.compare(s);
        if (x == 0)
           output = true;
        else output = false;
           return output; 
    }
};