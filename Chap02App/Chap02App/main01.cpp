#include <stdio.h>

class human
{
public:
	char name[12];
	int age;

	void intro()
	{
		printf("�̸� %s, ���� : %d\n", name, age);
	}
};

int main()
{
	human h = { "��μ�", 26 };
	h.intro();

	human arFriend[10] = {
		{"������", 49},
		{"������", 45},
		{"�ڻ�", 30},
	};

	for (int i = 0; i < 10; i++)
	{
		human* pFriend;
		pFriend = &arFriend[i];
		pFriend->intro();
	}



	return 0;
}