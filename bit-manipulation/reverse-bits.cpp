class Solution {
public:
    int reverseBits(int n) 
    {
        string bit_str = std::bitset<32>(n).to_string();
        reverse(bit_str.begin(), bit_str.end());
        return std::bitset<32>(bit_str).to_ulong();
    }
};