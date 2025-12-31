import subprocess

# CONFIGURATION
c_file = "3_terrain_analysis.c"
executable = "terrain_scanner"

print(f"🚀 Initializing Data Simulation for {c_file}...")

# 1. Compile
try:
    subprocess.run(["gcc", c_file, "-o", executable], check=True)
except:
    print("❌ COMPILE ERROR. Check your syntax.")
    exit()

# 2. Run
print("\n[TEST] Scanning Elevation Data...")

try:
    process = subprocess.run([f"./{executable}"], capture_output=True, text=True, timeout=2)
    output = process.stdout.strip()
    
    print("--- OUTPUT LOG ---")
    print(output)
    print("------------------")

    # VALIDATION LOGIC
    # The highest number in the array {50, 120, 85, 400, 210, 90} is 400.
    if "400" in output:
        print("\n✅ PASS: Highest peak (400m) identified correctly.")
    else:
        print("\n❌ FAIL: Did not find the highest peak.")
        print("Hint: Did you use an 'if' statement inside your loop?")
        
except Exception as e:
    print(f"\n❌ ERROR: {e}")