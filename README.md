# Nov747

## **Варианты и задания**

Варианты задания 10 и 20 , ниже представлены _задания_ к данным *вариантам*.

### **Вариант 10. Неубывающая последовательность.** 

 На вход подается число n∈ _N_ : n <= 2147483647 , а также n чисел x(i) ∈ _Z_ : |x(i)| <=2147483647 для любого целого i от 1 до n. Вывести 1, если x(i) <= x(i+1) для любого целого i от 1 до n - 1, иначе вывести 0.

### **Вариант 20. Произведение последовательности 2.** 

  На вход подается число n∈ _N_ : n <= 2147483647 , а также n 
чисел x(i) ∈ _Z_ : |x(i)| <=2147483647 для любого целого i от 1 до n. Вывести значение  ![alt text](https://pp.userapi.com/c848520/v848520645/13eb84/1CPQFFAf21Y.jpg)

## **Ход работы**

Сперва данные задания были реализованны на языке программирования **C**. При помощи текстового блокнота **nano** был написан исходный код для реализации данных заданий _( код см. в файлах,закомиченных в ветку)_ . В данных программах были реализованы циклы с конечным числом заходов, цикл _for_, во второй программе был реализован  массивный варинат решения задачи . Позже после создания кода, данные файлы были отправлены на репозитор при помощи команд:
  - git add .  
  - git commit -m
  - git push -u origin pr2
  
  ## **Результат**
  
  При помощи компилятора gcc была проверена работоспособность програм, ниже будут продемонстрированы скрины.
  
  ![alt text](https://pp.userapi.com/c851524/v851524603/cb99a/_KnU19803-E.jpg)
  
  Как видно оба файла скомпилированы.
 Ниже будут приведены примеры работы данных програм, а в таблице указаны входные и выходные значения, в качестве примеров
 
 ### *Первая программа*
 
| кол-во чисел  |  числа        | результат|
| ------------- |:-------------:| --------:|
| 4             | 5             | 0        |
|               | 23            |          |
|               |  12           |          |
|               |  35           |          |

 ![alt text](https://pp.userapi.com/c849532/v849532955/14471d/WozNy4YS6D4.jpg)
 
  ### *Вторая программа*
  
 | кол-во чисел  |  числа        | результат|
 | -------------:|:-------------:| --------:|
 | 3             |5              | -9       |
 |               |3              |          |
 |               | 1             |          |
 
![alt text](https://pp.userapi.com/c851524/v851524603/cb9a8/1juPy9ro6vE.jpg)

 Выше был продемонстрирован краткий экскурс по данной практической работе, ниже будут представленны ссылки на источники, которые были использованы для оформления данного документа.
 
 [Ссылка на пример оформления данного текстового документа](https://github.com/adam-p/markdown-here/wiki/Markdown-Cheatsheet)
