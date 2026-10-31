#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int main(){
cout << " salom talaba hisobotiga hush kelibsiz ! "<< endl;
string ism, familiya;
int yosh ;
double mat , ingliz , dast ;
string guruh;

double baho_yigindi, ortacha, eng_yuqori, eng_past, orta_sqr, orta_ildiz;
char status;
cout << " marhamat yoshingizni kiriting: " ;
cin >> yosh ;
cout<< " marhamat ismingizni kiriting: " ;
cin >> ism;
cout << " endi esa familyangizni kiriting : ";
cin >> familiya ;
cout << " guruh raqamingizni ham kiriting : " ;
cin >> guruh;
cout << " statusingizni ham kiriting : " ;
cin >> status;

cout << " judayam soz, endi fanlardan olgan baholaringizni kiriting " ;
cout << " marhamat matematikadan olgan bahoyingiz : " ;
cin >> mat;
cout << " ingiliz tilidan olgan bahoyingiz : " ;
cin >>ingliz ;
cout << " ohirgi dasturlash fanidan olgan bahoyingiz : " ;
cin >> dast;

baho_yigindi = mat+ingliz+dast ;
ortacha = baho_yigindi/3 ;
eng_yuqori = max(max(mat,ingliz),dast);
eng_past  = min(min(mat,ingliz),dast);
orta_sqr = pow(ortacha, 2);
orta_ildiz= sqrt(ortacha);



    cout << endl << endl<< endl<<"=========== TALABA NATIJALARI =========== "<< endl ;
    cout << "sizning ismingiz :" << ism << "\n" ;
    cout << " sizning familiyangiz : " << familiya << "\n";
    cout << " sizning yoshingiz  : " << yosh << "\n";
    cout << " sizning guruhingiz  : " << guruh << "\n";
    cout << " sizning statusingiz  : " << status << "\n"<< endl << endl;
  
    cout << " matematika : " << mat << "\n";
    cout << " ingliz tili : " << ingliz << "\n";
    cout << " dasturlash : " << dast << "\n"<< endl<< endl;
    
    
        cout << " umumiy natija : " << baho_yigindi<< endl ;
        cout << " ortacha natija : " << ortacha<< endl ;
        cout << " eng baland natija : " << eng_yuqori<< endl ;
         cout << " eng minimal baho : " << eng_past << endl ;
         cout << " ortacha baho kvadrati : " << orta_sqr << endl ;
         cout << " ortacha baho ildizi : " << orta_ildiz << endl<< endl<< endl; ;
       
         
         if (baho_yigindi >= 80 ){
             
    cout << " tabriklaymiz siz stipendiyaga tavsiya etildingiz "<< endl;
     cout << " sizning stipendiyangiz = 500 000 uzs ";
    }
    
        else if( ortacha >=70 && ortacha <=79.99 ) {
            cout << " sizning stipendiyangiz : 300 000 uzs";}
        else if ( ortacha <=69) {
            cout<< "afsuski balingiz yetarli emas! ";}
    
    
            else {
                cout << " notog'ri ma'lumot ";}
                
return 0;
     }
