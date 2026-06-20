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

#endif