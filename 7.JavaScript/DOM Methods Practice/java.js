function showname() {
  let name = document.getElementById("name").value;
let result = document.getElementById("result");

result.textContent = "Hello " + name ;

}



// array and dom methods using

let numbers = [];

function addnumber() {
  let input = document.getElementById("num").value;

  numbers.push(input); 

  let list = document.getElementById("list");
  list.textContent = ""; 

  numbers.forEach(function(num) {
    let li = document.createElement("li"); 
    li.textContent = num;
    list.appendChild(li);
  });
}


function removeitem() {

    let rem = document.getElementById("list");
    
    if (rem.lastElementChild){
        rem.lastElementChild.remove();
    }

}