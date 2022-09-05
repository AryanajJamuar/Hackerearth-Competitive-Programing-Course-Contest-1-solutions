#include <iostream>
#include <cmath> 
#include <algorithm>
#include <vector>
using namespace std ;
typedef long long int ll ;
int main()
{ll t  ;
scanf("%lld",&t) ;
while(t--)
{ ll n ;
  scanf("%lld",&n) ;
  ll a[n] ;
  for(int i=0;i<n;i++)
  scanf("%lld",&a[i]) ;
  ll mul = a[0] ;
  for(int i=1;i<n;i++)
  mul*=a[i] ;
  if(mul%10==2 || mul%10==3 || mul%10==5)
     printf("YES\n") ;
	 else
	 printf("NO\n") ;
  
}
  
    return 0;
}
