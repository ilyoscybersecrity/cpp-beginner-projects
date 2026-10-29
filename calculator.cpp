#include <iostream>
#include <cmath>
using namespace std;

int main(){
  int a, b ;
 
int result1, result2, result3, result4, result5;
cout << "please enter thhe first number : " ;
cin >> a;
cout << " please enter the second number : " ;
cin >> b;
result1 = a+b;
result2 = a-b;
result3 = a*b;
result4 = a/b;
result5 = a%b;

if (b !=0 ) {
  cout << "dividing is : " << a/b <<"\n" ;
}

else { cout << " warning: no dividing to 0" ; }

cout << "your results :";
cout << result1 << endl;
cout << result2 << endl;
cout << result3 << endl;
cout << result4 << endl;
cout << result5 << endl;

return 0;
     }
