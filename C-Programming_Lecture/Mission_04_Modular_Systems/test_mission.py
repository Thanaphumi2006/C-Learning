import subprocess
import os

# CONFIGURATION
c_file = "3_converter_patch.c"
executable = "converter_tool"

print(f"🚀 Initializing Module Simulation for {c_file}...")

# 1. READ STUDENT CODE
try:
    with open(c_file, 'r') as f:
        content = f.read()
except:
    print(f"❌ ERROR: Could not find {c_file}")
    exit()

# 2. INJECT TEST HARNESS
# We replace their 'main' with a strict testing 'main'
test_main = """
int main() {
    // TEST 1: 32F should be 0C
    float t1 = to_celsius(32.0);
    
    // TEST 2: 100C should be 212F
    float t2 = to_fahrenheit(100.0);
    
    printf("TEST1:%.2f\\n", t1);
    printf("TEST2:%.2f\\n", t2);
    return 0;
}
"""

# Logic to swap the main function
try:
    student_logic = content.split("int main()")[0] + content.split("return 0;", 1)[1].replace("}", "", 1)
    full_code = student_logic + "\n" + test_main
except IndexError:
    print("❌ PARSING ERROR: Do not delete 'int main()' or 'return 0;' from your file!")
    exit()

# Save temp file
with open("temp_test.c", "w") as f:
    f.write(full_code)

# 3. COMPILE & RUN
try:
    subprocess.run(["gcc", "temp_test.c", "-o", executable], check=True)
    process = subprocess.run([f"./{executable}"], capture_output=True, text=True)
    output = process.stdout
    
    print("\n--- TEST REPORT ---")
    
    if "TEST1:0.00" in output:
        print("✅ Function 'to_celsius' is CORRECT.")
    else:
        print(f"❌ FAIL: 'to_celsius' math is wrong. (Input 32F -> Expected 0.00C)")
        
    if "TEST2:212.00" in output:
        print("✅ Function 'to_fahrenheit' is CORRECT.")
    else:
        print(f"❌ FAIL: 'to_fahrenheit' math is wrong. (Input 100C -> Expected 212.00F)")

except subprocess.CalledProcessError:
    print("❌ COMPILE ERROR: Your syntax is broken. Did you forget a semicolon or brace?")

# Clean up
if os.path.exists("temp_test.c"): os.remove("temp_test.c")
if os.path.exists(executable): os.remove(executable)