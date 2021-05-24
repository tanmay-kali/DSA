
int countZeros(int input) {
    // Write your code here
   if(input==0) //Just to handle the case when input=0 
		{
			return 1;
		}
		if(input<10)//this is the actual base case
		{
			return 0;			
		}
		else if(input%10==0)
		{
			return 1+countZeros(input/10);
		}
		return countZeros(input/10);

}


