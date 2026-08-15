class Solution {
public:
int fibo(int n){
    if(n<=1)
    return n;
    return (fibo(n-2)+fibo(n-1));
}
    int fib(int n) {
        return fibo(n);
        
    }
};