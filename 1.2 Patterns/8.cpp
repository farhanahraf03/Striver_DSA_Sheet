void printTriangle(int n) {
	    
	    for(int i=1; i<=n; i++)
	    {
	        
	        //left blanks
	        for(int j=1; j<i; j++)
	            cout<<" ";
	            
	        //stars
	        for(int j=1; j<=2*(n-i)+1; j++)
	            cout<<"*";
	            
	        //right blanks
	        for(int j=1; j<i; j++)
	            cout<<" ";
	            
	        cout<<endl;
	    }
	}

/*
output -> n=5

*********
 *******
  ***** 
   ***  
    * 

*/
