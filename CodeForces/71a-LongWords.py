n = int(input())
while n > 0:
    word = input()
    new_word = word
    if len(word) > 10:
        new_word = word[0] + str(len(word)-2) + word[len(word)-1]
    print(new_word) 
    n -= 1
