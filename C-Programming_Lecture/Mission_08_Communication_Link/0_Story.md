Here is the narrative briefing for **Mission 8**.

**Mission 08: Communication Link (String Logic)**

**The Story:**
The Rover's antenna has picked up a high-frequency transmission from an unidentified source. The Onboard Operating System has automatically triggered a "Lockdown Mode" to prevent potential hacking. To regain control of the vehicle, you must manually bypass the security firewall.

The system requires a specific text-based "Handshake Code" to verify your identity. However, because C handles text as raw memory arrays, you cannot simply check if `password == "Alpha"`. You must write a script that analyzes the memory bit-by-bit to confirm the credentials match exactly.

**The Objective:**

* Initialize the security terminal.
* Capture the user's input string.
* Use `strcmp` (String Compare) to verify if the input matches the classified code: **"Alpha"**.
* If valid, print "Access Granted." If not, trigger the "Intruder Alert."

**Coding Skills:**

* String Libraries (`<string.h>`)
* String Comparison (`strcmp`)
* Security Logic (`if/else` with text)