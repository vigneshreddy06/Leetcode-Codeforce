class Solution {
public:
    static vector<int> frequencySort(vector<int>& nums) {
        constexpr int8_t MINV = -100, MAXV = 100;
        constexpr uint8_t FSIZE = MAXV - MINV + 1u;
        uint16_t freqsv[FSIZE];
        iota(freqsv, freqsv + FSIZE, 100u << 8);
        for (const int v : nums)
            freqsv[v-MINV] -= 1u << 8;
        sort(freqsv, freqsv + FSIZE, greater());
        nums.clear();
        for (const uint16_t fv : freqsv)
            nums.insert(nums.end(), 100u - (fv >> 8), (fv & 0xFF) + MINV);
        return move(nums);
    }
};