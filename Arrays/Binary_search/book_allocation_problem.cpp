// Book Allocation Problem (GFG)
    // Binary search on minimum possible maximum pages
    // TC: O(n log n), SpaceComplexity: O(1)
class Solution {
public:
    

    bool canAllocate(vector<int>& books, int students, int limit) {
        int used = 1, pages = 0;

        for (int b : books) {
            if (b > limit) return false;

            if (pages + b <= limit) {
                pages += b;
            } else {
                used++;
                pages = b;
                if (used > students) return false;
            }
        }
        return true;
    }

    int allocateBooks(vector<int>& books, int students) {
        if (students > books.size()) return -1;

        int low = *max_element(books.begin(), books.end());
        int high = accumulate(books.begin(), books.end(), 0);
        int ans = -1;

        while (low <= high) {
            int mid = low + (high - low) / 2;

            if (canAllocate(books, students, mid)) {
                ans = mid;
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
        return ans;
    }
};
