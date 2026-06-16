"""Classes: instance variables, class variables, static/class methods, __str__"""


class Animal:
    species_count = 0  # class variable

    def __init__(self, name, sound):
        self.name = name
        self.sound = sound
        Animal.species_count += 1

    def make_sound(self):
        return f"{self.name} says {self.sound}"

    def __str__(self):
        return f"Animal({self.name})"

    @staticmethod
    def info():
        return "Animals make sounds"

    @classmethod
    def from_dict(cls, d):
        return cls(d["name"], d["sound"])


if __name__ == "__main__":
    a = Animal("Cat", "Meow")
    print(a)
    print(a.make_sound())
    print(Animal.info())
    b = Animal.from_dict({"name": "Cow", "sound": "Moo"})
    print(b.make_sound())
    print("Total animals:", Animal.species_count)