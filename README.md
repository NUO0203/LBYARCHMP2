**Analysis Report for Execuion Time**

**Debug Mode:**

In debug mode, the Assembly implementation consistently outperforms the C implementation across all vector sizes. This is likely due to the fact that Assembly allows for more direct control over the hardware, leading to more efficient code execution. However, the lack of compiler optimizations in debug mode can lead to slower execution times compared to release mode.


For a vector size of 2^20; The Assembly code is roughly 3.35 times faster than the C code. This significant speedup could be attributed to the efficient use of registers and the direct manipulation of memory in the Assembly code. The lower-level control provided by Assembly allows for optimizations that are not possible in a higher-level language like C.

For a vector size of 2^24; The speedup factor decreases slightly to around 3.06. This could be due to increased cache misses as the vector size grows, which can impact the performance of both implementations. However, the Assembly code still outperforms the C code, demonstrating its efficiency in handling larger data sets.

For a vector size of 2^26; The speedup factor increases again to around 3.63. This suggests that the Assembly code scales better with larger vector sizes, possibly due to more efficient memory access patterns or better utilization of CPU resources. This scalability is crucial for performance-critical applications that need to process large amounts of data.





**Release Mode:**

In release mode, the execution times are generally faster compared to debug mode. This is expected, as release mode enables compiler optimizations that can significantly improve performance.

For a vector size of 2^20; The Assembly code is roughly 1.51 times faster than the C code. While the speedup is less pronounced than in debug mode, the Assembly code still performs better. This shows that even with compiler optimizations, the Assembly code can still provide a performance advantage.


For a vector size of 2^24; The speedup factor decreases slightly to around 1.47. As with debug mode, this could be due to increased cache misses as the vector size grows. However, the fact that the Assembly code still outperforms the C code demonstrates its efficiency.

For a vector size of 2^26; The speedup factor increases to around 2.39. Again, this suggests that the Assembly code scales better with larger vector sizes. This scalability is crucial in release mode, where performance is often a key consideration.



**Analysis Report for Kernel**

**Assembly Kernel:** leverages low-level hardware control and direct memory manipulation, which can lead to more efficient code execution. The use of SIMD (Single Instruction, Multiple Data) instructions allows the program to perform operations on multiple data points simultaneously, which can significantly improve performance for large data sets. However, writing and maintaining Assembly code can be complex and error-prone, and it requires a deep understanding of the hardware and the specific instruction set architecture.

**C Kernel:** while not as fast as the Assembly kernel in your tests, offers advantages in terms of readability, maintainability, and portability. The higher-level abstractions in C make the code easier to write and understand, and the code can be compiled and run on a wide variety of hardware platforms. However, because C is a higher-level language, it does not offer the same degree of control over the hardware as Assembly, which can lead to less efficient execution for certain tasks.

**Summary:**

It's also worth noting that while the Assembly code is faster, it is also likely to be more complex and harder to maintain than the equivalent C code. Therefore, the decision to use Assembly should be based on a careful consideration of the trade-offs involved. Factors such as the performance requirements of the application, the available development resources, and the maintainability of the code should all be taken into account.

Furthermore, it’s important to remember that these results are specific to the particular system and environment in which the tests were run. Performance can be influenced by many factors, including the specific hardware, the operating system, the compiler, and the runtime environment. Therefore, it’s always a good idea to thoroughly test and benchmark your code under realistic conditions to understand its performance characteristics.


ii **Screenshot of the program output with the correctness check (C)**

<img width="974" alt="Screenshot 2024-04-02 at 7 22 38 PM" src="https://github.com/NUO0203/LBYARCHMP2/assets/114644434/6661cd71-922e-446d-ab8e-066277a4191b">

iii **Screenshot of the program output with the correctness check (x86-64)**

![432744597_1156014305412730_6648406650937021570_n](https://github.com/NUO0203/LBYARCHMP2/assets/114644434/94106aaf-dadb-4069-b2b5-33ab8f840aae)
