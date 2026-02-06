let seconds = 0;
let minutes = 0;
let hours = 0;
let timer = null;

const display = document.getElementById("display");
const startBtn = document.getElementById("Start");
const stopBtn = document.getElementById("Stop");
const resetBtn = document.getElementById("Reset");

function updateTime() {
    seconds++;

    if (seconds === 60) {
        seconds = 0;
        minutes++;
    }

    if (minutes === 60) {
        minutes = 0;
        hours++;
    }

    let h = hours < 10 ? "0" + hours : hours;
    let m = minutes < 10 ? "0" + minutes : minutes;
    let s = seconds < 10 ? "0" + seconds : seconds;

    display.innerText = `${h} : ${m} : ${s}`;
}

startBtn.addEventListener("click", () => {
    if (timer !== null) return;
    timer = setInterval(updateTime, 1000);
});

stopBtn.addEventListener("click", () => {
    clearInterval(timer);
    timer = null;
});

resetBtn.addEventListener("click", () => {
    clearInterval(timer);
    timer = null;
    seconds = 0;
    minutes = 0;
    hours = 0;
    display.innerText = "00 : 00 : 00";
});
