hour, minute = map(int, input().split())

totalMinute = hour * 60 + minute

time = totalMinute - 45

if time < 0:
    time = 60 * 24 + time

print(int(time / 60), time % 60)
