const readline = require('readline');

const rl = readline.createInterface({
    input: process.stdin,
    output: process.stdout
});

const targetNumber = Math.floor(Math.random() * 100) + 1;
let attempts = 0;

console.log("🎮 Welcome to 'Guess the Number'!");
console.log("I'm thinking of a number between 1 and 100.");

function askQuestion() {
    rl.question('What is your guess? ', (guess) => {
        attempts++;
        const userGuess = parseInt(guess);

        if (userGuess < targetNumber) {
            console.log("Too low! Try again.");
            askQuestion();
        } else if (userGuess > targetNumber) {
            console.log("Too high! Try again.");
            askQuestion();
        } else {
            console.log(`Correct! The number was ${targetNumber}.`);
            console.log(`You guessed it in ${attempts} attempts.`);
            rl.close();
        }
    });
}

askQuestion();
