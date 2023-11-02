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


/*
You are given an array ‘a’ of ‘n’ integers. You have to return the lexicographically next to greater permutation.
Example:

Input: 'a' = [1, 3, 2]

Output: 2 1 3

Explanation: All the permutations of [1, 2, 3] are [[1, 2, 3], [1, 3, 2], [2, 1, 3], [2, 3, 1], [3, 1, 2], [3, 2, 1], ]. Hence the next greater permutation of [1, 3, 2] is [2, 1, 3].


*/
