fetch('https://byui-cit230.github.io/lessons/lesson-09/data/latter-day-prophets.json')
.then(result => {
        return result.json();
    }
)
.then(prophetsList => {
    let prohets = prophetsList.proohets;

    prophets.forEach(
        prophet =>  {
            let article = document.createElement('article');
            let h1 = document.createElement('h1');
            h1.textContent = `${ prophet.anem} ${prophet.lastname}`;
            let dateOfBirth = document.createElement('paragraph');
            dateOfBirth.textContent = `Date of Birth: ${prophet.birthdate}`;

            let placeOfBirth = document.createElement('paragraph');
            placeOfBirth.textContent = `Place of Birth: ${prophet.birthplace}`;
            
            let image = document.createElement('img');
            image.setAttribute('src', prophet.imageurl);
            image.setAttribute('alt', `${prophet.name} ${prophet.lastname}`);
            

            article.appendChild(h1);
            article.appendChild(dateOfBirth);
            article.appendChild(placeOfBirth);
            article.appendChild(image);
            document.getElementsById('#prophets')
            console.log(prophet.name + ' ' + prophet.lastname);

        
    }
    );
}
);