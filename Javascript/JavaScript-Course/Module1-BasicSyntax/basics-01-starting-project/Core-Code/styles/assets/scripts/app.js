//Variables and Constants:
// let userName = "Max";
//Variables are a "data container/data storage"

// let variable-name = (assignment operator) dataStored
// const variable-name = dataStored ----> Const value does not change in the code.

//JavaScript ---> use const as much as possible.
const defaultResult = 0;
let currentResult = defaultResult;
let logEntries = [];

function getUserNumberInput() {
  return parseFloat(userInput.value);
}

function creatAndWriteLog(operator, resultBefore, enteredNumber) {
  const calcDescription = `${resultBefore} ${operator} ${enteredNumber}`;
  outputResult(currentResult, calcDescription); //from vendor file
  const logEntry = {
    prevResult: initialResult,
    operation: `${operator}`,
    number: enteredNumber,
    result: currentResult,
  };
  logEntries.push(logEntry);
  console.log(logEntries);
}

function add() {
  const enteredNumber = getUserNumberInput();
  initialResult = currentResult;
  currentResult = parseFloat(currentResult) + enteredNumber;
  creatAndWriteLog("+", initialResult, enteredNumber);
}

function subtract() {
  const enteredNumber = getUserNumberInput();
  initialResult = currentResult;
  currentResult = parseFloat(currentResult) - enteredNumber;
  creatAndWriteLog("-", initialResult, enteredNumber);
}

function multiply() {
  const enteredNumber = getUserNumberInput();
  initialResult = currentResult;
  currentResult = parseFloat(currentResult) * enteredNumber;
  creatAndWriteLog("*", initialResult, enteredNumber);
}

function divide() {
  const enteredNumber = getUserNumberInput();
  initialResult = currentResult;
  currentResult = parseFloat(currentResult) / enteredNumber;
  creatAndWriteLog("/", initialResult, enteredNumber);
}

addBtn.addEventListener("click", add);
subtractBtn.addEventListener("click", subtract);
multiplyBtn.addEventListener("click", multiply);
divideBtn.addEventListener("click", divide);
