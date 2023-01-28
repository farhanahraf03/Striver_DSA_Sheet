void printTriangle(int n) {
        // code here
        
        for(int i=1; i<=n; i++)
        {
            
            //left number
            for(int j=1; j<=i; j++)
                cout<<j<<" ";
                
            //blanks
            for(int j=1; j<=2*(n-i); j++)
                cout<<"  ";
                
            //right number
            for(int j=i; j>=1; j--)
                cout<<j<<" ";
                
            cout<<endl;
        }
    }

/*
output -> n=5

1                 1
1 2             2 1
1 2 3         3 2 1
1 2 3 4     4 3 2 1
1 2 3 4 5 5 4 3 2 1

*/
