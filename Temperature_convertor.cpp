/*                                         TEMPERATURE_CONVERTOR                                */



// ############################# Declaring Header Files ###################################

#include<iostream>
#include<conio.h>
using namespace std;
int main(){

    // ############################# Declaring Variables ###################################

    double count, temp , c, d;
    int choice;
    
    cout<<"Temperature Options\n" ;
    cout<< " 1 - Celsius to Fahrenheit\n" ;
    cout<< " 2 - Fahrenheit to Celsius\n" ;
    cout<< "Enter your choice of option:-\n" ;
    cin>> choice;

//################################ Result  #############################
    if (choice==1){
        cout<<"Enter the temperature in celsius:-\n";
        cin>>temp;
        c= temp*1.8+32;
        cout<<"Temperature in Fahrenheit is :-\n"<<c;
    }

    //################################ Result  #############################
    else{
        cout<<"Enter the temperature in Fahrenheit:-\n";
        cin>>temp;
        d=(temp-32)/1.8 ;
        cout<<"Temperature in Celsius is :-\n"<<d; 
    }
}