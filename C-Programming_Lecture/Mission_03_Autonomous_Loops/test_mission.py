import subprocess

# CONFIGURATION
c_file = "3_launch_countdown.c"
executable = "launch_system"

print(f"🚀 Initializing Countdown Simulation for {c_file}...")

# 1. Compile
try:
    subprocess.run(["gcc", c_file, "-o", executable], check=True)
except:
    print("❌ COMPILE ERROR. Check your syntax (semicolons, brackets).")
    exit()

# --- TEST CASE: Countdown from 3 ---
input_val = "3\n"
print("\n[TEST] Testing Countdown from 3...")

try:
    # We set a timeout of 2 seconds to catch Infinite Loops
    process = subprocess.run([f"./{executable}"], input=input_val, capture_output=True, text=True, timeout=2)
    output = process.stdout.strip()
    
    print("--- OUTPUT LOG ---")
    print(output)
    print("------------------")

    # VALIDATION LOGIC
    # We expect to see 3, then 1, then LIFTOFF.
    if "T-Minus 3" in output and "T-Minus 1" in output and "LIFTOFF" in output:
        print("\n✅ PASS: Countdown sequence verified.")
    else:
        print("\n❌ FAIL: Sequence incomplete.")
        print("Did you remember to decrease the variable (t_minus--) inside the loop?")
        
except subprocess.TimeoutExpired:
    print("\n❌ FAIL: Infinite Loop Detected!")
    print("The program ran forever and had to be killed.")
    print("Hint: Did you forget to change the value of 't_minus' inside the curly braces?")