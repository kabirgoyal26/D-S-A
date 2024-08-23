class Solution {
public:
    string fractionAddition(string expression) {

        // initial  numenatoer and denominator ko 0 and 1 mrk karenge 

        int num=0;
        int dem=1;

        int n=expression.size();
        int i=0;

        while(i<n)
        {
            int current_num=0;
            int current_dem=0;

            bool isNeg = (expression[i] == '-');
            
            // skip for expressions 
            if(expression[i] == '+' || expression[i] == '-') {
                i++;
            }

            // building numenator 

            while(i<n && isdigit(expression[i])) // isdigit will check ke wo digit ha ke nhi
            {
                int value = expression[i]- '0'; // converting string to integer
                current_num=(current_num*10)+value;
                i++;

            }

            i++; // skipping '/' sign 

            // checking negative sign. 

            if(isNeg == true) {
                current_num *= -1;
            } 

            // building denominator 

            while(i<n && isdigit(expression[i])) // isdigit will check ke wo digit ha ke nhi
            {
                int value = expression[i]- '0'; // converting string to integer
                current_dem=(current_dem*10)+value;
                i++;

            }

            //formula to calculate sum 

            num = num * current_dem + current_num* dem;
            dem = dem * current_dem;
        }
        

        
        // hame most value ans nikalana ha 
        // gcd neagtive return karta ha isliye hmne ansolute lagya ha 
        int GCD = abs(__gcd(num, dem)); //3

        num /= GCD; 
        dem /= GCD; 

        return to_string(num) + "/" + to_string(dem); 
    }
};