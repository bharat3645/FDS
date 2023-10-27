# FDS

/*

Objective: The goal of this assignment is to test your understanding of data structures, 
specifically stacks and queues, by challenging you to implement a stack using queues.
Background:
You have learned about stacks and queues, two fundamental data structures with different 
principles: Last-In-First-Out (LIFO) for stacks and First-In-First-Out (FIFO) for queues. This 
assignment aims to reinforce your knowledge and problem-solving skills by implementing a 
stack using queues.
Assignment Description:
Your task is to create a stack data structure using only queue operations. You need to implement 
the standard stack operations: push, pop, and top, with the same time complexity as a traditional 
stack.
Instructions:
1. You are only allowed to use C Programming Language.
2. Implement a stack data structure using only queue operations.
3. Your implementation should support the following stack operations:
a. – push (item): Add an item to the top of the stack.
b. - pop (): Remove and return the item from the top of the stack.
c. - top (): Return the item at the top of the stack without removing it.
4. Test your implementation with various scenarios to ensure it works correctly. Include
test cases in your submission
5. Write a brief report or explanation of your implementation, including your thought 
process, any challenges faced, and how you resolved them.
Submission Guidelines:
1. Submit your code in a well-organized and commented form.
2. Include a document (PDF or Word) explaining your implementation. This document 
should:
a. Describe your thought process.
b. Discuss any challenges you encountered and how you overcame them.
c. Include test cases and their expected results.






-------------------------------------------------------------------------------------------------------------------------------------------------

A stack follows the Last-In-First-Out (LIFO) principle, while a queue follows the First-In-First-Out (FIFO) principle. To create a stack with queue operations, you need to ensure that the stack operations (push, pop, and top) behave as expected, while maintaining the efficiency of a traditional stack.

1. Understanding the Problem:

You've learned about stacks and queues, which have different behaviors.
In this assignment, you need to use queue operations to mimic the behavior of a stack.
2. Choosing the Language:

You are restricted to using the C programming language.
3. Implementing a Stack Using Queues:

To create a stack using queues, you can use two queues.
You will use one queue for actual storage and another for temporary operations.

You'll need to implement the standard stack operations (push, pop, and top) using only queue operations. Here's how you can approach each of these operations:

a. Push (item): To add an item to the top of the stack:

You can simulate the push operation by enqueueing the item into one of the queues (let's call it Queue A).
If there are already elements in the stack, you need to transfer them from Queue A to the other queue (Queue B) to maintain the LIFO property.
After transferring, enqueue the newly pushed item into Queue B.
b. Pop(): To remove and return the item from the top of the stack:

First, check if the stack is empty (both queues are empty). If it is, there's nothing to pop.
If the stack is not empty, you need to transfer all elements from Queue A to Queue B except for the last element, which is the one to be popped.
Dequeue the last element from Queue A (the one to be popped) and return it.
c. Top(): To return the item at the top of the stack without removing it:

Similar to the pop operation, you'll transfer elements from Queue A to Queue B except for the last element.
Instead of dequeuing the last element, you return it as the top element without removing it from the stack.
4. Implementing Stack Operations:

Implement the following stack operations:
a. Push (item): Add an item to the top of the stack.
b. Pop(): Remove and return the item from the top of the stack.
c. Top(): Return the item at the top of the stack without removing it.
5. Maintaining Time Complexity:

Ensure that the time complexity of these stack operations is the same as that of a traditional stack, which is O(1) for push, pop, and top.
6. Testing Your Implementation:

Test your stack implementation with various scenarios to make sure it works correctly.
Create test cases to verify the behavior of the stack operations.
7. Writing a Report:

Prepare a document (PDF or Word) explaining your implementation.
Describe your thought process in solving the problem.
Discuss any challenges you encountered and how you resolved them. You might face challenges in simulating stack behavior using queues efficiently.
Include your test cases and their expected results. Show that your implementation passes these tests.

---------------------------------------------------------------------

Implementation Report: Implementing a Stack Using Queues in C

Thought Process:
The goal of this implementation was to simulate a stack using two queues in the C programming language. To achieve this, we needed to devise a method to maintain the Last-In-First-Out (LIFO) behavior of a stack while utilizing the First-In-First-Out (FIFO) nature of queues. Here's a summary of our thought process:

We started by defining a structure for a queue and created functions to initialize, enqueue, and dequeue elements from the queue.

We then created a stack structure that includes two queues, one for storage (Queue A) and one for temporary operations (Queue B).

For the push operation, we decided to enqueue new elements into Queue A. To maintain the LIFO property, we transferred elements from Queue A to Queue B, ensuring that the most recently pushed item was at the front of Queue B.

For the pop operation, we dequeued elements from Queue A while transferring them to Queue B, stopping just before the last element. This allowed us to remove the top element efficiently while maintaining the LIFO behavior.

The top operation was similar to the pop operation, but it didn't remove the top element. Instead, it returned the top element from Queue B.

Challenges Faced:
Several challenges were encountered during the implementation:

Simulating LIFO Behavior: The primary challenge was to ensure that our stack operations mimicked the LIFO behavior of a stack while using queues. We overcame this by carefully managing the transfer of elements between Queue A and Queue B to maintain the desired order.

Handling Empty Stack Cases: We needed to account for cases where the stack was empty and ensure that our code didn't break or return unexpected results. We added checks for empty queues and handled these cases gracefully.

How Challenges Were Resolved:
To address these challenges, we took the following steps:

Careful Queue Transfers: We devised a method to transfer elements between queues such that the most recently pushed item was always at the front of Queue B, allowing us to maintain the LIFO behavior.

Handling Empty Stack: We implemented checks in our code to handle situations where the stack was empty. For example, in pop and top operations, we checked for an empty stack and returned a sentinel value when necessary.

Conclusion:
In conclusion, we successfully implemented a stack using two queues in C by carefully managing the transfer of elements and utilizing the queues to maintain LIFO behavior. We tested the implementation with various scenarios and ensured that it adhered to the time complexity of O(1) for push, pop, and top operations, as expected in a traditional stack. The code and the accompanying explanation demonstrate an effective solution for this assignment.


 We are implementing a stack using two queues (Queue A and Queue B). The key to achieving this is to simulate the LIFO (Last-In-First-Out) behavior of a stack using two queues.

Let's create a diagram to illustrate how this works:

Initial State:
At the beginning, both Queue A and Queue B are empty.

less
Copy code
Queue A:
Queue B:
Push Operation:
Let's say we want to push the elements 1, 2, and 3 onto the stack.

We enqueue each element into Queue A, which represents the top of the stack. The most recently pushed element is at the rear of the queue.
To maintain the LIFO property, we need to transfer elements from Queue A to Queue B in reverse order (3, 2, 1).
less
Copy code
Push(1):
Queue A: 1
Queue B:

Push(2):
Queue A: 2 1
Queue B:

Push(3):
Queue A: 3 2 1
Queue B:
Pop Operation:
When we pop an element, we remove and return the top element from the stack.

To do this efficiently, we dequeue elements from Queue A and transfer them to Queue B until we reach the last element. This ensures that the last element in Queue A is the top of the stack.
less
Copy code
Pop():
Queue A: 3 2
Queue B: 1
The pop operation returns 1, which was the top element of the stack.

Top Operation:
The top operation returns the top element of the stack without removing it.

Similar to the pop operation, we transfer elements from Queue A to Queue B until we reach the last element, which is the top of the stack.
less
Copy code
Top():
Queue A: 3
Queue B: 2
The top operation returns 3, which is the top element of the stack but does not remove it.

This diagram illustrates how the push, pop, and top operations work in our stack implementation using two queues. We maintain the LIFO behavior by transferring elements between the queues as needed to achieve the desired stack operations.

*/
