/*
Using the concept of loops:

bool isPowerOfTwo(int n) {
        for(int i=0; i<=30; i++){
            int ans = pow(2,i);
            if(ans == n){
                return true;
            }
        }
        return false;
    }



Using the concept of bitwise operators:

bool isPowerOfTwo(int n) {
        int count = 0;

        // Edge Case: Even if the number is power of two but the MSB being 1 due to negative number increases the count = 2.
        if(n<0){
            return false;
        }

        while(n != 0){
            int bit = n&1;
            if(bit == 1){
                count = count + 1;
            }
            n >>= 1;
        }

        if(count == 1){
            return true;
        }
        return false;
    }
*/