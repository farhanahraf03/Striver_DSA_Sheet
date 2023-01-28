void printTriangle(int n) {
        for(int i=1; i<=n; i++)
        {
            for(int j=1; j<=i; j++)
                cout<<(char)((j-1)+'A');
            cout<<endl;
        }
    }

/*
output -> n=5

A
AB
ABC
ABCD
ABCDE

*/
