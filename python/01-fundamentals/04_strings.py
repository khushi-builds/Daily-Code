"""String methods and operations"""

s = "Hello World"
print(s.lower(), s.upper(), s.split(), s.replace("o", "0"))
print(s[::-1])  # reverse
print(f"{s} has {len(s)} chars")
print("  trim  ".strip())
print(",".join(["a", "b", "c"]))