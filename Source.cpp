#include <iostream>
#include <string>

std::string repeat_str(std::string str, int num);
int words_number(std::string str);

int compare_sizes(std::string str, std::string str2);
int main() {
	setlocale(LC_ALL, "Russian");
	int n;

	//������ 1. ����������� ������
	/*std::cout << "������ 1. \n������� ������ -> ";
	std::string str1;
	std::getline(std::cin, str1);
	std::cout << "������� ����� - > ";
	std::cin >> n;
	std::cout << repeat_str(str1, n);
	std::cin.ignore();*/

	//������ 2. ��������� ���� ����� 
	/*std::cout << "������ 2. \n������� ������ ������ -> ";
	std::string str2_1;
	
	std::getline(std::cin, str2_1);
	std::cout << "������� ������ ������ -> ";
	std::string str2_2;
	std::getline(std::cin, str2_2);
	
	switch (compare_sizes(str2_1, str2_2)) {
	case 1: std::cout << "����� ������ ������ ������.\n\n"; break;
	case -1: std::cout << "����� ������ ������ ������.\n\n"; break;
	case 0: std::cout << "����� ����� �����.\n\n"; break;
	}*/
			
	//������ 3. ���������� ���� � �����������
	std::cout << "������ 3. \n������� ����������� - > ";
	std::string str3;
	std::getline(std::cin, str3);
	std::cout << "���������� ����: " << words_number(str3) << std::endl;

	return 0;
}

std::string repeat_str(std::string str, int num) {
	std::string result; // ""
	for (int i = 0; i < num; i++)
		result += str;
	return result;
} 

int compare_sizes(std::string str1, std::string str2) {
	if(str1.length() > str2.length())
		return 1;
	if (str1.length() < str2.length())
		return -1;
		return 0;
}

int words_number(std::string str) {
	int counter = 0;
	for (int i = 0; i < str.length(); i++)
		if (str[i] == ' ')
			counter++;
	return counter + 1;

}







// 
int foo(std::string str) {
	int counter = 0;
	const int char_number = 6;
	char charaters[char_number] = " .,!?";
	for (int i = 0; i < str.length(); i++)
		for (int j = 0; j < char_number; j++)
			if (str[i] == charaters[j])
				counter++;
	return counter;
}