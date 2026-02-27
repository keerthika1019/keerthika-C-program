roll = int(input())
a, b, c = map(int, input().split())
total = a + b + c
average = total / 3.0
print("Roll Number:", roll)
print("Total Marks:", total)
print("Average Marks: {:.2f}".format(average))