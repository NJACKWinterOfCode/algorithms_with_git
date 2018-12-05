# fibonacci series 0 1 1 2 3 5 8 13 ...........

def call (trm):
    a=0
    b=1
    print (a)
    print (b)
    for i in range (0,trm-2):
        sum=a+b
        a=b
        b=sum
        print (sum)

def main():
    trm=int(input("Enter no of times "))
    call(trm)

main()
