#include <iostream>
#include <Windows.h>
#include <string>

using namespace std;

int main(void){
	string name = "abc";
	string pwd = "abc123";
	
	while ( name != "54hk" || pwd != "123456" ) {
		cout << "ÇëÊäÈëÕËºÅ£º";
		cin >> name;

		cout << "ÇëÊäÈëÃÜÂë£º";
		cin >> pwd;

		if ( name == "54hk" && pwd == "123456" ) {
			system("cls");
			std::cout <<"1.ÍøÕ¾404¹¥»÷" << std::endl;
			std::cout <<"2.ÍøÕ¾´Û¸Ä¹¥»÷" << std::endl;
			std::cout <<"3.ÍøÕ¾¹¥»÷¼ÇÂ¼" << std::endl;
			std::cout <<"4.DNS¹¥»÷" << std::endl;
			std::cout <<"5.·þÎñÆ÷ÖØÆô¹¥»÷" << std::endl;
			std::cout <<"6.DNS¹¥»÷" <<std::endl;
		} else {
			cout << "ÄúÊäÈëµÄÕËºÅ»òÕßÃÜÂë´íÎó£¡" << endl;
			system("pause");
			system("cls");
		}
	}
	system("pause");
	return 0;
}