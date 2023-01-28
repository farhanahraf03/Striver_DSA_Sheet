void printTriangle(int n) {
        
        for(int i=1; i<=n; i++)
        {
            //left spaces
            for(int j=1; j<=n-i; j++)
                cout<<" ";
                
            //stars
            for(int j=1; j<2*i; j++)
                cout<<"*";
            
            //right spaces
            for(int j=1; j<=n-i; j++)
                cout<<" ";
                
            cout<<endl;
        }
    }

/*
output -> n=5

    *   
   ***  
  ***** 
 *******
*********

*/
