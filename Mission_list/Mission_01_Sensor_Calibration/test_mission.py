import subprocess

# CONFIGURATION
c_file = "3_uplink_task.c"
executable = "supply_calc"

# Scenario: We found "Mars Rocks". We found 10 of them. Each weighs 2.5 kg.
# Expected Total: 25.00 kg
input_data = "Mars Rocks\n10\n2.5\n"
expected_output = "25.00"

print(f"🚀 Initializing Simulation for {c_file}...")

# Compile
subprocess.run(["gcc", c_file, "-o", executable], check=True)

# Run
try:
    process = subprocess.run(
        [f"./{executable}"],
        input=input_data,
        capture_output=True,
        text=True,
        timeout=2
    )
    
    output = process.stdout
    print(f"\n--- ROVER OUTPUT ---\n{output}\n--------------------")

    if expected_output in output and "Mars Rocks" in output:
        print("\n✅ MISSION SUCCESS: Calculations are correct.")
    else:
        print(f"\n❌ MISSION FAILED: Expected total '{expected_output}' but didn't find it.")

except Exception as e:
    print(f"Error: {e}")