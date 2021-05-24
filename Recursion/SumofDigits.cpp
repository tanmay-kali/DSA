int sumOfDigits(int n) {
    // Write your code here
    if(n<10){
        return n;
    }
    
    int ans = (n%10)+sumOfDigits(n/10);
    return ans;

}


