#include <stdio.h>
#include <string>

class human 
{
private:
	char* name;
	int age;
public:
	human(const char* name, int age)
	{
		this->name = new char[strlen(name) + 1];
		strcpy(this->name, name);
		this->age = age;
		printf("%s ��ü ������ ȣ��Ǿ����ϴ�\n", this->name);
	}

	~human()
	{
		printf("%s ��ü�� �ı������ϴ�\n", this->name);
		delete[] this->name;
	}

	void intro()
	{
		printf("�̸� = %s, ���� = %d\n", this->name, this->age);
	}
};

int main()
{
	human man("��μ�", 26);
	man.intro();
	
}
