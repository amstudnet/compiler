while 1:     
        s=input()
        s1=s.replace('id','a')
        flag=1
        for i in range(len(s1)-1):
            if s1[i]=='a' and s1[i+1]=='a':
                flag=0
                break
        for i in range(len(s1)-1):
            if s1[i] in ['+','-','*','/'] and s1[i+1] in ['+','-','*','/']:
                flag=0
                break
        if flag==1:
            s=s.replace('id','111').replace('/','//')   
            if len(s)==1 and s!='id':  
                print('Error')  
                continue  
            if len(s)==1 and s=='id':
                print('Accept')
                continue
            try:  
                ans=eval(s)   
                print('Accept')  
            except:  
                print('Error')
        else:
            print('Error')
