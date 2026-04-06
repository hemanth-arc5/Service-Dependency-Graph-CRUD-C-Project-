#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 50
struct Node {
    char service[MAX];
    struct Node* next;
};
struct Graph {
    int numVertices;
    char services[MAX][MAX];
    struct Node* adjList[MAX];
};
// Create graph
struct Graph* createGraph() {
    struct Graph* graph = (struct Graph*)malloc(sizeof(struct Graph));
    graph->numVertices = 0;

    for (int i = 0; i < MAX; i++)
        graph->adjList[i] = NULL;

    return graph;
}
// Find service index
int findService(struct Graph* graph, char service[]) {
    for (int i = 0; i < graph->numVertices; i++) {
        if (strcmp(graph->services[i], service) == 0)
            return i;
    }
    return -1;
}
// Add service (CREATE)
void addService(struct Graph* graph, char service[]) {
    if (findService(graph, service) != -1) {
        printf("Service already exists!\n");
        return;
    }

    strcpy(graph->services[graph->numVertices], service);
    graph->numVertices++;
    printf("Service added successfully!\n");
}
// Create node
struct Node* createNode(char service[]) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    strcpy(newNode->service, service);
    newNode->next = NULL;
    return newNode;
}
// Add dependency (CREATE)
void addDependency(struct Graph* graph, char src[], char dest[]) {
    int srcIndex = findService(graph, src);
    int destIndex = findService(graph, dest);

    if (srcIndex == -1 || destIndex == -1) {
        printf("Service not found!\n");
        return;
    }

    struct Node* newNode = createNode(dest);
    newNode->next = graph->adjList[srcIndex];
    graph->adjList[srcIndex] = newNode;

    printf("Dependency added!\n");
}
// Display graph (READ)
void displayGraph(struct Graph* graph) {
    printf("\nService Dependency Graph:\n");

    for (int i = 0; i < graph->numVertices; i++) {
        printf("%s -> ", graph->services[i]);

        struct Node* temp = graph->adjList[i];
        while (temp) {
            printf("%s -> ", temp->service);
            temp = temp->next;
        }
        printf("NULL\n");
    }
}
// Delete dependency helper
void removeDependencies(struct Graph* graph, char service[]) {
    for (int i = 0; i < graph->numVertices; i++) {
        struct Node* temp = graph->adjList[i];
        struct Node* prev = NULL;

        while (temp) {
            if (strcmp(temp->service, service) == 0) {
                if (prev == NULL)
                    graph->adjList[i] = temp->next;
                else
                    prev->next = temp->next;

                free(temp);
                break;
            }
            prev = temp;
            temp = temp->next;
        }
    }
}
// Delete service (DELETE)
void deleteService(struct Graph* graph, char service[]) {
    int index = findService(graph, service);

    if (index == -1) {
        printf("Service not found!\n");
        return;
    }
// Remove all dependencies pointing to it
    removeDependencies(graph, service);
// Free its list
    struct Node* temp = graph->adjList[index];
    while (temp) {
        struct Node* next = temp;
        temp = temp->next;
        free(next);
    }
// Shift services
    for (int i = index; i < graph->numVertices - 1; i++) {
        strcpy(graph->services[i], graph->services[i + 1]);
        graph->adjList[i] = graph->adjList[i + 1];
    }

    graph->numVertices--;
    printf("Service deleted!\n");
}
// Update service (UPDATE)
void updateService(struct Graph* graph, char oldName[], char newName[]) {
    int index = findService(graph, oldName);

    if (index == -1) {
        printf("Service not found!\n");
        return;
    }

    strcpy(graph->services[index], newName);
 // Update dependencies
    for (int i = 0; i < graph->numVertices; i++) {
        struct Node* temp = graph->adjList[i];
        while (temp) {
            if (strcmp(temp->service, oldName) == 0) {
                strcpy(temp->service, newName);
            }
            temp = temp->next;
        }
    }

    printf("Service updated!\n");
}
// Search service
void searchService(struct Graph* graph, char service[]) {
    int index = findService(graph, service);

    if (index == -1) {
        printf("Service not found!\n");
        return;
    }

    printf("%s depends on: ", service);
    struct Node* temp = graph->adjList[index];

    while (temp) {
        printf("%s ", temp->service);
        temp = temp->next;
    }
    printf("\n");
}
 
int main() {
    struct Graph* graph = createGraph();
    int choice;
    char src[MAX], dest[MAX];

    while (1) {
        printf("\n1.Add Service\n2.Add Dependency\n3.Delete Service\n4.Update Service\n5.Search\n6.Display\n7.Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter service name: ");
                scanf("%s", src);
                addService(graph, src);
                break;

            case 2:
                printf("Enter source service: ");
                scanf("%s", src);
                printf("Enter dependent service: ");
                scanf("%s", dest);
                addDependency(graph, src, dest);
                break;

            case 3:
                printf("Enter service to delete: ");
                scanf("%s", src);
                deleteService(graph, src);
                break;

            case 4:
                printf("Enter old name: ");
                scanf("%s", src);
                printf("Enter new name: ");
                scanf("%s", dest);
                updateService(graph, src, dest);
                break;

            case 5:
                printf("Enter service to search: ");
                scanf("%s", src);
                searchService(graph, src);
                break;

            case 6:
                displayGraph(graph);
                break;

            case 7:
                exit(0);

            default:
                printf("Invalid choice!\n");
        }
    }
}