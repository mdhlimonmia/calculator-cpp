using namespace std;

namespace history{


    void add(int a, char opt, int b, int result){
        fstream history;
        history.open("History.txt",ios::app);

        history<<a<<opt<<b<<'='<<result<<'\n';
        history.close();
    }

    void display(){
        cout<<"--------Calculation History:------------"<<endl;
        ifstream history("History.txt");
        string line;

        while (getline(history, line)) {
        cout << line << endl;
        }

        history.close();
    }
}
