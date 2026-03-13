
class Solution {
public:
    long long minNumberOfSeconds(int mountainHeight, vector<int>& workerTimes) {
        long long left = 1, right = 1e18, ans = right;

        auto canDo = [&](long long T) {
            long long total = 0;
            for (long long t : workerTimes) {
                // Solve x(x+1)/2 * t <= T
                long long low = 0, high = 1e9, best = 0;
                while (low <= high) {
                    long long mid = (low + high) / 2;
                    __int128 cost = (__int128)mid * (mid + 1) / 2 * t;
                    if (cost <= T) {
                        best = mid;
                        low = mid + 1;
                    } else {
                        high = mid - 1;
                    }
                }
                total += best;
                if (total >= mountainHeight) return true;
            }
            return total >= mountainHeight;
        };

        while (left <= right) {
            long long mid = left + (right - left) / 2;
            if (canDo(mid)) {
                ans = mid;
                right = mid - 1;
            } else {
                left = mid + 1;
            }
        }
        return ans;
    }
};
