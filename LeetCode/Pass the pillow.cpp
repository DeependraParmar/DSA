/*
class Solution {
public:
    int passThePillow(int n, int time) {
        int direction, current = 1;

        for(int i=1; i<=time; i++){
            if(current == n)
                direction = -1;

            if(current == 1)
                direction = 1;

            if(direction == 1)
                current += 1;

            if(direction == -1)
                current -= 1;
        }

        return current;
    }
};
*/