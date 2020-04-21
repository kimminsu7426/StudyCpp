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
		printf("%s 객체 생성자 호출되었습니다\n", this->name);
	}

	~human()
	{
		printf("%s 객체가 파괴었습니다\n", this->name);
		delete[] this->name;
	}

	void intro()
	{
		printf("이름 = %s, 나이 = %d\n", this->name, this->age);
	}
};

int main()
{
	human man("김민수", 26);
	man.intro();
	
}
