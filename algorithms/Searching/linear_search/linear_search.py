def search(arr, x): 
  
    for i in range(len(arr)): 
  
        if arr[i] == x: 
            return i 
  
    return -1

print("Enter array elements separated by space")
arr = [int(x) for x in input().split()]
print("Enter element to search")
k=int(input())
pos=search(arr, k)
if pos==-1:
        print("Element Not found")
else:
        print("Element found at position: "+str(pos+1))

