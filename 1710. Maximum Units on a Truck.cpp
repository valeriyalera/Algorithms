class Solution {
public:
    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
        
        sort(boxTypes.begin(), boxTypes.end(), [](const vector<int>& a, const vector<int>& b) {
            return a[1] > b[1];
        });
        
        int totalUnits = 0;
        
        for (const auto& box : boxTypes) {
            int count = box[0];
            int units = box[1];
            
            if (truckSize >= count) {
                totalUnits += count * units;
                truckSize -= count; 
            } 
            
            else {
                totalUnits += truckSize * units;
                break;
            }
        }
        
        return totalUnits;
    }
};
