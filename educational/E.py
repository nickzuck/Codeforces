x1, y1, x2, y2 = map(int, raw_input().split())
delX = (x2-x1)+1
delY = (y2-y1) -1 
ans = ((delX*delY) - ((delX)/2))
print ans
