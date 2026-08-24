class Vehicle:
    def __init__(self, brand):
        self.brand = brand

    def show_brand(self):
        print(f"Brand: {self.brand}")

class Car(Vehicle):
    def __init__(self, brand, model):
        super().__init__(brand)
        self.model = model

    def show_model(self):
        print(f"Model: {self.model}")

class ElectricCar(Car):
    def __init__(self, brand, model, battery_capacity):
        super().__init__(brand, model)
        self.battery_capacity = battery_capacity

    def show_details(self):
        self.show_brand()       # Access grandparent property
        self.show_model()       # Access parent property
        print(f"Battery Capacity: {self.battery_capacity} kWh")

ec = ElectricCar("TATA", "Model S", 100)
ec.show_details()
