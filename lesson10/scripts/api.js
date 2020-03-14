const apiURL = 'api.openweathermap.org/data/2.5/forecast?id=524901&APPID=1111111111';

fetch(apiURL)
    .then(
        reponsive => { 
         return response.json()
})

.then(
    jsObject => {
        console.log(jsObject);
    }
);