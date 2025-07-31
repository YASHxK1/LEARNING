class Solution {
public:
    int romanToInt(string s) {
        int value=0;
        for (int i = 0; i < s.length(); i++)
        {
            switch (s[i])
            {
            case 'I': value = value + 1; break;
            case 'V': value = value + 5; break;
            case 'X': value = value + 10; break;
            case 'L': value = value + 50; break;
            case 'C': value = value + 100; break;
            case 'D': value = value + 500; break;
            case 'M': value = value + 1000; break;
            }
        }
        return value;
    }
};