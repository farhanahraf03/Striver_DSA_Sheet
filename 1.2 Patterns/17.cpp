void printTriangle(int n) {
        for(int i=1; i<=n; i++)
        {
            //left spaces
            for(int j=1; j<=n-i; j++)
                cout<<" ";
                
            //left char
            for(int j=1; j<=i; j++)
                cout<<(char)((j-1)+'A');
                
            //right char
            for(int j=i-1; j>=1; j--)
                cout<<(char)((j-1)+'A');
            
            //right spaces
            for(int j=1; j<=n-i; j++)
                cout<<"";
                
            cout<<endl;
        }
    }

/*
output -> n=5

   A
  ABA
 ABCBA
ABCDCBA

*/
