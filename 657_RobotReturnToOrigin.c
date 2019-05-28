bool judgeCircle(char* moves) {
    if(moves == NULL)
    {
        return true;
    }
    
    int len = (int)strlen(moves);
    if(len % 2)
    {
        return false;
    }
    
    int count[2] = {0};
    for(int i = 0; i<len; i++)
    {
        if(moves[i] == 'L')
        {
            count[0]++;
        }
        else if(moves[i] == 'R')
        {
            count[0]--;
        }
        else if(moves[i] == 'U')
        {
            count[1]++;
        }
        else if(moves[i] == 'D')
        {
            count[1]--;
        }
    }
    
    if(count[0] == 0 && count[1] == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
