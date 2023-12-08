#include <iostream>
#include <fstream>
#include <iomanip>
#include <unistd.h>


using namespace std;

class Customers{
public:
    string name, gender, address;
    int age, mobileNo, cusID;
    char all[999];

    void detDetails(){

        ofstream out("old-customers.txt", ios::app);
        {
            cout << "Enter Customer ID: ";
            cin >> cusID;
            cout << "Enter Name: ";
            cin >> name;
            cout << "Enter age: ";
            cin >> age;
            cout << "Enter Mobile Number: ";
            cin >> mobileNo;
            cout << "Enter Address: ";
            cin >> address;
            cout << "Enter Gender: ";
            cin >> gender;
        }

        out << "\nCustomer ID: " << cusID << "\nName: " << name << "\nAge: " << age <<"\nMobile Number: " << "\nAddress: " << address << "\nGender: " << gender << endl;
        out.close();
        cout << "\nSaved \nNote: We saved your details record for future purposes\n" << endl;
    }

    void showDetails(){
        ifstream in("old-customers.txt");
        {
            if(!in){
                cout << "File Error!" << endl;
            }
            while(!(in.eof())){
                in.getline(all, 999);
                cout << all << endl;
            }
            in.close();
        }

    }

};

class Cabs{
public:
    int cabChoice, kilometers;
    float cabCost, lastCabCost;

    void cabDetails()
    {
        cout << "We collaborated with fastest, safest, and smartest cab service around the country" << endl;
        cout <<"---------------- ABC Cabs ---------------- \n" << endl;
        cout <<"1. Rent a standard cab - £2 per 1km" << endl;
        cout <<"2. Rent a luxury cab - £4 per 1km " << endl;

        cout <<"\nTo calculate the cost for your journey: " << endl;
        cout <<" Enter which kind of cab you need: ";
        cin >> cabChoice;
        cout <<" Enter kilometers you need to travel: ";
        cin >> kilometers;

        int hireCab;

        if(cabChoice == 1) {
            cabCost = kilometers * 2;
            cout << "\nYour total cost " << cabCost << " GBP for a standard cab" << endl;
            cout << "Press 1 to hire this cab: or ";
            cout << "Press 2 to select another cab: ";
            cin >> hireCab;

            system("CLS");

            if (hireCab == 1) {
                lastCabCost = cabCost;
                cout << "\nYou have successfully hired a standard cab" << endl;
                cout << "GoTo Menu";
            } else if (hireCab == 2) {
                cabDetails();
            } else {
                cout << "Invalid input! Redirecting to previous menu \nPlease wait!" << endl;
                usleep(999);
                system("CLS");
                cabDetails();
            }
        }else if(cabChoice == 2){
            cabCost = kilometers * 4;
            cout << "\nYour total cost " << cabCost << " GBP for a luxury cab" << endl;
            cout << "Press 1 to hire this cab: or ";
            cout << "Press 2 to select another cab: ";
            cin >> hireCab;

            system("CLS");

            if (hireCab == 1) {
                lastCabCost = cabCost;
                cout << "\nYou have successfully hired a luxury cab" << endl;
                cout << "GoTo Menu";
            } else if (hireCab == 2) {
                cabDetails();
            } else {
                cout << "Invalid input! Redirecting to previous menu \nPlease wait!" << endl;
                usleep(999);
                system("CLS");
                cabDetails();
            }
        } else {
            cout << "Invalid input! Redirecting to Main menu \nPlease wait!" << endl;
            usleep(999);
            system("CLS");
           // menu();
        }

        cout <<"\nPress 1 to Redirect to Main menu" << endl;
        cin >> hireCab;
        system("CLS");
        if(hireCab == 1){
            //menu();
        } else {
            //menu();
        }


    }
};

class Booking{
public:
    int choiceHotel, packChoice;
    float hotelCost;


    void hotels(){
        string hotelNo[] = {"Avendra", "ChoiceYou", "ElephantBay"};
        for(int i = 0; i < 3; i++){
            cout << (i+1) << ".Hotel" << hotelNo[i] << endl;
        }
        cout << "\nCurrently we collaborated with the above hotels!" << endl;
        cout << "Press any key back or\nEnter number of the hotel you want to book";
        cin >> choiceHotel;

        system("CLS");
        if(choiceHotel == 1){
            cout <<"---------- WELCOME TO HOTEL AVENDRA ---------- " << endl;
            cout << "The garden, food and beverage. Enjoy all you can drink, Stay cool and get chilled in the summer sun." << endl;
            cout << "Packages offered by Avendra: \n" << endl;

            cout  <<"1. Standard pack" << endl;
            cout <<"\tAll basic facilities you need just for £ 500";
            cout  <<"2. Premium pack" << endl;
            cout <<"\tEnjoy premium for £ 1000";
            cout  <<"3. Luxury pack" << endl;
            cout <<"\tLive a luxury at Avendra: £1500";

            cout << "\nPress another key to back or\nEnter package number you want to book: " << endl;
            cin >> packChoice;


        } else if(choiceHotel == 2){

        } else if(choiceHotel == 3){

        }
    }


};

class Charges{

};





int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
