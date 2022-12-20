#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    string Username;
    
    cout << "Fahsai: Sawadee ka...Can you tell me your name? " <<"\n";
    
    cout << "?????: " ;
    getline(cin, Username );
    
    cout << "Fahsai: Wow!!! "<< Username << " is a really cool name." <<"\n";
    
    cout << "Fahsai: I think you are an Engineering student. What is your student ID? "<<"\n";
    
    int UserID;
    cout << Username <<": " ;
    cin >> UserID;
    cin.ignore();
    
    int Gear = (UserID/10000000)-12;

    cout <<"Fahsai: I think you may be GEAR " << Gear <<". "<< "I have a free movie ticket for you." <<"\n";
    
    cout << "Fahsai: Let's go to the cinema together!!!" <<"\n";
    
    cout << "Fahsai: What movie do you want to watch?" <<"\n";
    
    string Movie;    
    cout << Username << ": ";
    getline(cin , Movie);
    
    cout <<"Fahsai: So....which day are you free to go with me?" <<"\n";
    
    string Day;
    cout << Username << ": ";
    getline(cin , Day);
    
    cout <<"Fahsai: "<< Day <<"....that is OK!!! I'm looking forward to watching " << Movie << " with you."<<"\n";
    
    string Text;
    cout << Username << ": ";
    getline(cin , Text);
    
    cout << "Fahsai: 555+ see you "<< Day <<"."<< " Bye Bye \\(^ ^)/";
    
    
    return 0;
}



