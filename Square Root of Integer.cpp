int Solution::sqrt(int x) {
    if(x==0)
    return x;
    int low=1;
    int high=x;
    while(low<=high)
    {
        long mid=low+(high-low)/2;
        long sqr=mid*mid;
        if(sqr==x)
        return mid;
        else if(sqr>x)
        high=(int)mid-1;
        else
        low=(int)mid+1;
        
    }
    return high;
}

