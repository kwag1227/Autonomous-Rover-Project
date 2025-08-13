import time
import os

# ANSI escape sequences for colors
RED = "\033[91m"
GREEN = "\033[92m"
RESET = "\033[0m"

try:
    while True:
        # Clear the terminal
        os.system("clear")  # use "cls" if testing on Windows
        print(RED + "BLINK" + RESET)
        time.sleep(0.5)
        
        os.system("clear")
        print(GREEN + "BLINK" + RESET)
        time.sleep(0.5)

except KeyboardInterrupt:
    os.system("clear")
    print("Test ended.")
