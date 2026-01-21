# Example 1 
a,b =10,'five'
try:
    print(a+b)
except TypeError as e:
    print('TypeError encounterd please enter the integer')
except Exception as e:
    print("error")

print ("programm continues.....")

# Example 
a,b =10,5
try:
    print(a+b)
except TypeError as e:
    print('TypeError encounterd please enter the integer')
except Exception as e:
    print("error")

print ("programm continues.....")
