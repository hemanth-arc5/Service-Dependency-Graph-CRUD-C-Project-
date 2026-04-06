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
## Basic Idea(graph)

<img width="1200" height="800" alt="image" src="https://github.com/user-attachments/assets/d31862d3-9d7b-4a2c-b52e-8641cb02524d" />



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
## Code Output

* Main Menu

<img width="160" height="156" alt="Screenshot 2026-04-06 211013" src="https://github.com/user-attachments/assets/9432e293-37ab-4d72-9a7c-d7e002c65a8f" />

* Add Service

<img width="248" height="67" alt="Screenshot 2026-04-06 210255" src="https://github.com/user-attachments/assets/b7ac6a0a-4732-43ee-ab99-1547c85dd925" />

* Add Dependency

<img width="249" height="89" alt="Screenshot 2026-04-06 210331" src="https://github.com/user-attachments/assets/9007ad1d-9b9f-4428-8e2a-6b0d858982b3" />
 
* Delete Service 

<img width="160" height="156" alt="image" src="https://github.com/user-attachments/assets/f31a609d-d75c-4765-a5b6-da2fd8dc13a3" />

* Update Srevice

<img width="178" height="91" alt="Screenshot 2026-04-06 210451" src="https://github.com/user-attachments/assets/3018ac37-8247-4605-bef8-6717c860e44b" />


** Before
 
<img width="233" height="139" alt="Screenshot 2026-04-06 210357" src="https://github.com/user-attachments/assets/491ca49b-53d8-47e9-86e1-2290ff24720e" />

** After

<img width="233" height="63" alt="Screenshot 2026-04-06 210504" src="https://github.com/user-attachments/assets/e81a4ec2-c002-4830-bb2b-0aeb5c6698e9" />

* Search Service

<img width="251" height="65" alt="Screenshot 2026-04-06 210528" src="https://github.com/user-attachments/assets/4537eedc-52b2-4efc-a98e-7764504cfbba" />

* Display

<img width="233" height="63" alt="Screenshot 2026-04-06 210504" src="https://github.com/user-attachments/assets/3fd879b7-dfee-48bc-867c-0250ceb647b2" />

* Exist

<img width="149" height="44" alt="Screenshot 2026-04-06 210717" src="https://github.com/user-attachments/assets/492a0485-a833-4dec-8736-b9a694f2c4de" />






