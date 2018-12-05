#                                   SELECTION SORT
#--------------------------------------------------------------------------------------------
class prac(object):
    def __init__(self):
        self.l=[]
        self.n=input("Enter for no of elements: ")

    def work(self):
        for i in range(self.n):
            self.l+=[int(input("Enter value: "))]
        print ("The Array so far made is: ")
        print (self.l)

        for i in range(self.n):
            small=i
            temp=self.l[i]
            for j in range(i,self.n):
                if self.l[small]>self.l[j]:
                    small=j
            self.l[i]=self.l[small]
            self.l[small]=temp

        print ("The sorted Array is : ")
        p_str=str()
        for j in self.l:
            p_str+=str(j)+" "
        print (p_str)
obj=prac()
obj.work()
