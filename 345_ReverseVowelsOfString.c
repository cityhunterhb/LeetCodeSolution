/***************************************************
*      FileName: 345_ReverseVowelsOfString.c
*      Author&website:  cityhunterhb.top
*      Mail:  cityhunterhb.top@gmail.com
*      Description: ---
*      CreatedTime: 2019-06-21 20:01:15
*      LastModified: 2019-06-21 20:01:35
****************************************************/


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
        }
        i++;
        j--;
    }

    return s;
}
