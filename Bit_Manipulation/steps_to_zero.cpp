class Solution {
public:
    int numberOfSteps (int num) {
        int cnt=0;
        
        while(num!=0){
            cnt++;
            
            if(num%2==0){
                num=num>>1;
            }else{
                num=num-1;
            }
            
            
        }
        return cnt;
        
    }
};
