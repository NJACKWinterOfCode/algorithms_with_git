#Python program for Optimized Dynamic Programming solution
#to calculate Binomial Coefficient.
#This one uses the concept of Pascal Triangle and less memory.

def binomialCoeff(n,k):

    #Declaring empty array.
    table = [0 for i in xrange(k+1)]

    #initializing the value of nC0 as 1.
    table[0] = 1
    
    for i in range(1,n+1):

        #Compute the next row of the pascal triangle
        #using previous row.
        j = min(i ,k)

        while (j>0):
            table[j] = table[j] + table[j-1]
            j -= 1
    return table[k]

n,k = map(int,raw_input().split())
print binomialCoeff(n,k)
