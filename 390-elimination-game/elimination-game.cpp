class Solution {
public:
    int lastRemaining(int n) {
        int head = 1, rem = n, step = 1;
        bool left = 1;
        while(rem > 1){
            if(left || rem%2 == 1){
                head += step;
            }

            left = !left;
            rem /= 2;
            step *= 2;
        }
        return head;
    }
};