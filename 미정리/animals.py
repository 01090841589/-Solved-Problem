class Animal:
    def __init__(self,name):
        self.name=name

    def walk(self):
        print(f'{self.name}! 걷는다!')

    def eat(self):
        print(f'{self.name}! 먹는다')

class Dog(Animal):
    def walk(self):
        print(f'{self.name}! 달린다')
    def run(self):
        print(f'{self.name}! 달린다')
class Bird(Animal):
    def fly(self):
        print(f'{self.name}! 푸드덕')

dog = Dog('멍멍이')
dog.walk()
dog.run()
bird = Bird('구구')
bird.walk()
bird.eat()
bird.fly()