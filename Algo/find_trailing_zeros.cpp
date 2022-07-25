ll tZeros(ll n) {
    ll count = 0;
    while (n > 0) {
        count += n / 5;
        n /= 5;
    }
    return count;
}


// 2nd method

int findTrailingZeros(int n)
{
    if (n < 0) // Negative Number Edge Case
        return -1;
 
    // Initialize result
    int count = 0;
 
    // Keep dividing n by powers of
    // 5 and update count
    for (int i = 5; n / i >= 1; i *= 5)
        count += n / i;
 
    return count;
}
