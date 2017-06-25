from collections import OrderedDict
d = OrderedDict()
d[0] = "00:00"
d[1] = "01:10"
d[2] = "02:20"
d[3] = "03:30"
d[4] = "04:40"
d[5] = "05:50"
d[10] = "10:01"
d[11] = "11:11"
d[12] = "12:21"
d[13] = "13:31"
d[14] ="14:41"
d[15] = "15:51" 
d[20] = "20:02" 
d[21] = "21:12"
d[22] = "22:22"
d[23] = "23:32"

def calculate(h1, hours, m1, minutes):
    if(h1 > hours):
        ans = (h1-hours)*60 + m1-minutes
        return ans 
    else:
        ans = (24-hours)*60 + h1*60 + (m1-minutes)
        return ans 

hours,minutes = map(int, raw_input().split(":"))
if hours in d:
    hourTime = d[hours]
    h1, m1 = map(int, hourTime.split(":"))
    if minutes <= m1:
        ans = m1-minutes
    else:
        tempHour = (hours +1)%24
        while(True):
            if tempHour in d:
                hourTime = d[tempHour]
                h1,m1 = map(int, hourTime.split(":"))
                ans = calculate(h1, hours, m1, minutes)
                break
            tempHour = (tempHour+1)%24
else:
    tempHour = (hours +1)%24
    while(True):
        if tempHour in d:
            hourTime = d[tempHour]
            h1,m1 = map(int, hourTime.split(":"))
            # print h1, hours, m1, minutes
            ans = calculate(h1, hours, m1, minutes)
            break
        tempHour = (tempHour+1)%24
print ans 


