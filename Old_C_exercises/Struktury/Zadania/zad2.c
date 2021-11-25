#include <stdio.h>
#include <stdlib.h>

//2. Napisać funkcję disjointrect sprawdzającą, 
//czy prostokąty są rozłączne.

typedef struct point
{
  int x;
  int y;
};

typedef struct rect
{
  struct point ll;
  struct point ur;
};

int ptinrect(struct point p,struct rect r);
int rectinrect(struct rect r1,struct rect r2);
int disjointrect(struct rect r1,struct rect r2);

int main()
{
  struct rect r1,r2; 
  printf("Podaj współrzędne ll i ur dla r1 i r2:\n");
  scanf("%d %d %d %d",&r1.ll.x, &r1.ll.y, &r1.ur.x, &r1.ur.y); 
  scanf("%d %d %d %d",&r2.ll.x, &r2.ll.y, &r2.ur.x, &r2.ur.y);
  if(disjointrect(r1,r2) == 1)
    printf("Rozłączne\n");
  else
    printf("Nie są rozłączne\n");
  return 0;
}

int ptinrect(struct point p,struct rect r)
{
  return p.x >= r.ll.x && p.x < r.ur.x
      && p.y >= r.ll.y && p.y < r.ur.y;
}

int rectinrect(struct rect r1,struct rect r2)
{
  return ptinrect(r1.ur, r2) && ptinrect(r1.ur, r2);
}

int disjointrect(struct rect r1,struct rect r2)
{
  if(rectinrect(r1, r2) == 0)
    return 1;
  else
    return 0;
}