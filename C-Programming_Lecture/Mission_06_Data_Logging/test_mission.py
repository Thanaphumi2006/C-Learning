import subprocess
import os

# CONFIGURATION
c_file = "3_black_box.c"
executable = "recorder"
target_file = "black_box.txt"

print(f"🚀 Initializing Data Logger Simulation for {c_file}...")

# 0. Cleanup old files
if os.path.exists(target_file):
    os.remove(target_file)

# 1. Compile
try:
    subprocess.run(["gcc", c_file, "-o", executable], check=True)
except:
    print("❌ COMPILE ERROR. Check your syntax.")
    exit()

# 2. Run the Student Code
try:
    subprocess.run([f"./{executable}"], capture_output=True, text=True, timeout=2)
except Exception as e:
    print(f"❌ EXECUTION ERROR: {e}")
    exit()

# 3. VERIFY FILE CREATION
print(f"\n[TEST] Searching for {target_file} on disk...")

if os.path.exists(target_file):
    print("✅ PASS: File was created successfully.")
    
    # 4. VERIFY CONTENT
    with open(target_file, "r") as f:
        content = f.read()
    
    print("\n--- FILE CONTENT ---")
    print(content)
    print("--------------------")
    
    if "CRITICAL FAILURE" in content and "MAYDAY" in content:
        print("✅ PASS: Crash report saved correctly.")
    else:
        print("❌ FAIL: File exists, but the text inside is wrong.")
else:
    print("❌ FAIL: The file 'black_box.txt' was not found.")
    print("Hint: Did you call fopen(\"black_box.txt\", \"w\")?")