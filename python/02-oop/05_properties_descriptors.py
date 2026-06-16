"""Properties (getter/setter) and Descriptors"""


# Properties
class Temp:
    def __init__(self, c):
        self._c = c

    @property
    def fahrenheit(self):
        return self._c * 9 / 5 + 32

    @fahrenheit.setter
    def fahrenheit(self, f):
        self._c = (f - 32) * 5 / 9


# Descriptors
class Positive:
    def __set_name__(self, owner, name):
        self.name = "_" + name

    def __get__(self, obj, owner):
        return getattr(obj, self.name)

    def __set__(self, obj, value):
        if value < 0:
            raise ValueError("Must be positive")
        setattr(obj, self.name, value)


class Product:
    price = Positive()

    def __init__(self, price):
        self.price = price


# __slots__ (memory optimization)
class Point:
    __slots__ = ('x', 'y')

    def __init__(self, x, y):
        self.x = x
        self.y = y


if __name__ == "__main__":
    t = Temp(25)
    print(t.fahrenheit)
    t.fahrenheit = 100
    print(t._c)

    p = Product(50)
    print(p.price)

    pt = Point(1, 2)
    print(pt.x, pt.y)