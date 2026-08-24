class Animal:
    def sound(self):
        print("Animal makes a sound")

# class Dog(Animal):
#     def sound(self):
#         print("Dog Barks")

# class Cat (Animal):
#     def sound(self):
#         print("Cat Meows!!")

class Lion (Animal):
    def sound(self):
        print("Lion Meows")

class Horse(Animal):
    def sound(self):
        print("Horse Neighs")


# dog = Dog()
# cat = Cat()
lion = Lion()
horse = Horse()

# dog.sound()
# cat.sound()
lion.sound()
horse.sound()
