"""Functions: default args, *args/**kwargs, lambda, recursion, generators"""


def add(a, b=0):
    return a + b


def variadic(*args, **kwargs):
    return args, kwargs


# Lambda
square = lambda x: x ** 2


# Recursion
def factorial(n):
    return 1 if n <= 1 else n * factorial(n - 1)


# Generators
def gen_squares(n):
    for i in range(n):
        yield i ** 2


# *args/**kwargs unpacking
print(*[1, 2, 3])

if __name__ == "__main__":
    print(add(2, 3))
    print(variadic(1, 2, key="value"))
    print(square(5))
    print(factorial(5))
    print(list(gen_squares(5)))