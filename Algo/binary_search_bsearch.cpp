// Ref : https://www.geeksforgeeks.org/variants-of-binary-search/

// Normal BSearch

int64_t bSearch(int64_t a[], int64_t strt, int64_t fns, int64_t val) {
    if (fns >= strt) {
        int64_t mid = strt+(fns-1)/2;
        if (a[mid] == val) return mid;
        if (a[mid] > val)
            return bSearch(a, strt, mid-1, val);
        return bSearch(a, mid+1, fns, val);
    }
    return (-1);
}

// Bsearch last occurance

int last(int low, int high, int key)
{
    int ans = -1;
 
    while (low <= high) {
        int mid = low + (high - low + 1) / 2;
        int midVal = a[mid];
 
        if (midVal < key) {
 
            // if mid is less than key, then all elements
            // in range [low, mid - 1] are also less
            // so we now search in [mid + 1, high]
            low = mid + 1;
        }
        else if (midVal > key) {
 
            // if mid is greater than key, then all
            // elements in range [mid + 1, high] are
            // also greater so we now search in
            // [low, mid - 1]
            high = mid - 1;
        }
        else if (midVal == key) {
 
            // if mid is equal to key, we note down
            // the last found index then we search
            // for more in right side of mid
            // so we now search in [mid + 1, high]
            ans = mid;
            low = mid + 1;
        }
    }
 
    return ans;
}
