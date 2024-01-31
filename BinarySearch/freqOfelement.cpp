class Solution{
public:	
	/* if x is present in arr[] then returns the count
		of occurrences of x, otherwise returns 0. */
	int count(int arr[], int n, int x) {
        int low = 0;
        int high = n - 1;
        int firstOcc = -1;

    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (arr[mid] == x) {
            firstOcc = mid;
            high = mid - 1;
        } else if (arr[mid] > x) {
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }

    // Find last occurrence
    int l = 0;
    int h = n - 1;
    int lastOcc = -1;

    while (l <= h) {
        int m = l + (h - l) / 2;
        if (arr[m] == x) {
            lastOcc = m;
            l = m + 1;
        } else if (arr[m] > x) {
            h = m - 1;
        } else {
            l = m + 1;
        }
    }
    if(firstOcc == -1 || lastOcc == -1)
        return 0;
    int ans = lastOcc - firstOcc + 1;
    return ans;
	}
};