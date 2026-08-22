class Solution {
public:
    int sum(int n){
        int sum = 0;
        while (n > 0){
            sum += n % 10;
            n = n / 10;
        }
        return sum;
    } 

    int product(int n){
        int product = 1;
        while(n > 0){
            product *= n % 10;
            n /= 10;
        }
        return product;
    }

    bool checkDivisibility(int n) {
        int p = product(n);
        int s = sum(n);
        if(n % (s + p) == 0) return true;
        return false;
    }
};