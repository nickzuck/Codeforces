s = raw_input()
move = 8
if (s[0] == 'a' or s[0] == 'h') and (s[1] != '1' or s[1] != '8'):
    move -= 3
if (s[1] =='1' or s[1] == '8') and (s[0] != 'a' or s[0] != 'h'):
    move -= 3
if (s[1] =='1' or s[1] == '8') and (s[0] == 'a' or s[0] == 'h'):
    move = 3
print move

