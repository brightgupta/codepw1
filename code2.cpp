#include <iostream> 
using namespace std ; 
int main(){
    // int age ; 
    // cout << "Tell me your age : "<< endl ;
    // cin >> age ; 
    // if (age>18){
    //     cout << "You are eligible for the party !!!!!" << endl ;
    //     cout << "To join the party , tell us more about yourself ??" << endl ;
    //     char firstcharacter ;
    //     cout << "Tell the first character of your name :" << endl ;
    //     cin >> firstcharacter ;
    // }
    // else if (age == 18){
    //     cout << "You are eligible for the party , But with proper KYC !!!" << endl ;
    //     int h ;
    //     cout << "Tell the first character of phone number " << endl ;
    //     cin >> h ;
    //     cout << "we got your phone number  " ; 
    // }
    // else{
    //     cout << "You are not eligible for the party ....." << endl ; 
    // }



    int age  ;
    cout << "Tell me your age :" << endl ;
    cin >> age ; 
    switch (age){
    case 18 :
        cout << "You are eligible for voting ." << endl ;
         break;


    case 80 :
        cout << "You are a senior citizen . " << endl ;
        break;
    
    default:
        cout << "You have no special case . " << endl ;
        break;
    }









    return 0 ;
}