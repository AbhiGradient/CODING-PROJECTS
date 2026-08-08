def str_len(s):
    count = 0
    for ch in s:
        count += 1
    return count
text = input("Enter a string: ")
length = str_len(text)
print("The length of the string is:", length)