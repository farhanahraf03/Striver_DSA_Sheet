void printTriangle(int n) {
        // code here
        int k=1;
        for(int i=1; i<=n; i++)
        {
            for(int j=1; j<=i; j++)
            {
                cout<<k<<" ";
                k=!k;
            }
            cout<<endl;
        }
    }

/*
output -> n=5

1
0 1
0 1 0
1 0 1 0
1 0 1 0 1

*/
