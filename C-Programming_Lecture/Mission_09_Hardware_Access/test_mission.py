import subprocess

# CONFIGURATION
c_file = "3_engine_swap.c"
executable = "engine_tool"

print(f"🚀 Initializing Hardware Interface for {c_file}...")

# 1. Compile
try:
    subprocess.run(["gcc", c_file, "-o", executable], check=True)
except:
    print("❌ COMPILE ERROR. Check your syntax.")
    exit()

# 2. Run
try:
    process = subprocess.run([f"./{executable}"], capture_output=True, text=True, timeout=2)
    output = process.stdout.strip()
    
    print("--- OUTPUT LOG ---")
    print(output)
    print("------------------")

    # VALIDATION LOGIC
    # We check if the "After Fix" values are correct (Port=100, Starboard=10)
    if "Port: 100%" in output and "Starboard: 10%" in output:
        print("\n✅ PASS: Engines successfully swapped.")
    else:
        print("\n❌ FAIL: Engines are still mismatched.")
        print("Hint 1: Did you call the function like 'swap_engines(&x, &y)'?")
        print("Hint 2: Did you use '*a' inside the function?")
        
except Exception as e:
    print(f"\n❌ ERROR: {e}")