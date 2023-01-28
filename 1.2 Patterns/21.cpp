void printSquare(int n) {
        // code here
        
        for(int i=1; i<=n; i++)
        {
            
            for(int j=1; j<=n; j++)
            {
                if(j==1 || j==n || i==1 || i==n)cout<<"*";
                else cout<<" ";
            }
            
            cout<<endl;
            
        }
    }

/*
output -> n=4

****
*  *
*  *
****

*/
