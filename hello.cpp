#include <iostream>
#include <iomanip>// for setprecision and fixed .
#include <time.h>
#include <string>
using namespace std;
int main()
{
    const double EURO_CONVERSION_RATE = 0.94;
    const double YEN_CONVERSION_RATE = 134.83;
    const double BITCOIN_CONVERSION_RATE = 0.000056;
    double dollar_amount;
cout <<"──────────────────██████────────────────" <<endl;
cout <<"─────────────────████████─█─────────────"<<endl;
cout <<"─────────────██████████████─────────────"<<endl;
cout <<"─────────────█████████████──────────────"<<endl;
cout <<"──────────────███████████───────────────"<<endl;
cout <<"────────────────████████────────────────"<<endl;
cout <<"────────────────▐██████─────────────────"<<endl;
cout <<"──────────────── ▌─────▌────────────────"<<endl;
cout <<"────────────────████████────────────────"<<endl;
cout <<"────────────████████████████────────────"<<endl;
cout <<"──────────████████████████████──────────"<<endl;
cout <<"────────████████████─────███████────────"<<endl;
cout <<"──────███████████─────────███████───────"<<endl;
cout <<"─────████████████───██─███████████──────"<<endl;
cout <<"────██████████████──────────████████────"<<endl;
cout <<"───████████████████─────█───█████████───"<<endl;
cout <<"──█████████████████████─██───█████████──"<<endl;
cout <<"──█████████████████████──██──██████████─"<<endl;
cout <<"─█████by████████████████─██───██████████"<<endl;
cout <<"████Markos██████████████──────██████████"<<endl;
cout <<"████Palamaris██████──────────███████████"<<endl;
cout <<"─██████████████████───────██████████████"<<endl;
cout <<"─███████████████████████──█████████████─"<<endl;
cout <<"───────██████████████████████████████───"<<endl;
cout <<"───────██████████████████████████───────"<<endl;
cout <<"─────────────███████████████────────────"<<endl;
 do {
    cout << "Enter amount in US dollars: "<< endl;
    cout << "Enter 0 to Exit"<< endl;
    cin >> dollar_amount;
    cout << "*************************"<< endl;
    cout << fixed << setprecision(3);
    cout << "Conversion to other currencies:" << endl;
    cout << dollar_amount << " US dollars = " << dollar_amount * EURO_CONVERSION_RATE << " Euro" << endl;
    cout << dollar_amount << " US dollars = " << dollar_amount * YEN_CONVERSION_RATE << " Yen" << endl;
    cout << fixed << setprecision(8); // apo  3 se 8 giati einai akrivo
    cout << dollar_amount << " US dollars = " << dollar_amount * BITCOIN_CONVERSION_RATE << " Bitcoin" << endl;
    cout << "*************************" << endl;
    if (dollar_amount == 0)
 {
cout << "░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░"<< endl;
cout << "░░░▄▄▀▀▀▀▀▄░░░░░░░░░░░░░░░░░░░░░░░░░░░░"<< endl;
cout << "░░▄▀░░░░░░░▀▄░░░░░░░░░░░░░░░░░░░░░░░░░░"<< endl;
cout << "░▄▀░░░▄▄░░░░▀▀▀▀▀▀▀▄▄▀▀▀▀▀▀▀▀▀▀▀▀▄▄░░░░"<< endl;
cout << "░█░░░░██░░░░░░░░░░░░░░░░░░░░░░░░░░░▀▄░░"<< endl;
cout << "░█░░░░██▄████▄░██▄░░░░▄██░▄████▄░░░░▀▄░"<< endl;
cout << "░█░░░░██▀░░▀██▄░██▄░░██▀░██▀░▄██░░░░░█░"<< endl;
cout << "░█░░░░██░░░░███░░█████▀░░██▄█▀▀░░░░░░█░"<< endl;
cout << "░█░░░░███▄▄███▀░░░▀██▀░░░▀██▄▄▄██░░░░█░"<< endl;
cout << "░▀▄░░░░▀▀▀▀▀▀░░░░░██▀░░░░░░▀▀▀▀▀░░░░░█░"<< endl;
cout << "░░▀▄░░░░░░░░░░░░░██▀░░░▄▄░░░░░░░░░▄▄▀░░"<< endl;
cout << "░░░░▀▀▀▀▀▀▀▀▀▄░░░▀▀░░░▄▀░▀▀▀▀▀▀▀▀▀░░░░░"<< endl;
cout << "░░░░░░░░░░░░░▀▄░░░░░░▄▀░░░░░░░░░░░░░░░░"<< endl;
cout << "░░░░░░░░░░░░░░░▀▀▀▀▀▀░░░░░░░░░░░░░░░░░░"<< endl;
cout << "░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░"<< endl;
 }
     }
     while (dollar_amount != 0);

}




