int firstIndex(int input[], int size, int x) {
  /* Don't write main().
     Don't read input, it is passed as function argument.
     Return output and don't print it.
     Taking input and printing output is handled automatically.
  */
    int n = size; 
    if(size==0){
        return -1;
    }
	else if(input[0]==x){
        return 0;
    }
    int ans = firstIndex(input+1,size-1,x);
    if(ans<0){
        return -1;
    }
    else{
        return ans+1;
    }
}


int lastIndex(int input[], int size, int x) {
  /* Don't write main().
     Don't read input, it is passed as function argument.
     Return output and don't print it.
     Taking input and printing output is handled automatically.
  */
    
    if (size < 0)
        return -1;
 
    // Return Statement
    if (input[size] == x) {
        return size;
    }
 
    // Recursive Call
    return lastIndex(input, size - 1, x);

}

