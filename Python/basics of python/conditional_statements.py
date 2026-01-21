user_input: str = 'hello'

if user_input == 'hello':
    print("bot: hello!")
elif user_input == 'how are you':
    print("bot : good how about you?")
else:
    print("error")

#take user input
value: int = int(input('enter the number: '))
if value < 10:
    print(f'the value is less than 10 which is {value}')
elif value > 10:
    print(f'the value = {value} is more than 10')
else:
    print('the value is 10')

