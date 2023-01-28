void printTriangle(int n) {
        for(int i=n; i>=1; i--)
	    {
	        for(int j=1; j<=i; j++)
	            cout<<(char)((j-1)+'A');
	        cout<<endl;
	    }
    }

/*
output -> n=5

ABCDE
ABCD
ABC
AB
A

*/
