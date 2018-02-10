int fib(int n)
{
    if(n <= 1)
        return n;
 
    return fib(n-1) + fib(n-2);
}

 
int gcd(int a, int b) {
    if(b==0)
        return a;
    return gcd(b, a%b);
}

int pow(int b, int p) {         // O(log(p) base 2)
    if(p == 0)  return 1;
    int sq = pow(b, p/2);
    sq = sq*sq;
 
    if(p%2 == 1)
        sq = sq*b;
 
    return sq;
}

ll sumPows(ll a, int k) { // Return a^1+a^1+a^2+.....a^k    in O(k)
    if (k == 0)
        return 0;
 
    if (k % 2 == 1)
        return a * (1 + sumPows(a, k - 1));
 
    ll half = sumPows(a, k / 2);
    return half * (1 + half - sumPows(a, k / 2 -1) );
}


int pwrmod(int x, unsigned int y, int p)
{
    int res = 1;      
 
    x = x % p;  
               
 
    while (y > 0)
    {
       
        if (y & 1)
            res = (res*x) % p;
 
       
        y = y>>1; 
        x = (x*x) % p;  
    }
    return res;
}