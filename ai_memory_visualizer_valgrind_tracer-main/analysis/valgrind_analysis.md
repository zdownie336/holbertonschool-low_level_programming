
## Results for heap_example.c

==427904== HEAP SUMMARY:
==427904==     in use at exit: 6 bytes in 1 blocks
==427904==   total heap usage: 5 allocs, 4 frees, 1,066 bytes allocated
==427904==
==427904== 6 bytes in 1 blocks are definitely lost in loss record 1 of 1
==427904==    at 0x4846828: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==427904==    by 0x109211: person_new (heap_example.c:21)
==427904==    by 0x1092FA: main (heap_example.c:51)
==427904==
==427904== LEAK SUMMARY:
==427904==    definitely lost: 6 bytes in 1 blocks
==427904==    indirectly lost: 0 bytes in 0 blocks
==427904==      possibly lost: 0 bytes in 0 blocks
==427904==    still reachable: 0 bytes in 0 blocks
==427904==         suppressed: 0 bytes in 0 blocks
==427904==
==427904== ERROR SUMMARY: 1 errors from 1 contexts (suppressed: 0 from 0)

## Errors Explained:
`in use at exit`: this error details that there is still some dynamically allocated memory from malloc still in use, in this example, it can be found at line 51 main in heap_example. this line refers to the creation of the new structure for Alice. this issue is because it hasn't been freed and thus the memory is still being allocated. these bytes are apart of the "definitely lost" section, which is due to it not being freed therefore being lost once the function has ended. This loss would be preventable if the clear ownership and a command for freeing 'alice' instead of the extra function to do so.

using Chatgpt to determine and explain the error code, the ai got it's explination on why this occured. Chatgpt explained that it was due to a line never being free which waws correct, but didn't state that it was a "definitely lost" leak, which in some cases can cause problems because with the incorrect information, this could cause issues with how to solve the probelms.


## Results for aliasing_example.c
==428379== HEAP SUMMARY:
==428379==     in use at exit: 0 bytes in 0 blocks
==428379==   total heap usage: 2 allocs, 2 frees, 1,044 bytes allocated
==428379==
==428379== All heap blocks were freed -- no leaks are possible
==428379==
==428379== ERROR SUMMARY: 3 errors from 3 contexts (suppressed: 0 from 0)
==428379==
==428379== 1 errors in context 1 of 3:
==428379== Invalid read of size 4
==428379==    at 0x109323: main (aliasing_example.c:45)
==428379==  Address 0x4a8548c is 12 bytes inside a block of size 20 free'd
==428379==    by 0x1092D1: main (aliasing_example.c:38)
==428379==  Block was alloc'd at
==428379==    by 0x1091E4: make_numbers (aliasing_example.c:12)
==428379==    by 0x109272: main (aliasing_example.c:30)
==428379==
==428379==
==428379== 1 errors in context 2 of 3:
==428379== Invalid write of size 4
==428379==    at 0x109315: main (aliasing_example.c:44)
==428379==  Address 0x4a8548c is 12 bytes inside a block of size 20 free'd
==428379==    by 0x1092D1: main (aliasing_example.c:38)
==428379==  Block was alloc'd at
==428379==    by 0x1091E4: make_numbers (aliasing_example.c:12)
==428379==    by 0x109272: main (aliasing_example.c:30)
==428379==
==428379==
==428379== 1 errors in context 3 of 3:
==428379== Invalid read of size 4
==428379==    at 0x1092F5: main (aliasing_example.c:42)
==428379==  Address 0x4a85488 is 8 bytes inside a block of size 20 free'd
==428379==    by 0x1092D1: main (aliasing_example.c:38)
==428379==  Block was alloc'd at
==428379==    by 0x1091E4: make_numbers (aliasing_example.c:12)
==428379==    by 0x109272: main (aliasing_example.c:30)
==428379==
==428379== ERROR SUMMARY: 3 errors from 3 contexts (suppressed: 0 from 0)

## Explination of errors:
`invalid read`: this error occurs when the function attemps to read values that either don't exist or aren't within the range it can look into. with aliasing_example.c, the program attemped to read of size 4, which following was 12 bytes inside of block size 20 of free'd memory. This occured due to previously freeing 'a' which had this value stored within it. so once freeing it, this caused the program to not be able to access it anymore.

`invalud write`: This error occurs due to trying to input or declare a value into a block it doesn't have access to, in this case, the function attempted to declare the value 1234 inside the alias 'b'. this cause problems due to being a use-after-free case on top of the function already had the values alloc'd previously to 'a', which 'b' was the alias for. 

## AI inaccuracies
Chatgpt explained how each of these errors occured and how they work. however, was persistent to state that the `invalid write of 4` was due to being written into alloc'd memory, which was incorrect due to this memory already being free'd. Meaning that this error was being caused by trying to input through an alias into an dangling pointer/free's memory.


