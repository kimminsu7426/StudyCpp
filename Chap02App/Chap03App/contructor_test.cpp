#include <stdio.h>
#include <string.h>

class human
{
private:
	char name[12];
	int age;

public:
	//������
	human(const char* aname, int aage)
	{
		strcpy(name, aname);
		age = aage;
	}
	void intro()
	{
		printf("�̸� = %s, ���� = %d\n", name, age);
	}
};

int main()
{
	human h = human("��μ�", 26);
	h.intro();
	
	return 0; 
}