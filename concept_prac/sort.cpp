   #include<iostream>
    #include<cstdio>
    using namespace std;
    #define N 5
    int a[N];//有序数组
    int main ( ) {
    	int i, k, x;
    	printf("Please input %d numbers:\n",N);   
    	for (i=0; i<N; i++) {
    		scanf ("%d", &x);
    		for ( k=i; k>0; k-- ) 
			{	       
    			if ( a[k-1] > x )    
    				a[k]=a[k-1];         
    			else      
				break; 
    		}
    		a[k] = x;  
    	}
    
    	for (i=0; i<N; i++)
    		printf("%d ", a[i]);
    	return 0;
    }
