//O(n) time O(1) space
vector<string> Solution::fizzBuzz(int A) {
           
   vector<string> arr;
    for(int i=1;i<=A;i++)
    {
        if(i%3==0&&i%5==0)
        arr.push_back("FizzBuzz");
        else if(i%3==0)
        arr.push_back("Fizz");
        else if(i%5==0)
        arr.push_back("Buzz");
        else
        arr.push_back(to_string(i));
    }
    return arr;
}
