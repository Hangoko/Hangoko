#ifndef __POSTFIX_H__
#define __POSTFIX_H__

#include <string>
#include "stack.h"
#include "vector"
#include "string.h"
#include <cmath>

using namespace std;

class Postfix {
private:
    int priority(string str) {
        if (str == "+" || str == "-") {
            return 1;
        }
        else if (str == "*" || str == "/" || str == "s" || str == "c" || str == "tg" || str == "ctg" || str == "l") {
            return 2;
        }
        else if (str == "^") {
            return 3;
        }
        return 0;
    }

    vector<string> toPostfix(vector<string> elems) {
        Stack<string> operators;
        vector<string> postfix;

        for (string str: elems) {
            if (IsDigit(str)) { // Если число, то записываем в результат.
                postfix.push_back(str); 
            }
            else if (str == "(") {
                operators.Push(str);
            }
            else if (str == ")") { // Если проверяемая строка - закрытая скобка, добавляем все операции в результат до момента достижения открытой скобки.
                while (!operators.empty() && operators.top() != "(") {
                    postfix.push_back(operators.pop());
                }
                operators.pop();
            }
            else { // Смотрим, были ли у нас операции до этого. Если да, то проверяем по приоритету. В случае, если прошлая операция была более приоритетной, то записываем ее в резутат. Если операций до этого не было или же операция, которую 
                   // мы проверяем, по приоритету выше, то записываем ее в массив операций ("в очередь"). 
                while (!operators.empty() && priority(operators.top()) >= priority(str)) {
                    postfix.push_back(operators.pop());
                }
                operators.Push(str);
            }
        }

        while(!operators.empty()) { // Записываем в результат все операции из "очереди".
            postfix.push_back(operators.pop());
        }

        return postfix;
    }

    vector<string> split(const string& str, char separator) { // Суть как в Питоне. Разделяем строку "разделительным" символом, создавая массив из элементов строки.
        vector<string> result;
        string elem;
        for (char ch : str) { // Проходимся посимвольно по всей строке. В случае совпадения символа с разделителем и непустого элемента, который заполняется с помощью последовательных символов, отличных от разделителя, добавляем к резулятату.
            if (ch == separator) {
                if (!elem.empty()) {
                    result.push_back(elem);
                    elem.clear();
                }
            } else {
                elem += ch;
            }
        }
        if (!elem.empty()) {
            result.push_back(elem);
        }
        return result;
    }
    bool IsDigit(const string& symbol) {
        return isdigit(symbol[0]) || (symbol[0] == '-' && symbol.length() > 1 && isdigit(symbol[1]));
    }
    bool IsOperationWithOneDigit(const string& symbol) {
        return symbol == "s" || symbol == "c" || symbol == "tg" || symbol == "ctg" || symbol == "l";
    }
    bool IsOperationWithTwoDigits(const string& symbol) {
        return symbol == "+" || symbol == "-" || symbol == "*" || symbol == "/" || symbol == "^";
    }
public:
    double calculation(const string& expression) {
        vector<string> symbols = toPostfix(split(expression, ' '));
        Stack<double> stack;

        for (const string& symbol : symbols) {
            if (IsDigit(symbol)) {
                stack.Push(stod(symbol));  
            }
            
            else if (IsOperationWithOneDigit(symbol)) {
                double a = stack.pop();
                
                if (symbol == "s") stack.Push(sin(a));
                else if (symbol == "c") stack.Push(cos(a));
                else if (symbol == "tg") {
                    if(cos(a) == 0) throw ("Division by zero.");
                    stack.Push(tan(a));
                }
                else if (symbol == "ctg") {
                    if(sin(a) == 0) throw ("Division by zero.");
                    stack.Push(1 / tan(a));
                }
                else if (symbol == "l") stack.Push(log(a));
            }

            else if (IsOperationWithTwoDigits(symbol)) {
                double b = stack.pop();
                double a = stack.pop();
                
                if (symbol == "+") stack.Push(a + b);
                else if (symbol == "-") stack.Push(a - b);
                else if (symbol == "*") stack.Push(a * b);
                else if (symbol == "/") {
                    if (b == 0) throw ("Division by zero.");
                    stack.Push(a / b);
                }
                else if (symbol == "^") stack.Push(pow(a, b));
            }

            else throw ("Invalid symbol: " + symbol);
        }
        if (stack.Size() != 1) throw ("Invalid postfix expression.");
        return stack.top();
    }
};

#endif
