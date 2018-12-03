#BINARY SEARCH IN AN ARRAY...............

#__________________________________________________________________________________
class abc(object):
    def __init__(self):
        self.n=int(input("Enter no of items in the list: "))
        self.l=[]
        self.take()

    def take(self):
        for i in range(self.n):
            self.l+=[int(input("Enter the value: "))]

        print ("The list u entered is: ",self.l)
        print()
        self.l.sort()
        print ("The sorted list is: ",self.l)
        self.search()

    def search(self):
        flag=0
        a=int(input("Enter the value to search: "))
        beg=0
        end=self.n-1
        while beg<end:
            mid=(beg+end)//2
            if self.l[mid]>a:
                end=mid-1
            elif self.l[mid]<a:
                beg=mid+1
            elif self.l[mid]==a:
                print ("Search item found.")
                print ("Found at ",mid+1," position.")
                flag=1
                break
        if flag==0:
            print ("Search unsuccesfull.")

obj=abc()
