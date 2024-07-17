#include <sstream>           
#include <iostream>           
#include <cstring>   
#include<cmath>    
#include<iomanip>          
using namespace std;   
   
double fun1(double x){   
 return sin(x);   
}   
double fun2(double x){   
    return exp(x);   
}   
double fun3(double x){   
    return x*x+x+1;   
}   
double fun4(double x){   
   return 1/(1.0+x*x);   
}   
double myExp(double(*f1)(double),double u,double d){   
 double result=0;   
   double delta=(u-d)/100.0;   
  for(double i=0;i<100;i++){   
      result+=f1(d+i*delta)*delta;   
   }   
  return result;   
}   
double mySin(double(*f2)(double),double u,double d){   
  double result=0;   
   double delta=(u-d)/100.0;   
  for(double i=0;i<100;i++){   
      result+=f2(d+i*delta)*delta;   
   }   
  return result;   
}   
double poly(double(*f3)(double),double u,double d){   
   double result=0;   
   int n=100;   
 double delta=(u-d)/100.0;   
  for(double i=0;i<100;i++){   
      result+=f3(d+i*delta)*delta;   
   }   
  return result;   
 /*double ans=(1.0/3)*pow(d,3.0);  
   ans+=(1/2.0)*pow(d,2.0);  
   ans+=d;  
    double ans1=(1.0/3)*pow(u,3.0);  
    ans1+=(1/2.0)*pow(u,2.0);  
  ans1+=u;  
   return ans1-ans;*/   
    
}   
double arctan(double(*f4)(double),double u,double d){   
 double result=0;   
 int n=100;   
 double delta=(u-d)/100.0;   
  for(double i=0;i<100;i++){   
      result+=f4(d+i*delta)*delta;   
   }   
  return result;   
        
}   
int main() {    
    int a;   
    double u,d;   
    while(cin>>a>>d>>u){   
     double sum1=0,sum2=0,sum3=0,sum4=0;   
        if(a==1){   
          sum1=mySin(fun1,u,d);   
          cout<<fixed<<setprecision(4)<<sum1<<endl;   
      }   
      else if(a==2){   
         sum2=myExp(fun2,u,d);   
          cout<<fixed<<setprecision(4)<<sum2<<endl;   
      }   
        else if(a==3){   
           sum3=poly(fun3,u,d);   
           cout<<fixed<<setprecision(4)<<sum3<<endl;   
      }   
      else{   
          sum4=arctan(fun4,u,d);   
         cout<<fixed<<setprecision(4)<<sum4<<endl;   
      }   
         
       
  }   
    return 0;           
}  
