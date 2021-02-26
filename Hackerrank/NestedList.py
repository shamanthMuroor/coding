# Nested List

# Given the names and grades for each student in a class of N 
# students, store them in a nested list and print the name(s) 
# of any student(s) having the second lowest grade.

# Note: If there are multiple students with the second lowest 
# grade, order their names alphabetically and print each name 
# on a new line.

n = int(input())
marksheet = []
for _ in range(n):
    marksheet.append([input(), float(input())]) 

second_highest = sorted(list(set([marks for name, marks in marksheet])))[1]

print('\n'.join([a for a, b in sorted(marksheet) if b == second_highest]))

# all_marks.sort()
# for i in range(len(all_marks)):
#     if all_marks[i]!=all_marks[i+1]:
#         for i in records:
#             if all_marks[1] != i[1]:
#                 break
#             else:
#                 nm.append(i[0])
#         break

# for i in sorted(nm):
#     print(i)