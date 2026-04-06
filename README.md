 ## Service Dependency Graph CRUD (C Project)

##  Team Members

* Hemanth
* Vishanu

---

##  Project Title

**Service Dependency Graph CRUD**

---

## Problem Statement

In modern cloud environments, multiple services depend on each other. Managing these dependencies is critical to ensure system stability.
This project implements a **Service Dependency Graph** using C to efficiently manage service relationships with full CRUD operations.

---

##  Real-World Application

This system simulates cloud infrastructure (like AWS, Azure, Kubernetes), where:

* Services depend on other services
* Failure in one service affects others
* Dependency tracking is essential

---

##  Data Structure Used

**Graph (Adjacency List Representation)**

* Each node represents a **service**
* Each edge represents a **dependency**
* Implemented using:

  * `struct`
  * Linked Lists
  * Dynamic Memory Allocation (`malloc`, `free`)

---

## Features (CRUD Operations)

###  Create

* Add new service
* Add dependency between services

###  Read

* Display all services and dependencies
* Search for a service

###  Update

* Rename an existing service
* Automatically updates dependencies

###  Delete

* Remove a service
* Remove all related dependencies

---

##  Menu Options

1. Add Service
2. Add Dependency
3. Delete Service
4. Update Service
5. Search Service
6. Display Graph
7. Exit

---

##  System Design

* Graph implemented using adjacency list
* Array stores service names
* Linked list stores dependencies

Example:
Auth → Database → Logging
Payment → Auth

---

##  Algorithm Overview

### Add Service

* Check if service exists
* Insert into array

### Add Dependency

* Find source & destination
* Add node to linked list

### Delete Service

* Remove all incoming edges
* Free memory
* Shift array

### Display Graph

* Traverse adjacency list
* Print dependencies

---

##  Compilation & Execution

```bash
gcc main.c -o project
./project
```

---

##  Sample Output

```
1.Add Service
2.Add Dependency
3.Delete Service
4.Update Service
5.Search
6.Display
7.Exit

Auth -> Database -> NULL
Payment -> Auth -> NULL
```

---

##  Project Structure

```
project/
 ├── src/
 │   └── main.c
 ├── docs/
 │   └── project_report.pdf
 ├── ppt/
 │   └── presentation.pptx
 ├── README.md
 └── sample_output.txt
```

---

##  Technologies Used

* C Programming Language
* GCC Compiler
* Data Structures (Graph, Linked List)

---

##  Demo Video

 Google Drive Link: *(-----------)*

---

##  Future Enhancements

* Graphical User Interface (GUI)
* Cycle detection in dependencies
* Real-time cloud integration
* Visualization of graph

---

##  Conclusion

This project demonstrates how graphs can be used to efficiently manage service dependencies in cloud systems. It provides a practical implementation of CRUD operations using C and dynamic memory allocation.

---



* Data Structures in C – Books
* Online tutorials on Graphs
* Cloud architecture documentation

---
