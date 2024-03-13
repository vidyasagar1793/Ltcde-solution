class Solution {
public:
    int pivotInteger(int n) {
      int i=1,j=n;
  int sum1=0,sum2=0;
      while(i!=(j) && i<=n && j>=0){
        if(sum1<sum2){
        sum1+=i;
        i++;
        }
        
        else {
         sum2+=j;
         j--;
        }
              
      }

      if(sum1==sum2){
            return i;
        }
   return -1;
    }
};