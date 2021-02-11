#106616505	Feb/05/2021 23:35UTC+5.5	shamanthmuroor	118A - String Task	Python 3	Accepted	124 ms	0 KB

""" Question 118a: String Task
Petya started to attend programming lessons. On the first lesson 
his task was to write a simple program. The program was supposed 
to do the following: in the given string, consisting if uppercase 
and lowercase Latin letters, it:
- deletes all the vowels,
- inserts a character "." before each consonant,
- replaces all uppercase consonants with corresponding lowercase.
Vowels are letters "A", "O", "Y", "E", "U", "I", and the 
rest are consonants.  """

str = input().lower()
vowel = ['a', 'e', 'i', 'o', 'u', 'y'] #y is also included in the question for some reason
res = ""

for letter in str:
    if letter not in vowel:
        res = res + "." + letter

print(res)