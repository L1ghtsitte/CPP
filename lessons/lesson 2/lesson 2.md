
Переменые;

Переменная - область памяти для хранения данных;

![Тут код](https://github.com/L1ghtsitte/CPP/blob/main/lessons/lesson%202/lesson-2.1.png)

А теперь по порядку;

![Тут таблица](https://github.com/L1ghtsitte/CPP/blob/main/lessons/lesson%202/lesson-2.2.png)

var1, var2, var3, var4, var5 - имя переменой;

Все что после знака = это значение переменной;

(Дальше я обращаюсь к переменой под номером из таблице выше);

A2
======
Тип переменной char это символьный тип;

Для присваивания значения после равно необходимо открыть одинарные кавычки (' ') и между ними ввести символ; 

\\ ' ' используются для одного символа, " " для n количества символов \\

Туда можно поместить как число например '4' (не советую для этого есть int или float, double):

![Тут код](https://github.com/L1ghtsitte/CPP/blob/main/lessons/lesson%202/lesson-2.3.png)

Как можете видеть он вывел, но при операциях по типу * могут возникать трудности в виде прервращения из цифр в символы из таблицы ASCII (American Standard Code for Information Interchange);

Все таки туда лучше присваивать символ например 'F';

![Тут код](https://github.com/L1ghtsitte/CPP/blob/main/lessons/lesson%202/lesson-2.4.png)

Тут тоже все прекрасно выводится на экран;

A3
======
Тип переменной bool это логический тип;

Он может принимать значение true или false (АКА 1 или 0);

true = 1/false = 0;

Давайте попроробуем создать 4 перемменые типа bool и попробуем вывести true, false, 1, 0;

![Тут код](https://github.com/L1ghtsitte/CPP/blob/main/lessons/lesson%202/lesson-2.5.png)

Числа которые не равняются 0 (num != 0) тоже будут считатся true/1;

A4
======
Тип переменной int это целочисленый тип;

Поддерживает все виды математических операций их список доступен по ссылке ниже;

//[Математические операции в C++](https://github.com/L1ghtsitte/CPP/blob/main/info/math_operation.png)\\\

Принимает число без плавающей точки;

![Тут код](https://github.com/L1ghtsitte/CPP/blob/main/lessons/lesson%202/lesson-2.6.png)

Как выможете видете при выводе переменной num2(которая равна 4.3) вывелось просто 4;

Это потому-что в int не может быть помещено не целое число;

A5, A6
======
Типы переменной float, double это дробные типы;

Их исполььзуют для значений с палвающей точкой(АКА не целых чисел);

![Тут код](https://github.com/L1ghtsitte/CPP/blob/main/lessons/lesson%202/lesson-2.7.png)

К слову там могут быть и целочисленые числа как в int;

Поддерживает математические опперации;

//[Математические операции в C++](https://github.com/L1ghtsitte/CPP/blob/main/info/math_operation.png)\\\

Впринцепи на этом можно закончить

До новых встреч

//[whrite by L1ghtsitte](https://github.com/L1ghtsitte/CPP)\\\
