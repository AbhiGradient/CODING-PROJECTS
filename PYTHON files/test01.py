import json
import random
from datetime import datetime, timedelta

# Generate a random IP address
def generate_ip():
    return ".".join(str(random.randint(0, 255)) for _ in range(4))

# Generate a random login time within the past 7 days
def random_login_time():
    now = datetime.now()
    delta = timedelta(days=random.randint(0, 7), hours=random.randint(0, 23), minutes=random.randint(0, 59))
    return (now - delta).strftime("%Y-%m-%d %H:%M:%S")

# Generate fake users
def generate_fake_logs(num_users=5):
    users = ["alice", "bob", "charlie", "dave", "eve", "frank", "grace", "heidi"]
    logs = []

    for _ in range(num_users):
        log = {
            "username": random.choice(users),
            "login_time": random_login_time(),
            "ip_address": generate_ip()
        }
        logs.append(log)

    return logs

# Save logs to a file
def save_logs_to_file(logs, filename="user_logs.json"):
    with open(filename, "w") as f:
        json.dump(logs, f, indent=4)

# Read logs from a file
def read_logs_from_file(filename="user_logs.json"):
    with open(filename, "r") as f:
        return json.load(f)

# Main
if __name__ == "__main__":
    logs = generate_fake_logs(10)
    save_logs_to_file(logs)
    print("Fake user logs written to file.\nReading back:")
    
    saved_logs = read_logs_from_file()
    for log in saved_logs:
        print(f"{log['username']} logged in at {log['login_time']} from {log['ip_address']}")

