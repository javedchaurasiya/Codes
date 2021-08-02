
#include <bits/stdc++.h>
using namespace std;
# define INF INT_MAX

int d;
int p[200000][5]; 
int sum=0;
struct AdjListNode { 
	int dest; 
	int weight; 
	struct AdjListNode* next; 
}; 
struct AdjList { 
	struct AdjListNode* head;
}; 
struct Graph { 
	int V; 
	struct AdjList* array; 
}; 

struct AdjListNode* newAdjListNode(int dest, int weight) 
{ 
	struct AdjListNode* newNode = (struct AdjListNode*)malloc(sizeof(struct AdjListNode)); 
	newNode->dest = dest; 
	newNode->weight = weight; 
	newNode->next = NULL; 
	return newNode; 
}  
struct Graph* createGraph(int V) 
{ 
	struct Graph* graph = (struct Graph*)malloc(sizeof(struct Graph)); 
	graph->V = V; 
	graph->array = (struct AdjList*)malloc(V * sizeof(struct AdjList)); 
	for (int i = 0; i < V; ++i) 
		graph->array[i].head = NULL; 

	return graph; 
} 
void addEdge(struct Graph* graph, int src, int dest, int weight) 
{
	struct AdjListNode* newNode = newAdjListNode(dest, weight); 
	newNode->next = graph->array[src].head; 
	graph->array[src].head = newNode; 
	newNode = newAdjListNode(src, weight); 
	newNode->next = graph->array[dest].head; 
	graph->array[dest].head = newNode; 
} 
struct MinHeapNode { 
	int v; 
	int key; 
}; 
struct MinHeap { 
	int size;
	int capacity;
	int* pos;
	struct MinHeapNode** array; 
}; 
struct MinHeapNode* newMinHeapNode(int v, int key) 
{ 
	struct MinHeapNode* minHeapNode = (struct MinHeapNode*)malloc(sizeof(struct MinHeapNode)); 
	minHeapNode->v = v; 
	minHeapNode->key = key; 
	return minHeapNode; 
} 
struct MinHeap* createMinHeap(int capacity) 
{ 
	struct MinHeap* minHeap = (struct MinHeap*)malloc(sizeof(struct MinHeap)); 
	minHeap->pos = (int*)malloc(capacity * sizeof(int)); 
	minHeap->size = 0; 
	minHeap->capacity = capacity; 
	minHeap->array = (struct MinHeapNode**)malloc(capacity * sizeof(struct MinHeapNode*)); 
	return minHeap; 
} 
void swapMinHeapNode(struct MinHeapNode** a, struct MinHeapNode** b) 
{ 
	struct MinHeapNode* t = *a; 
	*a = *b; 
	*b = t; 
} 
void minHeapify(struct MinHeap* minHeap, int idx) 
{ 
	int smallest, left, right; 
	smallest = idx; 
	left = 2 * idx + 1; 
	right = 2 * idx + 2; 

	if (left < minHeap->size && minHeap->array[left]->key < minHeap->array[smallest]->key) 
		smallest = left; 

	if (right < minHeap->size && minHeap->array[right]->key < minHeap->array[smallest]->key) 
		smallest = right; 

	if (smallest != idx) { 
		MinHeapNode* smallestNode = minHeap->array[smallest]; 
		MinHeapNode* idxNode = minHeap->array[idx]; 
		minHeap->pos[smallestNode->v] = idx; 
		minHeap->pos[idxNode->v] = smallest; 
		swapMinHeapNode(&minHeap->array[smallest], &minHeap->array[idx]); 

		minHeapify(minHeap, smallest); 
	} 
} 
int isEmpty(struct MinHeap* minHeap) 
{ 
	return minHeap->size == 0; 
}  
struct MinHeapNode* extractMin(struct MinHeap* minHeap) 
{ 
	if (isEmpty(minHeap)) 
		return NULL; 
	struct MinHeapNode* root = minHeap->array[0]; 
	struct MinHeapNode* lastNode = minHeap->array[minHeap->size - 1]; 
	minHeap->array[0] = lastNode; 
	minHeap->pos[root->v] = minHeap->size - 1; 
	minHeap->pos[lastNode->v] = 0; 
	--minHeap->size; 
	minHeapify(minHeap, 0); 

	return root; 
} 
void decreaseKey(struct MinHeap* minHeap, int v, int key) 
{ 
	int i = minHeap->pos[v];  
	minHeap->array[i]->key = key;  
	while (i && minHeap->array[i]->key < minHeap->array[(i - 1) / 2]->key) { 
		minHeap->pos[minHeap->array[i]->v] = (i - 1) / 2; 
		minHeap->pos[minHeap->array[(i - 1) / 2]->v] = i; 
		swapMinHeapNode(&minHeap->array[i], &minHeap->array[(i - 1) / 2]); 
		i = (i - 1) / 2; 
	} 
}  
bool isInMinHeap(struct MinHeap* minHeap, int v) 
{ 
	if (minHeap->pos[v] < minHeap->size) 
		return true; 
	return false; 
} 
void PrimMST(struct Graph* graph) 
{ 
	int V = graph->V;
	int parent[V]; 
	int key[V];
	struct MinHeap* minHeap = createMinHeap(V); 
	for (int v = 1; v < V; ++v) { 
		parent[v] = -1; 
		key[v] = INT_MAX; 
		minHeap->array[v] = newMinHeapNode(v, key[v]); 
		minHeap->pos[v] = v; 
	} 
	key[0] = 0; 
	minHeap->array[0] = newMinHeapNode(0, key[0]); 
	minHeap->pos[0] = 0; 
	minHeap->size = V; 
	while (!isEmpty(minHeap)) { 
		struct MinHeapNode* minHeapNode = extractMin(minHeap); 
		int u = minHeapNode->v;
		struct AdjListNode* pCrawl = graph->array[u].head; 
		while (pCrawl != NULL) { 
			int v = pCrawl->dest; 
			if (isInMinHeap(minHeap, v) && pCrawl->weight < key[v]) { 
				key[v] = pCrawl->weight; 
				parent[v] = u; 
				decreaseKey(minHeap, v, key[v]); 
			} 
			pCrawl = pCrawl->next; 
		} 
	} 
    for(int itr =1;itr<V;itr++)
    sum += -1*(key[itr]);
    printf(" %d\n",sum); 
} 
int wt(int x,int y)
{
    int dis=0,i;
    for(i=0;i<d;i++)
    {
        dis += abs(p[x][i]-p[y][i]); 
    }
    return dis;
}


int main() 
{ 
    int i,j,V;
    scanf(" %d %d",&V,&d);
    struct Graph* graph=createGraph(V);
    for(i=0;i<V;i++)
    {
         for(j=0;j<d;j++)
         {
            scanf(" %d",&p[i][j]);
         }
    }
    for(i=0;i<V;i++)
    {
        for(j=i+1;j<V;j++)
        {
           addEdge(graph,i,j,-1*(wt(i,j)));
        }
    
    }
    PrimMST(graph);

    



} 


