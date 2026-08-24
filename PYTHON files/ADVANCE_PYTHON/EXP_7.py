def count_vowels_consonants_spaces(filename):
    vowels = "aeiouAEIOU"
    vowel_count = consonant_count = space_count = 0

    with open(filename, "r") as file:
        text = file.read()

        for char in text:
            if char in vowels:
                vowel_count += 1
            elif char.isalpha():
                consonant_count += 1
            elif char.isspace():
                space_count += 1

    print(f"Vowels: {vowel_count}")
    print(f"Consonants: {consonant_count}")
    print(f"Spaces: {space_count}")


count_vowels_consonants_spaces("sample.txt")