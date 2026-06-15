"""Control Flow: if-elif-else, loops, ternary"""

# if-elif-else
x = 10
if x > 0:
    print("positive")
elif x == 0:
    print("zero")
else:
    print("negative")

# Loops
for i in range(5):
    if i == 3:
        continue
    print(i)

i = 0
while i < 5:
    i += 1
    if i == 4:
        break

# Ternary
y = "even" if x % 2 == 0 else "odd"
print(y)