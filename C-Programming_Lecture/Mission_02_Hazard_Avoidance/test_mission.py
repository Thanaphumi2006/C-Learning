import subprocess

# CONFIGURATION
c_file = "3_auto_pilot.c"
executable = "auto_pilot"

print(f"🚀 Initializing Navigation Simulation for {c_file}...")

# 1. Compile
try:
    subprocess.run(["gcc", c_file, "-o", executable], check=True)
except subprocess.CalledProcessError:
    print("❌ COMPILE ERROR: Your code has syntax errors. Fix them and try again.")
    exit()

# --- TEST CASE 1: EMERGENCY STOP ---
# Distance = 2m, Size = 1. Expect: "EMERGENCY STOP"
input_1 = "2\n1\n"
print("\n[TEST 1] Testing Impact Range (2 meters)...")

try:
    process = subprocess.run([f"./{executable}"], input=input_1, capture_output=True, text=True)
    if "EMERGENCY STOP" in process.stdout:
        print("✅ PASS: Rover stopped correctly.")
    else:
        print("❌ FAIL: Rover crashed! Expected output containing 'EMERGENCY STOP'.")
        print(f"   Your Output: {process.stdout.strip()}")
except:
    print("❌ ERROR: Could not run Test 1.")

# --- TEST CASE 2: TURN LEFT ---
# Distance = 15m, Size = 2. Expect: "Turn Left"
input_2 = "15\n2\n"
print("\n[TEST 2] Testing Huge Rock (15 meters)...")

try:
    process = subprocess.run([f"./{executable}"], input=input_2, capture_output=True, text=True)
    if "Turn Left" in process.stdout:
        print("✅ PASS: Rover avoided the obstacle.")
    else:
        print("❌ FAIL: Rover hit the huge rock! Expected output containing 'Turn Left'.")
        print(f"   Your Output: {process.stdout.strip()}")
except:
    print("❌ ERROR: Could not run Test 2.")