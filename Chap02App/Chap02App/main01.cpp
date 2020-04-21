#include <stdio.h>

class human
{
public:
	char name[12];
	int age;

	void intro()
	{
		printf("이름 %s, 나이 : %d\n", name, age);
	}
};

int main()
{
	human h = { "김민수", 26 };
	h.intro();

	human arFriend[10] = {
		{"문동욱", 49},
		{"김유진", 45},
		{"박상막", 30},
	};

	for (int i = 0; i < 10; i++)
	{
		human* pFriend;
		pFriend = &arFriend[i];
		pFriend->intro();
	}



	return 0;
}