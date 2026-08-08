def pali(s):
    return s == s[::-1]

text = input("Enter a string: ")
if pali(text):
    print("The string is a palindrome.")
else:
    print("The string is not a palindrome.")
    