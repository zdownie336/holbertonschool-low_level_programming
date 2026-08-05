## Description of crash
The crash that occured was known as a segmentation fault. This error is when the program attempts to access memory that could either be out of bounds for the prorgram, a use after free which causes a severe crash or the program is trying to access memory it isn't allowed to. In this program it is caused due to mallocing a value of 0 to a pointer/array with no allowance for negative for n = 0, then proceeding to attempt to declare a value to nums[0], Thus causing the seg fault.

Valgrind error code
`==486088== Invalid write of size 4
==486088==    at 0x10928A: main (crash_example.c:32)
==486088==  Address 0x0 is not stack'd, malloc'd or (recently) free'd
==486088==
==486088==
==486088== Process terminating with default action of signal 11 (SIGSEGV)
==486088==  Access not within mapped region at address 0x0
==486088==    at 0x10928A: main (crash_example.c:32)
==486088==  If you believe this happened as a result of a stack
==486088==  overflow in your program's main thread (unlikely but
==486088==  possible), you can try to increase the size of the
==486088==  main thread stack using the --main-stacksize= flag.
==486088==  The main thread stack size used in this run was 8388608.`

## Root Cause:
Within the program, the value for n is hardcoded to n == 0, on line 25, on line 30, n is then put through the function allocate_numbers while still being valued at 0, thus causing the malloc to do 0 * sizeof int, this leads to problems because the array will have a size of 0, and then on line 32, attempting to initialise nums[0] with the value of 42, thus causing a segmentation fault when trying to access memory outside of scope because it doesn't exist

## Why the memory code is invalid?:
This isn't a heap or stack violation because in the valgrind summary code it states "Address 0x0 is not stack'd, malloc'd or (recently) free'd", meaning that it doesn't ever reach a freeing step or even the malloc because it has a value of 0 throughout the whole program, so when trying to malloc in the function, it doesn't reach this step because it doesn't pass the condition check, `if (n <= NULL)`. The funtion returns NULL to the main function and then attempts to write into a NULL array with no values, which is where the segmentation occurs.

## Ai suggestions
The ai suggestion provided was pointing the issue towards a mallocing problem, however, the system doesn't get past the conditional statement due to not passing the n <= 0 condition attached to it. leading to another unreliable response to it's suggestion.
