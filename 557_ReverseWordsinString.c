/*
557. Reverse Words in a String III

Given a string, you need to reverse the order of characters in each word within a sentence while still preserving whitespace and initial word order.

Example 1:
Input: "Let's take LeetCode contest"
Output: "s'teL ekat edoCteeL tsetnoc"
Note: In the string, each word is separated by single space and there will not be any extra space in the string.

分析：反转字符串中的每一个词，每个词之间用空格隔开
思路：分而治之。根据前面的反转字符串的方法，先找出字符串中的一个个单独的词，再分别对这些词进行反转。
*/



void ReverseString(char *s, int num)
{
    char temp;
    for(int i=0; i<num/2; i++)
    {
        temp = s[i];
        s[i] = s[num - 1 - i];
        s[num - 1 - i] = temp;
    }
}

char* reverseWords(char* s) {
    if(s == NULL || strlen(s) < 2)
    {
        return s;
    }
    
    int i = 0, start = 0;
    while(i <= strlen(s))
    {
        if(s[i] == ' ' || i == strlen(s))
        {
            ReverseString(&s[start], i - start);
            start = i + 1;
        }
        i++;
    }
    //ReverseString(&s[start], i - start);
    return s;
}
