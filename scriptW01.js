const d = new Date();
const year = d.getFullYear();

const output = year + " | Meghon Stevenson | ";

document.getElementById("bottomSection").textContent = output;

var string = document.lastModified;
let olastM = new Date(document.lastModified);

document.getElementById("lastUpdated").innerHTML = olastM;