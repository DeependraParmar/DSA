/*
int bitwiseComplement(int n) {
        int number = n;

        if(n==0){
            return 1;
        }

        int mask = 0;
        while(number!=0){
            mask <<= 1;
            mask = mask | 1;
            number >>= 1;
        }

        return ~n&mask;
    }
*/