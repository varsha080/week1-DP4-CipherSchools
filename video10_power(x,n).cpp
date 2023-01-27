double myPower(double x, long long n){
     

     if(n==0){
            return 1;
        }

        if(n==1){
            return x;
        }

       double res= myPower(x,n/2);
       res= res*res;

     if(n % 2==1){
         res*=x;
     }

     return res;
    }

    double myPow(double x, long long n) {
        if(n>=0){

        
      return myPower(x,n);
    }
    
    return 1.0/myPower(x,abs(n));
    }
