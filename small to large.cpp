#include <iostream>
using namespace std; ​

int main()
 {
cout << "\nEnter the number of elements" ;
 cin >> n;
cout << "\nInput the array elements :" ; 
for(i=0;i<n;++i)
cin >> a[i]; ​
sort(a,a+n); ​
cout << “\nThe largest element is ” << a[n-1] << endl; ​
return 0; 
 }