function changetext() {

  let dom = document.getElementById("text");

  dom.textContent = "Text Chnaged! This Text is changed!!"

}


function additem() {
  let li = document.createElement("li");
  li.textContent = "New Item";
  document.getElementById("list").appendChild(li);
}

function removetext() {
  let list = document.getElementById("list");
    
    if (list.lastElementChild) {
        list.removeChild(list.lastElementChild);
    }
}
    