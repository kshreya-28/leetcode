class Solution {
public:
    bool canPlaceFlowers(vector <int>& flowerbed, int n) {
        // If 0 flowers need to be placed, it's always true
        if (n == 0) return true;
        
        // Handle size 1 separately
        if (flowerbed.size() == 1) {
            if (n == 1 && flowerbed[0] == 0) return true;
            return false;
        }
    
        for (int i = 0; i < flowerbed.size(); i++) {
            if (i == 0) {
                if (flowerbed[i] == 0 && flowerbed[i+1] == 0) {
                    n--; 
                    flowerbed[0] = 1;
                }
            }
            else if (i == flowerbed.size() - 1) {
                if (flowerbed[i-1] == 0 && flowerbed[i] == 0) {
                    n--;
                    flowerbed[i] = 1;
                }
            }
            else { 
                if (flowerbed[i-1] == 0 && flowerbed[i] == 0 && flowerbed[i+1] == 0) {
                    n--; 
                    flowerbed[i] = 1;
                }
            }
            
            // If we've successfully placed all flowers, return true early
            if (n <= 0) {
                return true;
            }
        }
        
        return false;
    }
};