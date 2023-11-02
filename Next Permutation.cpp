vector<int> nextGreaterPermutation(vector<int> &A) {
    // Write your code here.

    int n=A.size();
    int ind=-1;

    //find breakpoint from left
    for(int i=n-2;i>=0;i--)
    {
        if(A[i]<A[i+1])
        {
            ind=i;
            break;
        }
    }

    if(ind==-1)
    {
        reverse(A.begin(),A.end());
        return A;
    }


    //find element which is next greater than breakpoint element
    for(int i=n-1; i>ind; i--)
    {
        if(A[i]>A[ind])
        {
            swap(A[i],A[ind]);
            break;
        }
    }


    //reversing the remaining element to get next greater permutation
    reverse(A.begin()+ind+1,A.end());

    return A;



}
