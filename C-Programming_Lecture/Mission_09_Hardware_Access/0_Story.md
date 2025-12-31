Mission 09: Hardware Access (Pointers)

The Story: A critical wiring error has been detected in the Rover’s propulsion system. The Port (Left) and Starboard (Right) thruster controls are crossed. When the navigation computer requests "100% Power" to the Left engine, it is accidentally being sent to the Right engine. This is causing the Rover to spin in circles instead of driving straight.

Because the variables port_engine and starboard_engine are deeply embedded in the main system memory, you cannot simply overwrite them with new variables. You must create a "Hardware Patch" that reaches directly into the memory addresses of these specific variables and swaps their values permanently.

The Objective:

Access the specific Memory Addresses (&) of the two engine variables.

Write a function called swap_engines that accepts these addresses as "Keys" (Pointers).

Use Dereferencing (*) to physically swap the power levels inside the memory slots.

Coding Skills:

Pointers (int *ptr)

The Address Operator (&)

The Dereference Operator (*)

Pass-by-Reference (Modifying variables inside a function)