#include <iostream>
#include <string>
#include <fstream>
using namespace std;
int main ()
{
 int i;
 int count=0;
 int countletter=0;
 int count2=0;
 string namefile;
 cout << "Введите название файла" << endl;
 cin >> namefile;
 ifstream fin;
 fin.open(namefile);
 if (!fin.is_open()){
                     cout << "Ошибка:файл не найден" << endl;
                    }
 else{
        cout << "Файл открыт" << endl;
        string str;
        while (!fin.eof()){
                           getline(fin, str, ' ');
                           if (str[i]==' '){
                                            count++;
                                           }
                           count=count+1;
                           for ( i=0; str[i]; i++){
            					   str[i] == ' ' ? false : countletter ++;
                                                  }
			   }
			   countletter--;
			   if(str.size()==(countletter/count)){
								cout<< "Слова средней длины: "<< str <<endl;
								count2++;
							      }
        cout << "В файле " << count << " слов " << endl ;
	cout << "В файле " << countletter << " букв " << endl;
        cout << "Среднее количество букв: " << countletter/count << endl;
	if(count2==0){
                      cout<< "Слов средней длины нет " <<endl;
                     }
        fin.close();
      }
 cout << "До свидания" << endl;
 return 0;
 }

