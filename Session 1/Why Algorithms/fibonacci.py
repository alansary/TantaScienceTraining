#!/usr/bin/env python3

sequence = {}
def fibonacci(n):
    if n in sequence: return sequence[n]
    else:
        if (n == 0):
            sequence[0] = 0
            return 0
        elif (n == 1):
            sequence[1] = 1
            return 1
        else:
            sequence[n] = sequence[n-1] + sequence[n-2]
            return sequence[n]

def main():
    n = int(input(""))
    for i in range(n+1):
        print("F({}): {}".format(i, fibonacci(i)))

if __name__ == "__main__": main()
