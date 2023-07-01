// Sqrt(x) te-66%
class Solution {
public:
    int mySqrt(int x) {
        if (x == 0)
            return 0;

        int left = 1;
        int right = x;
        int result;

        while (left <= right) {
            int mid = left + (right - left) / 2;

            if (mid == x / mid) {
                return mid;
            } else if (mid < x / mid) {
                left = mid + 1;
                result = mid;  // Store the potential result
            } else {
                right = mid - 1;
            }
        }

        return result;
    }
};
