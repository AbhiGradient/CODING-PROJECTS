print("Hello, World!")

class OTT_subscription:
    def __init__(self, subscription_id, plan, total_payment):
        self.subscription_id = subscription_id
        self.plan = plan
        self.total_payment = total_payment

    def subscribe(self):
        print(f"Subscriber with {self.subscription_id} id subscribed to the {self.plan} plan")

    def unsubscribe(self):
        print(f"Subscriber with {self.subscription_id} id unsubscribed from the {self.plan} plan")


class Premium_subscription(OTT_subscription):
    def __init__(self, subscription_id, plan, total_payment, screens):
        super().__init__(subscription_id, plan, total_payment)
        self.max_screens = screens

    def set_max_screens(self, screens):
        self.max_screens = screens
        print(f"Max screens set to: {self.max_screens}")


# netflix_subscription = Premium_subscription("12345", "Premium", 15.99, 4)

# netflix_subscription.subscribe()
# netflix_subscription.set_max_screens(5)

netflix = OTT_subscription(123165, "monthly" , 4152)
netflix.plan
# netflix.subscribe()