let dayNames = [
    "Sunday",
    "Monday",
    "Tuesday",
    "Wednesday",
    "Thursday",
    "Friday",
    "Saturday"
];

let monthNames = [
    "January",
    "February",
    "March",
    "April",
    "May",
    "June",
    "July",
    "August",
    "September",
    "October",
    "November",
    "December"
];

let d = new Date();
let dayName = dayNames[d.getDay()];
let monthName = monthNames[d.getMonth()];
let fullDate = dayName + ", " + d.getDate() + " " + monthName + " " + d.getFullYear();
document.getElementById("date").innerHTML = fullDate;


const currentDate = new Date();
const aside = document.querySelector('aside');

if (currentDate.getDay() === 5) {
    aside.style.display = 'block';
}
else {
    aside.style.display = 'none';
}

function toggle(){
    document.getElementsByClassName("flex")[0].classList.toggle("resp");
    document.getElementsByClassName("weather-summary")[0].classList.toggle("respon");
}

let f, t, s;
t = 43;
s = 15;

if (t <= 50 && s >= 3) {
    f = 35.74 + 0.6215 * t - 35.75 * Math.pow(s, 0.16) + 0.4275 * t * Math.pow(s, 0.16);
    document.querySelector('#wind-chill').innerHTML = f.toFixed() + '&deg;';
} else {
    // f = 'N/A';
    // document.querySelector('#wind-chill').innerHTML = f;
    // document.querySelector('#divwind').style.display = 'none';
    f = t;
    document.querySelector('#wind-chill').innerHTML = f.toFixed() + '&deg;';
}

document.querySelector('#curtemp').innerHTML = t + '&deg;';
document.querySelector('#wind-speed').innerHTML = s + 'mph';
// document.querySelector('#humidity').innerHTML = '10&percnt;';

/* Font Loader */
WebFont.load({
    google: {
      families: [
         'Quicksand',
         'Libre Baskerville'
      ]
    }
  });