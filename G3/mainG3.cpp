#include <iostream>
#include <Windows.h>
#include <string>

using namespace std;

int main(void){
	string name = "abc";
	string pwd = "abc123";
	
	while ( name != "54hk" || pwd != "123456" ) {
		cout << "�������˺ţ�";
		cin >> name;

		cout << "���������룺";
		cin >> pwd;

		if ( name == "54hk" && pwd == "123456" ) {
			system("cls");
			std::cout <<"1.��վ404����" << std::endl;
			std::cout <<"2.��վ�۸Ĺ���" << std::endl;
			std::cout <<"3.��վ������¼" << std::endl;
			std::cout <<"4.DNS����" << std::endl;
			std::cout <<"5.��������������" << std::endl;
			std::cout <<"6.DNS����" <<std::endl;
		} else {
			cout << "��������˺Ż����������" << endl;
			system("pause");
			system("cls");
		}
	}
	system("pause");
	return 0;
}