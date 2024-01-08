const task3Element = document.getElementById("task-3");

function function1() {
  alert("Hello");
}

function function2(name) {
  alert(`Name: ${name}`);
}

function1();
function2("Naresh");

task3Element.addEventListener("click", function1);

function cncat(srt1, str2, str3) {
  const finalString = `${str1} ${str2} ${str3}`;
  return finalString;
}

const combinedString = cncat("Hi", "There", "sha-rukh khan");
alert(combinedString);
