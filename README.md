# Queue_Cpp

# Theory : 

A **Queue** is a linear data structure that works on the **FIFO (First In, First Out)** principle.  
This means the element inserted first is the one that gets removed first.  
It contrasts with a **stack**, which follows **LIFO (Last In, First Out)**.

---

## Key Concepts
- **Front** → Position of the element to be removed (oldest element).  
- **Rear** → Position where the next element will be inserted.  
- **Enqueue (Insertion)** → Adds an element at the rear.  
- **Dequeue (Deletion)** → Removes an element from the front.  
- **Display** → Shows all elements in the queue.  

---

## Characteristics
- **Sequential Processing** → Elements are handled in the order they arrive.  
- **Restricted Operations** → Insertions only at the rear, deletions only from the front.  
- **Overflow** → Occurs when the queue is full and no more elements can be added.  
- **Underflow** → Occurs when the queue is empty and no element can be removed.  

---

## Types of Queues
- **Simple (Linear) Queue** → Insertion at rear, deletion from front.  
- **Circular Queue** → Solves space wastage problem of linear queues.  
- **Priority Queue** → Elements are dequeued based on priority rather than order.  
- **Deque (Double-Ended Queue)** → Allows insertion and deletion from both ends.  

> In this experiment, we focus on **Simple Queue using arrays**.

---

## Stack vs Queue

| Feature      | Stack (LIFO)           | Queue (FIFO)                |
|-------------|-----------------------|----------------------------|
| Insertion    | At the top            | At the rear                |
| Deletion     | From the top          | From the front             |
| Access Order | Last in, first out    | First in, first out        |
| Use Cases    | Function calls, undo  | Scheduling, buffering      |

---

## Program Summary
The program implements a **simple queue using arrays**.  
It supports **enqueue**, **dequeue**, and **display** operations, while checking for **overflow** and **underflow** conditions.

---

## Algorithm

**Start**  

**Initialize:** `front = -1`, `rear = -1`.

**Enqueue(value):**
1. If `rear == SIZE - 1`, print `"Overflow"`.  
2. Else, increment `rear`, insert `value` into `arr[rear]`.  
3. If `front == -1`, set `front = 0`.  

**Dequeue():**
1. If `front == -1` OR `front > rear`, print `"Underflow"`.  
2. Else, remove element at `arr[front]` and increment `front`.  

**Display():**
1. If queue is empty, print `"Queue is empty"`.  
2. Else, traverse from `front` to `rear` and print elements.  

Perform operations as per `main()`.  

**End**  


# Conclusion

This experiment provided a clear understanding of the **queue data structure** and its implementation using arrays in C++.

**Key observations:**
- The **FIFO (First In, First Out)** principle is effectively demonstrated.  
- **Overflow** occurs when attempting to insert into a full queue.  
- **Underflow** occurs when attempting to remove from an empty queue.  
- Class-based encapsulation in C++ simplifies queue operations and improves modularity.  

**Real-life applications of queues include:**
- CPU scheduling in operating systems.  
- Printer queue management.  
- Buffering in network communications.  
- Task scheduling systems.  

Queues are essential for managing sequential tasks efficiently and ensuring smooth operation in both software and hardware systems.

