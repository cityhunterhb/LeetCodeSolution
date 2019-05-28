/*
657. Robot Return to Origin

There is a robot starting at position (0, 0), the origin, on a 2D plane. Given a sequence of its moves, judge if this robot ends up at (0, 0) after it completes its moves.
The move sequence is represented by a string, and the character moves[i] represents its ith move. Valid moves are R (right), L (left), U (up), and D (down). If the robot returns to the origin after it finishes all of its moves, return true. Otherwise, return false.
Note: The way that the robot is "facing" is irrelevant. "R" will always make the robot move to the right once, "L" will always make it move left, etc. Also, assume that the magnitude of the robot's movement is the same for each move.

Example 1:
Input: "UD"
Output: true 
Explanation: The robot moves up once, and then down once. All moves have the same magnitude, so it ended up at the origin where it started. Therefore, we return true.
 

Example 2:
Input: "LL"
Output: false
Explanation: The robot moves left twice. It ends up two "moves" to the left of the origin. We return false because it is not at the origin at the end of its moves.

题目：机器人经过N此跳跃后是否回到原点(0, 0)
分析：初始时，机器人在原点的位置(0, 0)， 英文L,R,U,D分别代表机器人向左(left)， 右(right)，上(up)，下(down)，各走一步，输入是机器人所走的路径，
      由上述4个字母组成的一个字符数组，判断经过上述路径，机器人是否回到了原点(0, 0).
      例如："LRUD",左右上下各走了一步，回到原点，返回TRUE
            "RD"，向右向下各走了一步，机器人的坐标是(1, -1)，机器人不在原点，返回FALSE。
*/


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
