class Solution {
public:
    bool isRobotBounded(string instructions) {
        int x = 0, y = 0, i = 0;
        for (char & ins : instructions)
            if (ins == 'R')
                i++;
            else if (ins == 'L')
                i--;
            else//ins == G
            {
                if(i%4 == 0)
                    y++;
                else if(abs(i)%4 == 1)
                    x++;
                else if(abs(i)%4 == 2)
                    y--;
                else 
                    x--;
            }
        if (i%4)//direct not North
            return true;
        else if(x==0 && y==0)//No move
            return true;
        else 
            return false;
       
    }
};
