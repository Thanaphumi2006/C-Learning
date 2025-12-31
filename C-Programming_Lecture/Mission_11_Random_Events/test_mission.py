import subprocess

# CONFIGURATION
c_file = "3_meteor_shower.c"
executable = "meteor_sim"

print(f"🚀 Initializing Simulation for {c_file}...")

# 1. Compile
try:
    subprocess.run(["gcc", c_file, "-o", executable], check=True)
except:
    print("❌ COMPILE ERROR. Check your syntax.")
    exit()

# 2. Run Twice to check for randomness
output1 = subprocess.run([f"./{executable}"], capture_output=True, text=True).stdout
output2 = subprocess.run([f"./{executable}"], capture_output=True, text=True).stdout

print("--- RUN 1 OUTPUT ---")
print(output1.strip())
print("--------------------")

# VALIDATION
if output1 == output2:
    print("\n❌ FAIL: The numbers are identical every time.")
    print("Did you forget 'srand(time(NULL))'?")
elif "SHIELD ACTIVE" in output1 or "Harmless" in output1:
    print("\n✅ PASS: Simulation is running and unpredictable.")
else:
    print("\n❌ FAIL: Logic error. Didn't see 'SHIELD ACTIVE' or 'Harmless'.")