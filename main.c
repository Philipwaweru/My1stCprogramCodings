#include <stdio.h>

struct Record
{
  char firstname[20], lastname[20];
  int yearborn;
};
struct Record records[5] = {
  {"Philip", "Munene", 2004},
  {"Jane", "Wangare", 1999},
  {"Bob", "Mutuku", 2001},
  {"Alice", "Atieno", 2005},
  {"Charlie", "Nyambane", 1997}
};
void sortRecords(struct Record *records, int n)
{
  for (int i = 0; i < n - 1; i++)
  {
    for (int j = 0; j < n - i - 1; j++)
    {
      if (records[j].yearborn > records[j + 1].yearborn)
      {
        struct Record temp = records[j];
        records[j] = records[j + 1];
        records[j + 1] = temp;
      }
    }
  }
}
int main()
{
  int n = 5;
  sortRecords(records, n);
  for (int i = 0; i < n; i++)
  {
    printf("%s %s %d\n", records[i].firstname, records[i].lastname, records[i].yearborn);
  }
  return 0;
}
