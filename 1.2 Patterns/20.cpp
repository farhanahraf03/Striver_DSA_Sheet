        for(int i=1; i<n; i++)
        {
            
            //left star
            for(int j=1; j<=i; j++)
                cout<<"*";
                
            //blank
            for(int j=1; j<=2*(n-i); j++)
                cout<<" ";
                
            //right star
            for(int j=1; j<=i; j++)
                cout<<"*";
                
            cout<<endl;
        }        

        for(int i=1; i<=n; i++)
        {
            //left star
            for(int j=1; j<=n-i+1; j++)
                cout<<"*";
            
            //blank
            for(int j=1; j<=2*(i-1); j++)
                cout<<" ";
                
            //right star
            for(int j=1; j<=n-i+1; j++)
                cout<<"*";
                
            cout<<endl;
            
        }
/*
output -> n=5

*        *
**      **
***    ***
****  ****
**********
****  ****
***    ***
**      **
*        *

*/
