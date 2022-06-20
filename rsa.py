
p = 2
n = 99677
# --------------------------------


# Checking if a number is prime or not
def prime(num):
    if num > 1:

        # Iterate from 2 to n / 2
        for i in range(2, int(num/2)+1):

            # If num is divisible by any number between
            # 2 and n / 2, it is not prime
            if (num % i) == 0:
                return False
        else:
            return True

    else:
        return False

# End-of-function


# This loop cheks if there is a prime number which can divide n
while (n % p != 0 or prime(p) == False):
    p += 1

q = n/p
Z = (p-1) * (q-1)

# Printing P and Z
print("P: ", p)
print("z: ", Z)

# Finding E and D
e = 2
k = Z + 1
while (k % e != 0):
    if (e == k-1):
        e = 2
        k += Z
    e += 1

# Finding E e K
print("Valor: ", e)
print("K", k)
