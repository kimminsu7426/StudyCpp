#pragma once

class Time
{
private: // 외부에서 엑세스 불가
	int hour, min, sec;

public: // 외부로 공개되어 누구나 사용가능
	void SetTime(int h, int m, int s);
	void OutTime();
};

