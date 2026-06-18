// aula 6;
// professora: erika dilly;
#include <iostream>
#include <string>
using namespace std;

class Pessoa{
protected:
    string nome;

public:
    Pessoa(string n) : nome(n) {}

    virtual void falar() { //virtual precisa para ser sobreescrito no filho;
        cout << "Aluno(a): " << nome << " esta falando." << endl;
    }
};

class Professora : public Pessoa {
private: 
    string disciplina;
public: 
    Professora(string n, string d) : Pessoa(n), disciplina(d) {}

    void falar() override {
        cout << "Professor(a): " << nome << " esta ensinando: " << disciplina << "." << endl; 
    }
};

class Aluno : public Pessoa {
private:
    int matricula;
public:
    Aluno(string n, int m) : Pessoa(n), matricula(m) {}

    void falar() override {
        cout << "Aluno(a): " << nome << "(matricula: " << matricula << ") esta aprendendo." << endl;
    }

};

int main(){
    Pessoa p("Gui");
    Professora prof("Erika", "linguagem C++");
    Aluno aln("Guilherme", 7);
    
    p.falar();
    prof.falar();
    aln.falar();

    //Pessoa* p1 = new Pessoa("gab");
    //Pessoa* p2 = new Professora("erika");
    //Pessoa* p3 = new Aluno("Guilherme");

    //delete p1;
    //delete p2;
    //delete p3; 

    return 0;
}