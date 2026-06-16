"""Metaclasses and __init_subclass__"""


# Metaclasses
class Meta(type):
    def __new__(cls, name, bases, dct):
        dct['created_by'] = 'Meta'
        return super().__new__(cls, name, bases, dct)


class MyClass(metaclass=Meta):
    pass


# __init_subclass__ (plugin registry pattern)
class Plugin:
    registry = []

    def __init_subclass__(cls, **kwargs):
        super().__init_subclass__(**kwargs)
        Plugin.registry.append(cls)


class PluginA(Plugin):
    pass


class PluginB(Plugin):
    pass


if __name__ == "__main__":
    print(MyClass.created_by)  # "Meta"
    print(Plugin.registry)