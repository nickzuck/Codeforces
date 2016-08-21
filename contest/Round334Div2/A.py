m = map(int, raw_input().split())
w = map(int, raw_input().split())
sHack , uHack = map(int, raw_input().split())
score = 0 
maxScore = [500, 1000, 1500, 2000, 2500]
for i in range(5):
    t1 = (3*maxScore[i])/10
    t2 = ((250-m[i])*maxScore[i])/250 
    t2 -= 50*w[i]
    score += max(t1, t2)
score += sHack * 100
score += uHack * 50
print int(score)
