#include <iostream>
#include <random>
using namespace std;

int main() {
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<> dis(0, 11);
    int daysUntilExpiration = dis(gen);
    cout << daysUntilExpiration;

    switch (daysUntilExpiration) {
        case 1:
            cout << endl << "Your subscription expires within a day!" << endl
                 << "Renew now and save 20%!";
            break;
        case 2:
        case 3:
        case 4:
        case 5:
            cout << endl << "Your subscription expires in " << daysUntilExpiration << " days" << endl
                 << "Renew now and save 10%!";
            break;
        case 0:
            cout << endl << "Your subscription has expired.";
            break;
        case 6:
        case 7:
        case 8:
        case 9:
        case 10:
            cout << endl << "Your subscription will expire soon. Renew now!";
            break;
        case 11:
            cout << endl << "You have an active subscription.";
            break;
        default:
            cout << endl << "Invalid input!";
            break;
    }

    return 0;
}
