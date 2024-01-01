#include <cmath>
#include <iomanip>
#include <iostream>
using namespace std;


const double horsePrice = 70;  // price for one horse
const double standRatio = 30;  // additional price if the horse "doesn't stand"
const double horseConsult = 30; // fee for consultation
const double highMileage = 1.00;  // additional fee for regular customers
const double lowMileage = 0.66;  // additional fee for exceptional customers

double knife(double x, double y, double z) {
    return x * horsePrice + y * standRatio + z * horseConsult;
}// Function calculating the price for the actual work (trimming).

double road(bool c, double km) {
    if (c == true) {
        return km * lowMileage;
    }
    else {
        return km * highMileage;
    }
}// Function calculating the price for travel.

int main() {
    double x = 0, y = 0, z = 0, km = 0;
    bool c;
    int whatEver = 0;
    cout << "\033[1;32m";  // green color
    cout << "Welcome to your ferrier's calculator Gosia!\n\n";
    cout << "\033[0m";

    cout << "   _____,,;;;`;       ;';;;,,_____\n"
        << ",~(  )  , )~~\\|       |/~~( ,  (  )~;\n"
        << "' / / --`--,             .--'-- \\ \\ `\n"
        << " /  \\    | '             ` |    /  \\\n";


    cout << "Enter the number of horses: ";
    cin >> x;

    cout << "How many horses 'didn't stand': ";
    cin >> y;

    cout << "How many horses had consultations: ";
    cin >> z;

    cout << "Travel to an exceptional customer (1 - true, 0 - false): ";
    cin >> c;

    cout << "How many kilometers to the customer?: ";
    cin >> km;

    double finalPrice = knife(x, y, z);
    double roadPrice = road(c, km);
    cout << "\033[1;34m";
    cout << "Total price: " << finalPrice + roadPrice << endl;
    cout << "\033[0m";
    cout << "Good luck with your work! \n"
        << "Type anything to exit the program: ";
    system("pause");
    cin >> whatEver;
    return 0;
}
