class Solution {
public:
    int minMoves(int target, int maxDoubles) {
        int step=0;
        while(target>1)
        {
            if(target%2==1){
                target-=1;
                step+=1;
            }else{
                if(maxDoubles!=0){
                    maxDoubles--;
                    target/=2;
                }else{
                    target-=1;
                    return target+step;
                }
                step+=1;
        }
        }
        return step;
    }
};