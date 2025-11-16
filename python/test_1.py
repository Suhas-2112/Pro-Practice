import random as rd

def choise():
    options = ["play","sleep","eat"]
    computer_choise = rd.choice(options)
    user_choise = input("Choose any of this play, sleep or eat\n")
    choises = {"player": user_choise,"computer": computer_choise}
    return choises

def check_win(player,computer):
    print("User chose " + player + " Computer chose "+computer)
    if player == computer:
        return "It's a tie"


print(check_win("eat","eat"))

#print()