class Solution {
public:
    int addDigits(int num) {
     if(num<=9){
         return num;
     }
     else{
       int number = floor(log10(num))+1;
       while(number!=1){
          int sum=0;
          while(num){
              sum = sum + (num%10);
              num=num/10;
          }
          num = sum;
          number =  floor(log10(num))+1;
       }  
     }
     return num;
    }
};