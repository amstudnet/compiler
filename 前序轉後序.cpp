#include <sstream>          
#include <iostream>          
#include <cstring>  
#pragma GCC optimize("Ofast,unroll-loops,no-stack-protector,fast-math")    
# define NULL 0        
using namespace std;          
typedef struct {          
    int l, r;          
    int flag, num;          
} Node;          
Node Nd[1000];          
int size;          
stringstream sin;          
string ans[1000];          
int cnt;          
void pre_build(int idx);          
int main() {   
    ios::sync_with_stdio(0);  
    cin.tie(0);         
    int ch;          
    string line,s;          
    while(getline(cin, s)) {          
        for(int i = 0;i < 1000;i++)ans[i] = "";          
        cnt=0,size = 1;          
        sin.clear();               
        line.clear();      
        for(int i = 0;i < s.length();i++){      
            if(s[i]!=')'&&s[i]!='(')line += s[i];      
        }         
            sin << line;          
            pre_build(1);                   
            for(int i = 0;i < cnt;i ++){       
              if(i != cnt-1)cout<<ans[i]<<" ";          
                else cout<<ans[i]<<endl;      
           }                       
    }          
    return 0;          
}  
void pre_build(int idx) {          
    string tmp;          
    sin >> tmp;         
        if((tmp[0] > '9' || tmp[0] < '0') && tmp.length() == 1) {       
        Nd[idx].num = tmp[0];             
        Nd[idx].l = ++size;          
        pre_build(size);          
        Nd[idx].r = ++size;          
        pre_build(size);      
        ans[cnt++] = tmp[0];        
   }       
    else {        
        stringstream nin;          
       nin << tmp;          
       nin >> Nd[idx].num;      
       ans[cnt++]=to_string(Nd[idx].num);               
        Nd[idx].l = NULL;          
       Nd[idx].r = NULL;          
     }   
  
}  
//input:( + 1 ( - 20 3 ) )
//output:1 20 3 - +
