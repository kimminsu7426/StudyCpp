#include <stdio.h>
#include <string.h>

class human
{
private:
	char name[12];
	int age;

public:
	//생성자
	human(const char* aname, int aage)
	{
		strcpy(name, aname);
		age = aage;
	}
	void intro()
	{
		printf("이름 = %s, 나이 = %d\n", name, age);
	}
};

int main()
{
	human h = human("김민수", 26);
	h.intro();
	
	return 0; 
}