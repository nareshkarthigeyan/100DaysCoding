let done = false;
while (!done) {
    const randomNumber = Math.random();
    if (randomNumber > 0.7) {
        console.log(randomNumber);
        done = true;
    }
}
alert("Number is greater than 0.7!");

let nums = [1, 2, 3, 4, 5];
for (let i = nums.length - 1; i >= 0; i--) {
    console.log(nums[i]);
}
console.log("-----------------");

for (key of nums) {
    console.log(key);
}

done = false;

while (!done) {
    const rn1 = Math.random();
    const rn2 = Math.random();
    if ((rn1 > 0.7 && rn2 > 0.7) || rn1 < 0.2 || rn2 < 0.2) {
        console.log(rn1);
        console.log(rn2);
        done = true;
    }
}
