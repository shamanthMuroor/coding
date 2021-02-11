#106479062	Feb/04/2021 22:55UTC+5.5	shamanthmuroor	71A - Way Too Long Words	Python 3	Accepted	62 ms	0 KB

""" Question 71a: Way Too Long Words
Let's consider a word too long, if its length is strictly more than 10 characters. 
All too long words should be replaced with a special abbreviation.
This abbreviation is made like this: we write down the first and the 
last letter of a word and between them we write the number of letters 
between the first and the last letters. That number is in decimal system 
and doesn't contain any leading zeroes.
Thus, "localization" will be spelt as "l10n", 
and "internationalization» will be spelt as "i18n". """


n = int(input())
while n > 0:
    word = input()
    new_word = word
    if len(word) > 10:
        new_word = word[0] + str(len(word)-2) + word[len(word)-1]
    print(new_word) 
    n -= 1
