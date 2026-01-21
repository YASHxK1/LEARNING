#typeanotation
age:int = 10 #If the int is not used, it will show the error in the editor and not in compiler. 
first_name:str='bob' #If the int is not used, it will show the error in the editor and not in compiler. 

################introducing f-string###################
#print ('Name: ' +first_name+', age' + age)#error
#insted of
#print ('Name: ' +first_name+', age' + str(age))

#use f-string
print(f'Name: {first_name}, age{age}')
