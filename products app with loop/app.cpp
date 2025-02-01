 #include <iostream>
  using namespace std;
  int main()
  {
 string products[]={"Item 1","Item 2", "Item 3 " };
  string size[]={"Small","Large 2","X-Large " };
   for (int i = 0; i < 3; i++)
   {
    cout <<"Product Name"<<endl;
    cout<<products[i]<<endl;
    cout <<"Size: ";
    for (int j = 0; j < 3; j++)
    {
      cout<<size[j];
      if(j<2)
      cout <<", ";
    }
    cout<<endl;
    cout <<"============================="<<endl;
   }
      return 0;
  }