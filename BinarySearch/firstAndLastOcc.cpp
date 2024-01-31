vector<int> find(int arr[], int n , int x )
    {
        vector<int> ans ;
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

    ans.push_back(firstOcc);

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

    ans.push_back(lastOcc);

    return ans;
    }