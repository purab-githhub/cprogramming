
#include <stdio.h>
#include <stdlib.h>

/* Structure declaration */
struct node {
    int coef;
    int exp;
    struct node *next;
};

typedef struct node pnode;

/* Function declarations */
pnode *getnode(void);
pnode *create(void);
void insert(pnode *head, pnode *newnode);
void display(pnode *head);
pnode *add_poly(pnode *H1, pnode *H2);

/* Main function */
int main(void) {
    pnode *H1, *H2, *H3;

    printf("\nEnter First Polynomial:\n");
    H1 = create();

    printf("\nEnter Second Polynomial:\n");
    H2 = create();

    printf("\nFirst Polynomial: ");
    display(H1);

    printf("Second Polynomial: ");
    display(H2);

    H3 = add_poly(H1, H2);

    printf("Addition of Polynomials: ");
    display(H3);

    return 0;
}

/* Allocate memory for a node */
pnode *getnode(void) {
    pnode *p;

    p = (pnode *)malloc(sizeof(pnode));

    if (p == NULL) {
        printf("Memory allocation failed!\n");
        exit(EXIT_FAILURE);
    }

    return p;
}

/* Create a polynomial */
pnode *create(void) {
    pnode *head, *newnode;
    int i, n;

    head = getnode();
    head->coef = 0;
    head->exp = -1;
    head->next = head;

    printf("Enter number of terms: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        newnode = getnode();

        printf("Enter coefficient: ");
        scanf("%d", &newnode->coef);

        printf("Enter exponent: ");
        scanf("%d", &newnode->exp);

        insert(head, newnode);
    }

    return head;
}

/* Insert terms in descending order of exponents */
void insert(pnode *head, pnode *newnode) {
    pnode *p, *prev;

    p = head->next;
    prev = head;

    while (p != head && p->exp > newnode->exp) {
        prev = p;
        p = p->next;
    }

    /* If exponent already exists, add coefficients */
    if (p != head && p->exp == newnode->exp) {
        p->coef = p->coef + newnode->coef;

        if (p->coef == 0) {
            prev->next = p->next;
            free(p);
        }

        free(newnode);
    } else {
        newnode->next = p;
        prev->next = newnode;
    }
}

/* Display the polynomial */
void display(pnode *head) {
    pnode *p;

    p = head->next;

    if (p == head) {
        printf("0\n");
        return;
    }

    while (p != head) {
        printf("%dx^%d", p->coef, p->exp);

        p = p->next;

        if (p != head) {
            if (p->coef > 0)
                printf(" + ");
            else
                printf(" ");
        }
    }

    printf("\n");
}

/* Add two polynomials */
pnode *add_poly(pnode *H1, pnode *H2) {
    pnode *H3, *t1, *t2, *t3, *temp;

    /* Create result header node */
    H3 = getnode();
    H3->coef = 0;
    H3->exp = -1;
    H3->next = H3;

    t3 = H3;
    t1 = H1->next;
    t2 = H2->next;

    /* Continue until both polynomials reach their headers */
    while (t1 != H1 || t2 != H2) {
        temp = getnode();

        /* If both exponents are equal */
        if (t1 != H1 && t2 != H2 &&
            t1->exp == t2->exp) {

            temp->coef = t1->coef + t2->coef;
            temp->exp = t1->exp;

            t1 = t1->next;
            t2 = t2->next;
        }

        /* If exponent of P1 is smaller, copy P2's term */
        else if (t1 == H1 ||
                 (t2 != H2 && t1->exp < t2->exp)) {

            temp->coef = t2->coef;
            temp->exp = t2->exp;

            t2 = t2->next;
        }

        /* Otherwise, copy P1's term */
        else {
            temp->coef = t1->coef;
            temp->exp = t1->exp;

            t1 = t1->next;
        }

        /* Skip zero-coefficient terms */
        if (temp->coef == 0) {
            free(temp);
            continue;
        }

        /* Attach node to the resultant circular list */
        t3->next = temp;
        temp->next = H3;
        t3 = temp;
    }

    return H3;
}
