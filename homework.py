import random

# Item e: Creating a simple list
my_list = [10, 20, 30, 40, 50]
print("Initial list elements:", my_list)

# Item g: Adding random numbers to the list
# Generates 5 random numbers between 1 and 100
my_list = [random.randint(1, 100) for _ in range(5)]
print("List with random numbers:", my_list)

# Item i: Sorting the list in ascending order
my_list.sort()
print("Sorted list:", my_list)