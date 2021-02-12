#include <stdio.h>
#include <stdlib.h>
struct string{
  char* value;
};
int strlen2(const struct string STRING){
int count=0;
while(STRING.value[count]!='\0')
count++;
return count;
}
int strfind(const struct string STRING,const struct string FIND){
  int len1 = strlen2(STRING);
  int len2 = strlen2(FIND);
  int count,i,j,found=-1;
  for(count=0;count<len1;count++){
    if(STRING.value[count]==FIND.value[0]){
      found=count;
      if(len2+count<=len1){
        j=0;
        for(i=count;i<count+len2;i++){
          if(FIND.value[j]!=STRING.value[i]){
            found=-1;
            break;
          }
          j++;
        }
      }
      else  found=-1;
    if(found==count)return found;
    }
  }
  return found;
}
int main(void) {
  struct string string1;
  struct string string2;
  string2.value = (char*)malloc(sizeof(char)*60);
  string1.value = (char*)malloc(sizeof(char)*60);
  printf("1. String: ");
  scanf("%s",string1.value);
  printf("Length of %s is: %d\n",string1.value,strlen2(string1));
  printf("String to search:");
  scanf("%s",string2.value);
  printf("Searching %s in %s\nIndex of %s: %d\n",string2.value,string1.value,string2.value,strfind(string1,string2));
  return 0;
}
