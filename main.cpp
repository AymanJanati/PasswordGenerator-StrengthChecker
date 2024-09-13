#include <iostream>
#include <cstdlib>
#include <string>
#include <ctime>
using namespace std;

int howStrong(string checkIt){
    bool upper = false;
    bool lower = false;
    bool digit = false;
    bool special = false;
    int i = 0 , c=0;

    while( !(upper && lower && digit && special) && i < checkIt.length()){
        if(isupper(checkIt[i])) upper = true;
        else if(islower(checkIt[i])) lower = true;
        else if(isdigit(checkIt[i])) digit = true;
        else special = true;
        
        i++;
    }

    if(checkIt.length() >= 12) {cout<<"Password's length : Valid"<<endl; c++;}
    else
        cout<<"Password's length : Invalid (batter be >12 chars)"<<endl;
    if(upper) {cout<<"Upper case : Valid"<<endl; c++;}
    else
        cout<<"Upper case : Invalid"<<endl;

    if(lower) {cout<<"Lower case : Valid"<<endl; c++;}
    else
        cout<<"Lower case : Invalid"<<endl;

    if(digit) {cout<<"Digits : Valid"<<endl; c++;}
    else
        cout<<"Digits : Invalid"<<endl;

    if(special) {cout<<"Special characters : Valid"<<endl; c++;}
    else
        cout<<"Special characters : Invalid"<<endl;

    return c;
}

bool isStrong(string checkIt){
    bool upper = false;
    bool lower = false;
    bool digit = false;
    bool special = false;
    int i = 0;

    while( !(upper && lower && digit && special) && i < checkIt.length()){
        if(isupper(checkIt[i])) upper = true;
        else if(islower(checkIt[i])) lower = true;
        else if(isdigit(checkIt[i])) digit = true;
        else special = true;
        
        i++;
    }
    if(upper && lower && digit && special)
        return true;
    else
        return false;
}

string generator(int length){
    string bank = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789!@#$%^&*()-_=+[]{}|;:,.<>?/AaBbCcDd";
    string retpw;

    while(length < 12){
        cout<<"A strong password have to be longer than 11 chars, please enter a valide length:"<<endl;
        cin>>length;
    }
    while( !isStrong(retpw) ){
    retpw = "";
    for(int i = 0 ; i < length ; i++){
        retpw += bank[rand() % bank.length()];
    }
    }
    return retpw;
}

int main(){
    srand(time(0));
    int choice;
    do{
        cout<<"Enter your choice:\n1-Generate a random strong password.\n2-Check how strong is my password.\n99-Exit"<<endl;
        cin>>choice;
        if(choice == 1){
        int length;
        cout << "Enter the length of the password: ";
        cin >> length;

        string password = generator(length);
        cout << "Generated Password: " << password << endl;
        }
        else if(choice == 2){
            string inPw;
            cout<<"Enter your password:"<<endl;
            cin>>inPw;
            int points = howStrong(inPw);
            cout<<"Final Result : ";
            if(points <= 2) cout<<"Weak password, try something stronger."<<endl;
            else if(points <= 4) cout<<"Medium password, but you can do better."<<endl;
            else 
                cout<<"Good password, now we talking!"<<endl;
        }
        else if(choice == 99) {break;}
        else
            {cout<<"Invalid input"<<endl;}
    }while(choice != 99);
}