#include <stdio.h>

int main(void)
{
	char input[1001];
	gets(input);
	int count = 0;
	// \0 == null값 
	// 밑에꺼 C언어의 약속임 -> 나머지 빈 곳은 null값으로 처리해야함 
	while(input[count] != '\0')
	{
		
		count ++;
	}
	printf("입력한 문자열의 길이는 %d입니다.", count);
	printf("입력한 문자열 : %s", input); 
	return 0;
}
