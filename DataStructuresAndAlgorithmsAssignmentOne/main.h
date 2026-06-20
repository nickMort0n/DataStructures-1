#ifndef MAIN_H

#define MAIN_H

struct user {
	int level;
	char* name;
	char* faction;
};

struct queue {
	struct user user;
	struct node* next;
};

#endif