#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    
    srand(time(0));
    
    int son = rand()% 10 + 1 ;

    srand(time(0));

    
    
    if ( son == 6 ) {
        cout << son <<" " << " random togrii ! " ;}
        
        else { cout<< son <<" " << "random notogri " ; }

    return 0;
}
