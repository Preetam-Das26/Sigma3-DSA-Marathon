#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define MOD 1000000007



int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);      
    int t=1;



  
    
    do    
    {
      string str;
      cout<<"Enter the string"<<endl;
      cin>>str;
      sort(str.begin(),str.end());
      char x;
      cout<<"Enter the character to be searched"<<endl;
      cin>>x;
      int l=0;
      int h=str.length()-1;
      int mid=(l+h)/2;

      while(l<h)
      {
        mid=(l+h)/2;
        if((x-'0')<(str[mid]-'0'))
        {
            h=mid-1;
        }
        else if((x-'0')>(str[mid]-'0'))
        {
            l=mid+1;
        }
        else
        {
            break;
        }

      }
      if(str[mid]==x)
      cout<<x<<" is FOUND in string "<<str<<endl;
      else
      cout<<x<<" is NOT FOUND in string "<<str<<endl;

        
    cout<<"Do you want to continue? Enter 0 for NO and 1 for YES"<<endl;
      cin>>t;
    }
    while(t==1);

   
    return 0;
}
