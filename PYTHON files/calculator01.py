def calculator():
    print("📱 Welcome to the Python Calculator")

    # Input numbers
    num1 = float(input("Enter the first number: "))
    num2 = float(input("Enter the second number: "))

    # Choose operation
    print("\nChoose operation:")
    print("1. ➕ Add")
    print("2. ➖ Subtract")
    print("3. ✖ Multiply")
    print("4. ➗ Divide")

    choice = input("Enter choice (1/2/3/4): ")

    # Perform calculation
    if choice == '1':
        result = num1 + num2
        print(f"\nResult: {num1} + {num2} = {result}")
    elif choice == '2':
        result = num1 - num2
        print(f"\nResult: {num1} - {num2} = {result}")
    elif choice == '3':
        result = num1 * num2
        print(f"\nResult: {num1} × {num2} = {result}")
    elif choice == '4':
        if num2 != 0:
            result = num1 / num2
            print(f"\nResult: {num1} ÷ {num2} = {result}")
        else:
            print("\n❌ Error: Cannot divide by zero.")
    else:
        print("\n❌ Invalid choice. Please select 1, 2, 3, or 4.")

# Run the calculator
calculator()
