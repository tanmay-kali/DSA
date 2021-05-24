double geometricSum(int k) {
    // Write your code here
    if(k==0){
        return 1;
    }
    double ans = pow(0.5,k)+ geometricSum(k-1);
    return ans;

}


