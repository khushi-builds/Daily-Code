"""Inheritance, method overriding, super()"""


class Animal:
    def __init__(self, name, sound):
        self.name = name
        self.sound = sound

    def make_sound(self):
        return f"{self.name} says {self.sound}"


# Inheritance
class Dog(Animal):
    def __init__(self, name):
        super().__init__(name, "Woof")

    def make_sound(self):  # override
        return super().make_sound() + "!"


if __name__ == "__main__":
    d = Dog("Rex")
    print(d.make_sound())