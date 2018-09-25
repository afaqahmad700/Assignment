#include <iostream>
  using namespace std;
class item {
  private:
    char title[20];
  float price;

  public:

    void getdata()

  {
    cout << "Please enter product title: ";
    cin >> title;
    cout << "Please enter Price: ";
    cin >> price;

  }
  void displaydata()

  {
    cout << endl << "Title and Price: " << "\t";
    cout << title << "\t\t" << price << endl;

  }
};
class sales {
  private:
    float salesfig[3];
  public:
    void getdata() {
      cout << endl << "Enter salaes figure for 3 months (Press enter after each entry): ";
      for (int i = 0; i < 3; i++)
        cin >> salesfig[i];
    }
  void displaydata() {
    cout << endl << "These are salaes figures for last 3 months: " << "\t";

    for (int i = 0; i < 3; i++) {
      cout << salesfig[i] << "\t\t";
    }
    cout << endl;
    cout << "****************" << endl;
  }
};
class hwitem: private item, private sales {
  private: char category[10];
  char om[10];
  public: void getdata() {
    item::getdata();
    cout << "Enter category: ";
    cin >> category;
    cout << "Please enter Manufacturer: ";
    cin >> om;
    sales::getdata();
  }
  void displaydata() {
    item::displaydata();
    cout << "Category and Manufacturer is: ";
    cout << category << "\t" << om;
    sales::displaydata();
  }
};
class switem: private item, private sales {
  char category[10];
  char os[10];
  public:
    void getdata() {
      item::getdata();
      cout << "Enter category: ";
      cin >> category;
      cout << "Enter Operating System: ";
      cin >> os;
      sales::getdata();

    }
  void displaydata() {
    item::displaydata();
    cout << "Enter category and OS: ";
    cout << category << "\t" << os;
    sales::displaydata();
  }

};
main() {
  hwitem h1, h2;
  h1.getdata();
  h1.displaydata();

  switem s1, s2;
  s1.getdata();
  s1.displaydata();

}
