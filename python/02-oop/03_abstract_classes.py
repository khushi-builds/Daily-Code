"""Abstract Base Classes (ABC)"""

from abc import ABC, abstractmethod


class Shape(ABC):
    @abstractmethod
    def area(self):
        pass


class Circle(Shape):
    def __init__(self, r):
        self.r = r

    def area(self):
        return 3.14 * self.r ** 2


if __name__ == "__main__":
    c = Circle(5)
    print(c.area())

    # Shape()  # Raises TypeError - can't instantiate abstract class
    