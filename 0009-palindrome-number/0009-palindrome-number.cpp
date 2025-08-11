class Solution {
public:
    int HOWMANYDIGITS(int XYZ) {
        int ABC = 0;
        int DEF = XYZ;
        while (DEF > 0) {
            DEF = DEF / 10;
            ABC = ABC + 1;
        }
        return ABC;
    }
    
    int GETLASTDIGIT(int QRS) {
        int TUV = QRS % 10;
        return TUV;
    }
    
    int REMOVELAST(int WXY) {
        return WXY/10;
    }
    
    int ADDTORIGHT(int ZAB, int CDE) {
        int FGH = ZAB * 10;
        int IJK = FGH + CDE;
        return IJK;
    }
    
    bool ISODDCOUNT(int LMN) {
        int OPQ = LMN % 2;
        if (OPQ != 0) 
            return true;
        else {
            return false;
        }
    }
    
    int SKIPONE(int RST) {
        return RST/10;
    }
    
    bool SAMETHING(int UVW, int XYZ1) {
        if(UVW == XYZ1) {
            return true;
        }
        return false;
    }
    
    bool DOMAINLOGIC(int INPUTVAL, int HOWMANY) {
        int LEFT_SIDE = INPUTVAL;
        int rightSide = 0;
        
        int counter = 0;
        while(counter < HOWMANY / 2) {
            int temp_digit = GETLASTDIGIT(LEFT_SIDE);
            rightSide = ADDTORIGHT(rightSide, temp_digit);
            LEFT_SIDE = REMOVELAST(LEFT_SIDE);
            counter++;
        }
        
        if (ISODDCOUNT(HOWMANY) == true) {
            LEFT_SIDE = SKIPONE(LEFT_SIDE);
        }
        
        bool result = SAMETHING(LEFT_SIDE, rightSide);
        return result;
    }
    
    bool CHECKIFPOSITIVE(int val) {
        bool isPos = val > 0;
        return isPos;
    }
    
    bool isPalindrome(int x) {

        if (x==0){
            return true;
        }
        if (CHECKIFPOSITIVE(x) == true) {
            int digitCount = HOWMANYDIGITS(x);
            bool answer = DOMAINLOGIC(x, digitCount);
            return answer;
        }
        else 
        {
            return false ;
        }
    }
};
