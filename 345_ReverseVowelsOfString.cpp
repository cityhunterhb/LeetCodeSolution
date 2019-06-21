/***************************************************
*      FileName: 345_ReverseVowelsOfString.c
*      Author&website:  cityhunterhb.top
*      Mail:  cityhunterhb.top@gmail.com
*      Description: ---
*      CreatedTime: 2019-06-21 20:01:15
*      LastModified: 2019-06-21 20:23:02
****************************************************/
#include <iostream>

using namespace std;


bool isVowel(char s)
{
    switch(s)
    {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            return true;

        default:
            return false;
    }

    return false;
}


char * reverseVowels(char * s){
    if(s == NULL)
    {
        return NULL;
    }

    int i = 0;
    int j = strlen(s) - 1;
    while(i < j)
    {
        if(isVowel(s[i]) && isVowel(s[j]))
        {
            char temp;
            temp = s[i];
            s[i] = s[j];
            s[j] = temp;
			i++;
			j--;
        }
		else
		{
			if(isVowel(s[i]) == false)
			{
				i++;
			}

			if(isVowel(s[j]) == false)
			{
				j--;
			}
		}
    }

//	for(int k=0; k<strlen(s); k++)
//	{
//		cout << s[k];
//	}


    return s;
}

int main()
{
	char TestString[] = "leetcode";
	//char *s;
	reverseVowels(TestString);
	cout << TestString << endl;

	return 0;
}
