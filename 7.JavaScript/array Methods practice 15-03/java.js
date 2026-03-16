
// usinf filter and map

let num = [10, 20, 25, 30, 35, 45, 55, 65, 70, 80, 90,99]

let filternum = num.filter( n => n > 40 );

console.log(filternum);

let p1 = document.getElementById("p1");

p1.innerHTML = "The given array of number more than 40 number in this array == " + filternum;


let res = filternum.map(n => n*2);

console.log(res);


let p2 = document.getElementById("p2");

p2.innerHTML = " The given numbre multply by 2 is :==  " +res;


// using map and reduce methods

let n1= [5, 10, 2, 6, 8, 14, 18, 13];

let sq = n1.map(n => n*n);

console.log(sq);


let p3 = document.getElementById("p3");

p3.innerHTML = " The given numbre sqare is :==  " + sq;



let sum = sq.reduce((total, num) =>  total +num, 0);

console.log(sum);


let p4 = document.getElementById("p4");

p4.innerHTML = " The given numbre sum is :==  " + sum;



// using sort and map

let n2 = [5, 65, 89, 12, 1, 23, 3,7];

n2.sort();

console.log(n2);


let p5 = document.getElementById("p5");

p5.innerHTML = " The given numbre sorting is :==  " + n2;

let r1 = n2.map(n => n+n);

console.log(r1);


let p6 = document.getElementById("p6");

p6.innerHTML = " The given numbre sumraize is :==  " + r1;


// exapmple of using methods

let product =[

    {name:"Laptop", price:500},
    {name:"mouse", price:150},
    {name:"keyborad", price:200},
    {name:"pendrive", price:400},
    {name:"charger", price:300},
    {name:"USB Port", price:100}

]


let total= product.filter(p => p.price >200);

console.log(total);

let p7 = document.getElementById("p7");

p7.innerHTML = " The given filter product is :==  " + JSON.stringify(total);



let add =total.map( p => p.price);

console.log(add);

let p8 = document.getElementById("p8");

p8.innerHTML = " The given prodcut price is :==  " + add;


let res1 = add.reduce((sum,price) => sum+price, 0);

console.log(res1);


let p9 = document.getElementById("p9");

p9.innerHTML = " The given product sumraize is :==  " + res1;

