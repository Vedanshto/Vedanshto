#include <bits/stdc++.h>
using namespace std;
int main()
{
   
    int a , b = INT_MIN, c = INT_MIN ;
    cin>>a>>b>>c;
   for(int x = 0 ; x < 5 ; x ++)
   {
    if(a > b && c > b)
    {
        b++;
    }
    else if(b > a && c > a)
    {
        a++;
    }
    else if(a > c && b > c)
    {
        c++;
    }
    else if(a==b) a++;
    else if(b==c) b++;
    else if(a==c) c++;
   }
  if(b != INT_MIN || c != INT_MIN) cout << a * b * c;
    return 0;
}