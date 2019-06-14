/***************************************************
*      FileName: 1025_DivisorGame.cpp
*      Author&website:  cityhunterhb.top
*      Mail:  cityhunterhb.top@gmail.com
*      Description: ---
*      CreatedTime: 2019-06-14 10:21:35
*      LastModified: 2019-06-14 22:11:42
****************************************************/
/*
 1025. Divisor Game

Alice and Bob take turns playing a game, with Alice starting first.
Initially, there is a number N on the chalkboard.  On each player's turn, that player makes a move consisting of:

Choosing any x with 0 < x < N and N % x == 0.
Replacing the number N on the chalkboard with N - x.
Also, if a player cannot make a move, they lose the game.
Return True if and only if Alice wins the game, assuming both players play optimally.

Example 1:
Input: 2
Output: true
Explanation: Alice chooses 1, and Bob has no more moves.

Example 2:
Input: 3
Output: false
Explanation: Alice chooses 1, Bob chooses 1, and Alice has no more moves.

思路：
	1.N是偶数，Alice可以选择1或者N的公因子
 * */

class Solution {
public:
    bool divisorGame(int N) {
        if(N % 2 != 0)
        {
            return false;
        }

        return true;
    }
};
