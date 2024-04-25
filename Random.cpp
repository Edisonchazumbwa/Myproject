#include <iostream>
#include <random>
using namespace std;
int
main ()
{
  random_device rd;
  mt19937 gen (rd ());
  uniform_int_distribution <> dis (0, 11);
  int daysUntilExpiration = dis (gen);
  cout << daysUntilExpiration;
  if (daysUntilExpiration > 5 && daysUntilExpiration <= 10)
	{
	  cout << endl << "Your subscription will expire soon. Renew now!";
	}
  else if (daysUntilExpiration > 1 && daysUntilExpiration <= 5)
	{
	  cout << endl << "Your subscription expires in" " " <<
		daysUntilExpiration << " " "days" << endl <<
		"Renew now and save 10%!";
	}
  else if (daysUntilExpiration == 1)
	{
	  cout << endl << "Your subscription expires within a day!" << endl <<
		"Renew now and save 20%!";
	}
  else if (daysUntilExpiration < 1)
	{
	  cout << endl << "Your subscription has expired.";
	}
  else if (daysUntilExpiration > 10)
	{
	  cout << endl << "You have an active subscription.";
	}
  else
	cout << endl << "Invalid input!";
  return 0;
}
