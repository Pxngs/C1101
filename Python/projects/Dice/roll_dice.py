import random

def roll_one_dice():
    """Simulates the roll of a single six-sided die."""
    min_val = 1
    max_val = 6
    while True:
        roll_again = input("Ready to roll? (yes/no): ").lower()
        if roll_again == "yes" or roll_again == "":
            print("Rolling the die...")
            print(f"The value is: {random.randint(min_val, max_val)}")
        elif roll_again == "no":
            print("Thanks for playing!")
            break
        else:
            print("Invalid input. Please type 'yes' or 'no'.")

# Call the function to run the simulator
roll_one_dice()
