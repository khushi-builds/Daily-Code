"""Lists, Tuples, Sets, Dictionaries, Comprehensions"""

# List
lst = [1, 2, 3]
lst.append(4)
lst.pop()
print(lst[1:3])
print([x**2 for x in range(5)])  # list comprehension

# Tuple
t = (1, 2, 3)

# Set
s = {1, 2, 3}
s.add(4)

# Dictionary
d = {"a": 1, "b": 2}
d["c"] = 3
for k, v in d.items():
    print(k, v)

# Dict comprehension
print({k: v * 2 for k, v in d.items()})