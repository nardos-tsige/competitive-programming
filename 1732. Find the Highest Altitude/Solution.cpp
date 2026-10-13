class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int altitude = 0;
        int max_alt = 0;
        for (int g : gain){
            altitude += g;
            max_alt = max(max_alt, altitude);
        }
        return max_alt;
    }
};
