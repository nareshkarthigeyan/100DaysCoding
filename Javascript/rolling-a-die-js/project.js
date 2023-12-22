//Libraries;
const prompt = require("prompt-sync")();

const die = [1, 2, 3, 4, 5, 6];
//TO DO:
// Ask user the number of dies to roll (under 3)
// Roll die
// Add total valuee of the dies total
// Print

const getNumberOfDies = () => {
  while (true) {
    const dies = prompt("Enter the number of dies you want to roll: ");
    if (dies == NaN || dies > 3 || dies < 0) {
      console.log(
        "Invalid. Enter the number of dies within 1 to 3. It must be in the form of integer. Try again:"
      );
    } else {
      const numberDies = parseFloat(dies);
      return numberDies;
    }
  }
};

const rollDie = (rollFrequency) => {
  let dieValue = 0;
  for (let i = 0; i < rollFrequency; i++) {
    let value = Math.floor(Math.random() * (die.length + 1));
    if (rollFrequency > 1) {
      console.log("Die " + (i + 1) + ": " + value);
    }
    dieValue += value;
  }
  console.log("Total Value: " + dieValue);
  return dieValue;
};

const rollFrequency = getNumberOfDies();
rollDie(rollFrequency);
