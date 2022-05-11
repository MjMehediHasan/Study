ll lower_bound(vector<ll> &arr, ll X)
{
    ll mid;
    ll low = 0;
    ll high = arr.size() - 1;

    if (arr[high] < X) return -2;
    if (arr[low] >= X) return 0;

    while (low <= high) {
        mid = low + (high - low) / 2;
        if (arr[mid] == X) return mid;
        if (X < arr[mid]) {
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }
    if ((low < arr.size() - 1) && arr[low] < X) {
       low++;
    }
    return low;
}

/*
* X is target value
* Must pass the vector/array as reference... otherwise code will create new array on the heap and you'll get TLE
*/
