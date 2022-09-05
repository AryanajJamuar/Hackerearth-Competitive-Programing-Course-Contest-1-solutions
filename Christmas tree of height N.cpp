#include <iostream>
#include <cmath> 
#include <algorithm>
#include <vector>
using namespace std ;
typedef long long int ll ;
void printPascal(long long n)

{

for (long long i=1;i<=n;i++)

{

long long c=1;

for (long long j=1;j<=i;j++)

{

cout<<c<<" ";

c=c*(i-j)/j;

}

cout<<"\n";

}

}
int main()
{ll t  ;
scanf("%lld",&t) ;
while(t--)
{ 
  ll n ;
  cin>>n ;
  printPascal(n) ;
  
}
  
    return 0;
}
