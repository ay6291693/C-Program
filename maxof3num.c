#include<stdio.h>

int max(int a,int b,int c)
{
	if(a>=b)
	{
		if(a>=c)
			return a;
		else
			return c;
	}
       else if(b>=a)
       {
    	        if(b>=c)
    		        return b;
		else
			return c;
	}
        else
        {
    	                return c;
	}
}


int main()
{
	int a,b,c;
	printf("Enter three Numbers : \n");
	scanf("%d%d%d",a,b,c);
	
	printf("The Max: %d",max(a,b,c));
	
	return 0;
}
