p = int(input("Enter the prime number: "))

def prime(p):
    for n in range(2,p-1):
        if (p % n) == 0:
            return False
    else:
        return True
print (prime(p))