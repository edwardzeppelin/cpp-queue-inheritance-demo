# C++ Linked Queue & OOP Inheritance Demo

A C++ educational project demonstrating a custom dynamic linked-list **Queue** data structure, showcasing different Object-Oriented Programming (OOP) inheritance modes (`public`, `protected`, `private`) and queue processing analytics.

## Features

* **Custom Linked-List Queue**: Low-level queue implementation using dynamic nodes (`Node`) with `front` and `rear` pointers.
* **OOP Inheritance Demonstration**:
  * `myqueue1`: Demonstrates **Public** inheritance (`public myqueue`).
  * `myqueue2`: Demonstrates **Private** inheritance (`private myqueue`) with exposed interface methods.
  * `myqueue3`: Demonstrates **Protected** inheritance (`protected myqueue`) with re-exposed interface methods.
* **Queue Data Analytics**: Computes the average value of queue elements and finds the first element strictly greater than the mean (`process()`).
* **Queue Operations**: Supports element insertion, removal, printing, deep copying (`copyToQueue`), and merging (`merge`).
* **Interactive CLI Menu**: Console-driven user interface for interacting with the queue.

## Project Structure
.
├── main.cpp         # Interactive CLI menu and driver code
├── queue.h          # Base queue class declaration (myqueue)
├── queue.cpp        # Base queue methods implementation
├── queue1.h/.cpp    # Class with PUBLIC inheritance
├── queue2.h/.cpp    # Class with PRIVATE inheritance
└── queue3.h/.cpp    # Class with PROTECTED inheritance

## Class Architecture

| Class | Inheritance Mode | Description |
| :--- | :--- | :--- |
| `myqueue` | Base Class | Core queue implementation using dynamic linked nodes (`front`, `rear`, `cnt`). |
| `myqueue1` | `public myqueue` | Inherits all public members directly; adds `process()` logic. |
| `myqueue2` | `private myqueue` | Encapsulates base methods, selectively re-exporting necessary methods. |
| `myqueue3` | `protected myqueue` | Restricts access to derived classes while maintaining custom interface. |

## Processing Logic (`process()`)

The `process()` algorithm executes the following steps:
1. Traverses the queue to calculate the arithmetic mean (average) of all element values.
2. Traverses the queue a second time from `front` to `rear`.
3. Returns the **first element** whose value exceeds the calculated average.

## Building & Running

### Compilation
Compile all source files using any standard C++ compiler (e.g., `g++`):

```bash
g++ -O2 main.cpp queue.cpp queue1.cpp queue2.cpp queue3.cpp -o queue_app
```

### Execution
Run the compiled binary:

```bash
./queue_app
```

## Menu Options
1. Add element in queue: Push integer element to the rear.
2. Delete element from queue: Pop element from the front.
3. Print queue: Display current elements from front to rear.
4. Process queue: Calculate average and output the first element greater than average.
5. Make a copy of queue: Create a duplicate queue.
6. Union queues: Merge current queue with the copy.
7. Exit: Terminate program.
