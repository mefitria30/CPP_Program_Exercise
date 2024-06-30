#include <vector>
#include <iostream>
using namespace std;

int main(){
    vector<int> nomer = {1,2,3};
    int no_elemen = 1;
    
    //memodifikasi nilai
    nomer[no_elemen] = 10;
    
    //melihat nilai
    cout << "nilai dari elemen " << no_elemen << " adalah " << nomer[no_elemen];
    
    return 0;
}