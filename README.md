**Analysis Report for Execuion Time**
**Debug Mode:**
In debug mode, the Assembly implementation is consistently faster than the C implementation across all vector sizes. This is likely due to the fact that Assembly allows for more direct control over the hardware, which can lead to more efficient code execution.

For a vector size of 2^20
  The Assembly code is roughly 3.35 times faster than the C code. This significant speedup could be attributed to the efficient use of registers and the direct manipulation of memory in the Assembly code.

For a vector size of 2^24
  The speedup factor decreases slightly to around 3.06. This could be due to increased cache misses as the vector size grows, which can impact the performance of both implementations. However, the Assembly code still outperforms the C code.

For a vector size of 2^26
  The speedup factor increases again to around 3.63. This suggests that the Assembly code scales better with larger vector sizes, possibly due to more efficient memory access patterns or better utilization of CPU resources.


**Release Mode:**
In release mode, the execution times are generally faster compared to debug mode. This is expected, as release mode enables compiler optimizations that can significantly improve performance.

For a vector size of 2^20
  The Assembly code is roughly 1.51 times faster than the C code. While the speedup is less pronounced than in debug mode, the Assembly code still performs better.

For a vector size of 2^24
  The speedup factor decreases slightly to around 1.47. As with debug mode, this could be due to increased cache misses as the vector size grows.

For a vector size of 2^26
  The speedup factor increases to around 2.39. Again, this suggests that the Assembly code scales better with larger vector sizes.


**Analysis Report for Kernel**
**Assembly Kernel:**
  The Assembly kernel leverages low-level hardware control and direct memory manipulation, which can lead to more efficient code execution. The use of SIMD (Single Instruction, Multiple Data) instructions allows the program to perform operations on multiple data points simultaneously, which can significantly improve performance for large data sets. However, writing and maintaining Assembly code can be complex and error-prone, and it requires a deep understanding of the hardware and the specific instruction set architecture.

**C Kernel:**
  The C kernel, while not as fast as the Assembly kernel in your tests, offers advantages in terms of readability, maintainability, and portability. The higher-level abstractions in C make the code easier to write and understand, and the code can be compiled and run on a wide variety of hardware platforms. However, because C is a higher-level language, it does not offer the same degree of control over the hardware as Assembly, which can lead to less efficient execution for certain tasks.

**Summary:**

From these results, we can conclude that the Assembly implementation consistently outperforms the C implementation across all tested vector sizes and in both debug and release modes. However, the degree of speedup varies depending on the specific circumstances.

It’s also worth noting that while the Assembly code is faster, it is also likely to be more complex and harder to maintain than the equivalent C code. Therefore, the decision to use Assembly should be based on a careful consideration of the trade-offs involved.



ii
** Screenshot of the program output with the correctness check (C)**
<img width="974" alt="Screenshot 2024-04-02 at 7 22 38 PM" src="https://github.com/NUO0203/LBYARCHMP2/assets/114644434/6661cd71-922e-446d-ab8e-066277a4191b">

iii
** Screenshot of the program output with the correctness check (x86-64)**
<img width="965" alt="Screenshot 2024-04-02 at 7 22 51 PM" src="https://github.com/NUO0203/LBYARCHMP2/assets/114644434/9645c119-3d0e-40dd-b030-8cb3e8774323">
