const readline = require('readline');

const rl = readline.createInterface({
    input: process.stdin,
    output: process.stdout
});

const choices = ['rock', 'paper', 'scissors'];

console.log("👊 Welcome to Rock, Paper, Scissors!");
console.log("Choose rock, paper, or scissors:");

function playGame() {
    rl.question("Your choice: ", (userChoice) => {
        userChoice = userChoice.toLowerCase();

        if (!choices.includes(userChoice)) {
            console.log("Invalid choice! Please choose rock, paper, or scissors.");
            playGame();
            return;
        }

        const computerChoice = choices[Math.floor(Math.random() * choices.length)];
        console.log(`Computer's choice: ${computerChoice}`);

        if (userChoice === computerChoice) {
            console.log("It's a tie!");
        } else if (
            (userChoice === 'rock' && computerChoice === 'scissors') ||
            (userChoice === 'paper' && computerChoice === 'rock') ||
            (userChoice === 'scissors' && computerChoice === 'paper')
        ) {
            console.log("You win!");
        } else {
            console.log("Computer wins!");
        }

        rl.close();
    });
}

playGame();
