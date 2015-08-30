#include<cstdlib>
#include<cstdio>
using namespace std;
double count()
{
	   char a[10] ;
	     scanf("%s",a);
		    switch(a[0])
				   {
					   case '*': return count()*count() ;

					   case '-': return count()-count() ;

					   case '+': return count()+count() ;

					   case '/': return count()/count() ;

					   default: return atof(a);

								   }
}
int main()
{
	  double sum = count();
	    printf("%f",sum);
		    return 0 ;
}

