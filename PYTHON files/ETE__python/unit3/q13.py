def rev_string(s):
    reversed_str = ""
    for ch in s:
        reversed_str = ch + reversed_str
    return reversed_str

text = input("Enter a string: ")
print(rev_string(text))
    

