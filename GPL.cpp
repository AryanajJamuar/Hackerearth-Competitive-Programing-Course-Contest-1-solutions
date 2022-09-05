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
  string s ;
  cin>>s ;
  
  
  ll ans = 0 ;
  for(ll i=0;i<n;i++)
  {
	  ans*=2 ;
	  ans+=(s[i]-'0') ;
  }
  printf("%lld\n",ans) ;
  
}
  
    return 0;
}
