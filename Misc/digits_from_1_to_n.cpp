ll totalDigits(ll n) // count total number of digits from 1 to n
{
    ll digits = 0;
    for (ll i = 1; i <= n; i *= 10)
        digits += (n - i + 1);
    return digits;
}
