import subprocess

# CONFIGURATION
c_file = "3_password_lock.c"
executable = "security_gate"

print(f"🚀 Initializing Security Simulation for {c_file}...")

# 1. Compile
try:
    subprocess.run(["gcc", c_file, "-o", executable], check=True)
except:
    print("❌ COMPILE ERROR. Check your syntax.")
    exit()

# --- TEST 1: WRONG PASSWORD ---
try:
    print("\n[TEST 1] Trying 'WrongPass'...")
    process = subprocess.run([f"./{executable}"], input="WrongPass\n", capture_output=True, text=True, timeout=1)
    
    if "ALARM" in process.stdout or "Intruder" in process.stdout:
        print("✅ PASS: Intruder detected correctly.")
    else:
        print("❌ FAIL: System allowed wrong password!")

except Exception as e:
    print(f"❌ ERROR: {e}")

# --- TEST 2: CORRECT PASSWORD ---
try:
    print("\n[TEST 2] Trying 'Alpha'...")
    process = subprocess.run([f"./{executable}"], input="Alpha\n", capture_output=True, text=True, timeout=1)
    
    if "Access Granted" in process.stdout or "Welcome" in process.stdout:
        print("✅ PASS: Access Granted correctly.")
    else:
        print("❌ FAIL: System rejected the correct password.")
        print("Hint: Did you use strcmp(input, code) == 0 ?")

except Exception as e:
    print(f"❌ ERROR: {e}")