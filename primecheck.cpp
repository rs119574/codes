/*
by:-  
                     _ __ ___ 119574
                    | '__/ __| 
                    | |  \__ \ 
                    |_|  |___/ 
                    

*/ 








long long int isprime(long long int n){
    long long int c=0;
    if((n%2==0)&&(n!=2))
        return 0;
    if((n%3==0)&&(n!=3))
        return 0; 
      long long int p=5;
    for(long long int i=0;p<=n;p=p+4){//cout<<"p="<<p<<endl;
        if((n%p==0)&&(n!=p))
            return 0;
        p+=2;
        if((n%p==0)&&(n!=p))
            return 0;
    }
return 1;
}













