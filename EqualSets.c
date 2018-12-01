EQUAL SETS

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

#define SIZE 20

struct DataItem {
   int data;
   int key;
};
struct DataItem* hashArray1[SIZE];
struct DataItem* hashArray2[SIZE];

struct DataItem* dummyItem;
struct DataItem* item;

int hashCode(int key) {
   return key % SIZE;
}

struct DataItem *search(struct DataItem* hashArray[],int key) {
   //get the hash
   int hashIndex = hashCode(key);

   //move in array until an empty
   while(hashArray[hashIndex] != NULL) {

      if(hashArray[hashIndex]->key == key)
         return hashArray[hashIndex];

      //go to next cell
      ++hashIndex;

//wrap around the table
      hashIndex %= SIZE;
   }

   return NULL;
}

void insert(struct DataItem* hashArray[],int key,int data) {

   struct DataItem *item = (struct DataItem*) malloc(sizeof(struct DataItem));
   item->data = data;
   item->key = key;

   //get the hash
   int hashIndex = hashCode(key);

   //move in array until an empty or deleted cell
   while(hashArray[hashIndex] != NULL && hashArray[hashIndex]->key != -1) {
      //go to next cell
      ++hashIndex;

      //wrap around the table
      hashIndex %= SIZE;
   }

   hashArray[hashIndex] = item;
}



int main() {
   dummyItem = (struct DataItem*) malloc(sizeof(struct DataItem));
   dummyItem->data = -1;
   dummyItem->key = -1;
   int count=0;
   int a[]={20,55,40,50,60};
int b[]={20,55,40,50,60,60};

   for(int i=0;i<(sizeof(a)/sizeof(int));i++)
   {
        insert(hashArray1,a[i], a[i]);
   }

    for(int i=0;i<(sizeof(b)/sizeof(int));i++)
   {
        insert(hashArray2,b[i], b[i]);
   }

   for(int i=0;i<5;i++)
   {
      item= search(hashArray1,b[i]);
      if(item==NULL)
        {   count =1;
            printf("Not equal 1");
            break;
        }
   }

   for(int i=0;i<5;i++)
   {
      item= search(hashArray2,a[i]);
      if(item==NULL)
        {   count =1;
            printf("Not equal 2");
            break;
        }
   }

   if(count==0)
   {
       printf("Equal");
   }
}
