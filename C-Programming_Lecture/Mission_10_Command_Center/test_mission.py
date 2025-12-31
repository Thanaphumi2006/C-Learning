import subprocess

# CONFIGURATION
c_file = "3_mission_control.c"
executable = "commander"

print(f"🚀 Initializing Capstone Simulation for {c_file}...")

# 1. Compile
try:
    subprocess.run(["gcc", c_file, "-o", executable], check=True)
except:
    print("❌ COMPILE ERROR. Check your syntax.")
    exit()

# 2. Run with Multiple Inputs
# We simulate typing: "1" (Enter), "2" (Enter), "4" (Enter)
input_sequence = "1\n2\n4\n"

try:
    process = subprocess.run(
        [f"./{executable}"], 
        input=input_sequence, 
        capture_output=True, 
        text=True, 
        timeout=2
    )
    output = process.stdout
    
    print("--- OUTPUT LOG ---")
    print(output)
    print("------------------")

    # VALIDATION LOGIC
    # Did it show status? Did it run diagnostics? Did it Shutdown?
    score = 0
    if "Battery: 98%" in output: score += 1
    if "Engines: OK" in output: score += 1
    if "Goodbye" in output: score += 1

    if score == 3:
        print("\n🏆 MISSION COMPLETE: You have mastered the basics of C!")
    else:
        print("\n❌ FAIL: The menu didn't handle all commands.")
        print("Did you implement Case 1, Case 2, and Case 4?")

except Exception as e:
    print(f"\n❌ ERROR: {e}")