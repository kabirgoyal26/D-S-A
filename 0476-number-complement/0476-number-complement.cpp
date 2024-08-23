class Solution {
public:
//left shift 
// right shift 
// ~ ones complement 
    int findComplement(int num) {

        int m=num;

        int mask=0;


        // endge case ha agar 0 hoga to uska complement 1 hoga 


        if(num==0)
        {
            return 1;

        }

        while (m!=0)
        {
            //right shit 
            mask=(mask << 1) | 1;
            m= m >> 1;
        }
        // formula to calclate complemnet 
        // once complement & 00000000000111.  // no. of 1 depend upon bits involved 
        

        int ans=(~num) & mask;

        return ans ;
        
    }
};