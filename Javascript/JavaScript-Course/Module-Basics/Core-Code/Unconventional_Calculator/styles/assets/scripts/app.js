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

function calculateResult(calculationType) {
  const enteredNumber = getUserNumberInput();
  const initialResult = currentResult;
  let mathOperator;

  if (
    (calculationType != "ADD" &&
      calculationType != "SUBTRACT" &&
      calculationType != "MULTIPLY" &&
      calculationType != "DIVIDE") ||
    !enteredNumber
  ) {
    return;
  }

  if (calculationType === "ADD") {
    currentResult += enteredNumber;
    mathOperator = "+";
  } else if (calculationType === "SUBTRACT") {
    currentResult -= enteredNumber;
    mathOperator = "-";
  } else if (calculationType === "MULTIPLY") {
    currentResult *= enteredNumber;
    mathOperator = "*";
  } else if (calculationType === "DIVIDE") {
    currentResult /= enteredNumber;
    mathOperator = "/";
  }

  createAndWriteOutput(
    mathOperator,
    calculationType,
    initialResult,
    enteredNumber
  );
}
function createAndWriteOutput(
  operator,
  calculationType,
  resultBefore,
  enteredNumber
) {
  const calcDescription = `${resultBefore} ${operator} ${enteredNumber}`;
  outputResult(currentResult, calcDescription); //from vendor file
  const logEntry = {
    prevResult: resultBefore,
    operation: `${calculationType}`,
    number: enteredNumber,
    result: currentResult,
  };
  logEntries.push(logEntry);
  console.log(logEntries);
}

function add() {
  calculateResult("ADD");
}

function subtract() {
  calculateResult("SUBTRACT");
}

function multiply() {
  calculateResult("MULTIPLY");
}

function divide() {
  calculateResult("DIVIDE");
}
addBtn.addEventListener("click", add);
subtractBtn.addEventListener("click", subtract);
multiplyBtn.addEventListener("click", multiply);
divideBtn.addEventListener("click", divide);
