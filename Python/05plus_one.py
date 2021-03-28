digits=input()
digits=digits.split(" ")
digits=[eval(i) for i in digits]

digits[len(digits)-1] += 1

print(digits)

