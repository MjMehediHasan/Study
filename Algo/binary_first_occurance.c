long long int first(long long int low, long long int high, long long int key) {
    long long int ans = -1;
    while (low <= high) {
        long long int mid = low + (high - low + 1) / 2;
        long long int midVal = a[mid];

        if (midVal < key) {
            low = mid + 1;
        } else if (midVal > key) {
            high = mid - 1;
        } else if (midVal == key) {
            ans = mid;
            high = mid - 1;
        }
    }
    return ans;
}
