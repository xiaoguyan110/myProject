#include <iostream>
#include "sales.h"
#include "screen.h"
#include "account.h"
using namespace std;


int main()
{
	string null_book = "9-99-999-9999";

	Sales a("1234", 10, 10);

	Account acc;
	Account::initAmcount(10.1);	
	acc.initAmcount(100);

	cout << acc.amcount << endl;
	//Sales b("111111111");
	//Sales c("111112222", 12, 10.11);
	//Sales d(std::cin);

	//print(std::cout, a);
	//print(std::cout, b);
	//print(std::cout, c);
	//print(std::cout, d);
#if 0
	Screen myscreen(5,5,'X');
	myscreen.move(4,0).set('#').display(cout);
	cout << endl;
	myscreen.display(cout);
	cout<<endl;
#endif
	return 0;
}

