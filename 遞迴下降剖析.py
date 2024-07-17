try:
    while 1:
        ans = input()
        S = 'S'
        for x in range(len(ans)):
            if (ans[x] == '+'):
                S = S.replace('S', '+SS', 1)
            elif ans[x] == "-":
                S = S.replace('S', '-SS', 1)
            else:
                S = S.replace('S', 'a', 1)
        if S == ans:
            print("accept")
        else:
            print("error")
except:
    pass
