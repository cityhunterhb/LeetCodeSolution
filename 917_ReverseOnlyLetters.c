

char isChar(char s)
{
    if((s >= 'a' && s <= 'z') || (s >= 'A' && s <= 'Z'))
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

char * reverseOnlyLetters(char * S){
    int len = strlen(S);
    int i = 0, j = len -1;
    char temp;
    while(i < j)
    {
        if(isChar(S[i]) && isChar(S[j]))
        {
            temp = S[i];
            S[i] = S[j];
            S[j] = temp;
            i++;
            j--;
        }
        else
        {
            if(isChar(S[i]) == 0)
            {
                i++;
            }
            
            if(isChar(S[j]) == 0)
            {
                j--;
            }
        }
    }
    
    return S;
}

