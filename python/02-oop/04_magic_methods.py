"""Magic Methods / Dunder Methods - full operator overloading set"""


class Vector:
    def __init__(self, x, y):
        self.x, self.y = x, y

    # Arithmetic
    def __add__(self, other):
        return Vector(self.x + other.x, self.y + other.y)

    def __sub__(self, other):
        return Vector(self.x - other.x, self.y - other.y)

    def __mul__(self, scalar):
        return Vector(self.x * scalar, self.y * scalar)

    def __truediv__(self, scalar):
        return Vector(self.x / scalar, self.y / scalar)

    def __neg__(self):
        return Vector(-self.x, -self.y)

    def __abs__(self):
        return (self.x ** 2 + self.y ** 2) ** 0.5

    # Comparison
    def __eq__(self, other):
        return self.x == other.x and self.y == other.y

    def __lt__(self, other):
        return abs(self) < abs(other)

    def __le__(self, other):
        return abs(self) <= abs(other)

    # Representation
    def __repr__(self):
        return f"Vector({self.x}, {self.y})"

    # Container-like behavior
    def __len__(self):
        return int((self.x ** 2 + self.y ** 2) ** 0.5)

    def __getitem__(self, i):
        return (self.x, self.y)[i]

    def __iter__(self):
        return iter((self.x, self.y))

    def __contains__(self, item):
        return item in (self.x, self.y)

    # Misc
    def __bool__(self):
        return self.x != 0 or self.y != 0

    def __hash__(self):
        return hash((self.x, self.y))


if __name__ == "__main__":
    v1 = Vector(1, 2)
    v2 = Vector(3, 4)
    print(v1 + v2)
    print(v1 - v2)
    print(v1 * 2)
    print(v1 == Vector(1, 2))
    print(abs(v2))
    print(list(v1))
    print(1 in v1)