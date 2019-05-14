/***************************************************
*      FileName: test.c
*      Author&website:  cityhunterhb.top
*      Mail:  cityhunterhb.top@gmail.com
*      Description: ---
*      CreatedTime: 2018-09-22 20:57:04
*      LastModified: 2019-05-12 19:42:02
****************************************************/
#include <stdio.h>
#include <stdlib.h>

int Fbi(int i)
{
#if 0
	if(i < 2)
	{
		return i == 0? 0 : 1;
	}

	return Fbi(i-1) + Fbi(i-2);
#endif

	return -1;
}

int reverse(int x) {
    int y = 0;
    char flag = 0;
    if(x < 0)
    {
        y = -x;
        flag = 1;
    }

    char a,b,c,d;
    a = (x & 0x7F000000) >> 6;
    b = (x & 0x00FF0000) >> 4;
    c = (x & 0x0000FF00) >> 2;
    d = x & 0x000000FF;
	printf("a=%d\n", a);
	printf("b=%d\n", b);
	printf("c=%d\n", c);
	printf("d=%d\n", d);


    /*d = x & 0x7F000000;
    c = x & 0x00FF0000;
    b = x & 0x0000FF00;
    a = x & 0x000000FF;
    */
    y = d * 256 * 256 * 256 + c * 256 * 256 + d * 256 + a;
    if(flag == 1)
    {
        y = -x;
    }

    //int sum[32] = {0};


    return y;
}

void swapvalue(char *p, char *q)
{
    *p = *p + *q;
    *q = *p - *q;
    *p = *p - *q;
}

void reverseString(char* s, int sSize){
    if(s == NULL || sSize < 2)
    {
        return;
    }

	printf("begin to deal\n");
    char temp;
    for(int i=0; i<(sSize/2); i++)
    {
		printf("11 i=%d", i);
        temp = s[i];
        s[i] = s[sSize - 1 - i];
        s[sSize -1 - i] = temp;
		printf("22 i=%d, %d", i, s[i]);
    }
	printf("finish !\n");

	for(int j=0; j<sSize; j++)
	{
		printf("%s", &s[j]);
	}
	printf("\n");
}




int main(void)
{
	int i;
	for(i=0; i<40; i++)
	{
		printf("%d ", Fbi(i));
	}
	printf("\r\n");

	int res = 0;
	//res = reverse(123);
	//printf("res=%d\n", res);

	//char *resverse = "hello";
	reverseString("hello", 5);
	//printf("reverse=%s\n", resverse);


	return 0;
}
