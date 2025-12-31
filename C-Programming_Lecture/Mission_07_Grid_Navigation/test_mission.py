import subprocess

# CONFIGURATION
c_file = "3_hazard_map.c"
executable = "scanner_bot"

print(f"🚀 Initializing Grid Simulation for {c_file}...")

# 1. Compile
try:
    subprocess.run(["gcc", c_file, "-o", executable], check=True)
except:
    print("❌ COMPILE ERROR. Check your syntax (braces and semicolons).")
    exit()

# 2. Run
try:
    process = subprocess.run([f"./{executable}"], capture_output=True, text=True, timeout=2)
    output = process.stdout.strip()
    
    print("--- OUTPUT LOG ---")
    print(output)
    print("------------------")

    # VALIDATION LOGIC
    # We look for "Row: 3" and "Col: 2"
    if "Row: 3" in output and "Col: 2" in output:
        print("\n✅ PASS: Alien Artifact successfully located!")
    else:
        print("\n❌ FAIL: Coordinates not found or incorrect.")
        print("Expected: Row 3, Col 2.")
        print("Did you check if terrain[row][col] == 2?")
        
except Exception as e:
    print(f"\n❌ ERROR: {e}")