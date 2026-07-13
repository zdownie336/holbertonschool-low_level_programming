This document is my personal summary of what was learned this topic

Measurement Methodology:
the measurement methodology is about how to use timestamps to track the iterations and the time it takes for a program to execute. The best way to represent the time it takes to execute is using the float with .6 deciamls, because most of the time it takes around one hundredth to thousandth of a second to execute the program and return a result.

Observed Performance Difference:
throughout this project i learned that each of the programs, when you execute the back to back,you notice that the time it takes to execute it becomes quicker. However, on top of that, when you notice the conversion into seconds, each is all under a tenth of a second in execution time. This produces results that is easier to interpret instead of either a long string of numbers or a whole number in it's nano seconds.

these can be proven in the baseline loops markdown, this provides that it has the exact same iterations amount but each time it was ran, the program executed it faster and faster.

Relations between runtime and energy consumption:
Within the programs and the execution of these C files, the correlation of if someone has code that executes for longer periods and uses more iterations to do so, then it would lead to more energy and power being consumed

this is evident in the 2nd task where we compare two different algorithms, the first algorithm, the Naive, took on average 31 thousand times slower to execute compared to the single pass algorithm, which only took 0.000017 seconds.

Limitations of the Experiment:
this experiment had a limitation of that each user's operating system even if using linux, will all have different speeds for reading and executing such code.

For example, the time results for my executions of the program would differ from someone else's

some people will have code that executes faster because their device has stronger processing powers compared to mine.

another issue would be depending on what is running in the background of the pc would also affect the time to execute.

for example, the laptop this program was executed on has currently 7 apps working in the background at the moment, turning them off reduces the CPU's seperation of it's processing power, which in turn makes the program execute faster.



Practical Engineering Takeaway:
This project demonstrates how quick code is executed on and how different methods of writing these programs can change both the iteration amount and the time it takes to reach the results.

When writing code with 'bloat', this means that the program has more line to write through and then in turn, takes longer to execute. this can cause problems such as longer response times for the results in programs, even though it's only nano seconds, in a computer this can be a big difference.

an example is task two where the lengthier Naive code had more steps to go through, compared to the single pass algorithm has less, thus executing in a 0.000017 time. 
