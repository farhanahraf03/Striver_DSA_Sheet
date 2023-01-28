void printTriangle(int n) {
        
        for(int i=1; i<=n; i++)
        {
            int temp=n;
            for(int j=1; j<=i; j++)
                cout<<(char)((--temp)+'A')<<" ";
            cout<<endl;
        }
    }

/*
output -> n=5

E
E D
E D C
E D C B
E D C B A

*/
