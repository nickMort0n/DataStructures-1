#ifndef MAIN_H

#define MAIN_H

struct user {
	int level;
	char* name;
	char* faction;
};

struct node {
	struct user user;
	struct node* next;
};

void initQueue();
int isEmpty(struct node*);
void addToTail(struct node*, struct node*);
void removeFromHead(struct node*);

#endif