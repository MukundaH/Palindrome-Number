bool isPalindrome(int x){
    if(x<0||x>=2147483648||x<-2147483648){return false;}
    else{
        int y=x;
        double z=0;
        while(y!=0){
            z=z*10+y%10;
            y=(y-y%10)/10;
        }
        if(z==x){return true;}
        else{return false;}
    }
}