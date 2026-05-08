//  Example 1 simple console log 

var c = "Hello World.... Welcome to My page";
let char = document.getElementById("char");
console.log("c");
char.innerHTML=c;



var a=10;
console.log(a);

let num = document.getElementById("task1");
num.innerHTML = a;

var b="Hello";
console.log(b);
let str = document.getElementById("task2");
str.innerHTML= b;

var c='2';
console.log(c);
let num1 = document.getElementById("task3");
num1.innerHTML= c;

var a=50;
console.log("A is a:- " + a);
let num2 = document.getElementById("task4");
num2.innerHTML= a;

var b= "World";
console.log("Hello..." + b);
let str1 = document.getElementById("task5");
str1.innerHTML= b;


//  Operator Arithmetic Example ....


let x= 30; y=20;

let Sum = x+y;
let Sub = x-y;
let Mul = x*y;
let Div = x/y;
let Per = x%y;
let Squ = x**2;
let inc = x++;
let inc1 = ++x;
let dec = x--;
let dec1 = --x;

console.log(Sum);
console.log(Sub);
console.log(Mul);
console.log(Div);
console.log(Per);
console.log(Squ);
console.log(inc);
console.log(inc1);
console.log(dec);
console.log(dec1);

let sum1 = document.getElementById("task6")
sum1.innerHTML= Sum;

let sub1 = document.getElementById("task7")
sub1.innerHTML= Sub;

let mul1 = document.getElementById("task8")
mul1.innerHTML= Mul;

let div1 = document.getElementById("task9")
div1.innerHTML= Div;

let per1 = document.getElementById("task10")
per1.innerHTML= Per;

let squ1 = document.getElementById("task11")
squ1.innerHTML= Squ;

let incr1 = document.getElementById("task12")
incr1.innerHTML= inc;

let incrr1 = document.getElementById("task13")
incrr1.innerHTML= inc1;

let decr1 = document.getElementById("task14")
decr1.innerHTML= dec;

let decre1 = document.getElementById("task15")
decre1.innerHTML= dec1;





//  Assignment Operator 


let x1=40, y1=25;

let z=x1;

let op1 = (x1 +=y1);
let op2 = (x1 -=y1);
let op3 = (x1 *=y1);
let op4 = (x1 /=y1);
let op5 = (x1 %=y1);
let op6 = (x1 **= 2);

console.log(op1);
console.log(op2);
console.log(op3);
console.log(op4);
console.log(op5);
console.log(op6);

let opr1 = document.getElementById("t");
let opr2 = document.getElementById("t1");
let opr3 = document.getElementById("t2");
let opr4 = document.getElementById("t3");
let opr5 = document.getElementById("t4");
let opr6 = document.getElementById("t5");

opr1.innerHTML=op1;
opr2.innerHTML=op2;
opr3.innerHTML=op3;
opr4.innerHTML=op4;
opr5.innerHTML=op5;
opr6.innerHTML=op6;


// Comparison Operator 

let x3 = 15; y3=25;

let com = (x3 == x3);
console.log(com);
document.getElementById("t6").innerHTML = com;

let com1 = (x3 === x3);
console.log(com1);
document.getElementById("t7").innerHTML = com1;

let com2 = ("0" == false);
console.log(com2);
document.getElementById("t8").innerHTML = com2;

let com3 = (false == "0");
console.log(com3);
document.getElementById("t9").innerHTML = com3;

let com4 = (false === "0");
console.log(com4);
document.getElementById("t10").innerHTML = com4;

let com5 = (x3 != y3 );
console.log(com5);
document.getElementById("t11").innerHTML = com5;

let com6 = (0 != false);
console.log(com6);
document.getElementById("t12").innerHTML = com6;

let com7 = (x3 > y3);
console.log(com7);
document.getElementById("t13").innerHTML = com7;

let com8 = (x3 >= y3);
console.log(com8);
document.getElementById("t14").innerHTML = com8;

let com9 = (x3 < y3);
console.log(com9);
document.getElementById("t15").innerHTML = com9;

let com10 = (x3 <= y3);
console.log(com10);
document.getElementById("t16").innerHTML = com10;



//  logical Operator Example

let a1 = 2, b1=4, c1;

c1 = --a1 && b1++;

console.log(a1,b1,c1);

c1 = --a || b++;

console.log(a != b);
console.log(1^1);
console.log(0^1);
console.log(1^0);
console.log(0^0);
console.log(1^0^1);
console.log(0^1^0);
console.log(1^1^1);
console.log(0^0^0);


