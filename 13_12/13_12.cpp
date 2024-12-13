#include <iostream>

using namespace std;

class BBQ {
    string t;
public:
    BBQ(string t = "Peace of BBQ") {
        this->t = t;
    }

    string getName() {
        return t;
    }
};

class FourCheese {
    string t;
public:
    FourCheese(string t = "Peace of four cheese") {
        this->t = t;
    }

    string getName() {
        return t;
    }
};

class Meat {
    string t;
public:
    Meat(string t = "Peace of meat pizza") {
        this->t = t;
    }

    string getName() {
        return t;
    }
};

class Flower {
    string t;
public:
    Flower(string t = "Peace of flower pizza") {
        this->t = t;
    }

    string getName() {
        return t;
    }
};

class Pizza {
    BBQ* bbq;
    FourCheese* fourCheese;
    Meat* meat;
    Flower* flower;

public:
    Pizza(BBQ* bbq, FourCheese* fourCheese, Meat* meat, Flower* flower) {
        this->bbq = bbq;
        this->fourCheese = fourCheese;
        this->meat = meat;
        this->flower = flower;
    }

    void eatPizza() {
        cout << this->bbq->getName();
        delete bbq;
        cout << this->fourCheese->getName();
        delete fourCheese;
        cout << this->meat->getName();
        delete meat;
        cout << this->flower->getName();
        delete flower;
    }
};

int main() {
    BBQ* bbq = new BBQ();
    FourCheese* fourCheese = new FourCheese();
    Meat* meat = new Meat();
    Flower* flower = new Flower();
    Pizza pizza = Pizza(bbq, fourCheese, meat, flower);

    pizza.eatPizza();
}