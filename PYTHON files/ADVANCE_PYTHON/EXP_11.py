try:
    num = int(input("Enter a number: "))

    file = open("exp_11.txt", "r")
    print(file.read())

    file.close()

except ValueError:
    print("Error: Please enter a valid integer.")

except FileNotFoundError:
    print("Error: File not found.")

except Exception as e:
    print("Error:", e)