class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        if (n == 0) return 0;

        // ⚠️ This works only if your compiler allows VLAs (e.g. GCC).
        int prev[n];
        prev[0] = -1;
        int max = height[0];
        for(int i=1; i<n; i++){
            prev[i] = max;
            if(max<height[i]) leftmax = height[i];
        }
        //Next Greatest
        int next[n];
        next[n-1] = -1;
        int rightmax = height[n-1];
        for(int i=n-2; i>=0; i--){
            next[i] = rightmax;
            if(max<height[i]) rightmax = height[i];
        }
        // Minimum array
        for(int i=0; i<n-1; i++){
            prev[i] = min(prev[i],next[i]);
        }
        int water = 0;
        for(int i=0; i<n-1; i++){
            if(height[i]<prev[i])
            water+=(prev[i]-height[i]);
        } return water;
    }
};