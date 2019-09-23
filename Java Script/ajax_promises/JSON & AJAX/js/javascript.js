
// javascript JSON & AJAX

let json = '{"name":"aleksandar","lastname":"petrovic","hobies":"none"}';
let jsonObj = JSON.parse(json);
document.getElementById('jsontekst').innerHTML = jsonObj.name;
console.log(jsonObj);

let newString = JSON.stringify(jsonObj);

let person = {
	name: "Ime",
	lastname: "Prezime",
	visina: 180,
	tezina: 80,
}

document.getElementById('jsonstring').innerHTML = JSON.stringify(person);

// kreiranje JSON stringa
let jsonString = '{"employes": [{"name": "Aleksandar","lastname": "Petrovic", "gender": "male", "age": 25, "id": 1}, {"name":"Nikola", "lastname": "Peric", "gender": "male", "age": 22, "id": 2}]}';

let container = document.getElementsByClassName('person');

// parsiranje JSON stringa u Objekat
let jsonNewObj = JSON.parse(jsonString);
console.log(container);

// Stampanje podataka iz JSON fajla na html stranici 
jsonNewObj.employes.forEach((value, index) => {
	container[index].querySelector('.id').innerHTML = value.id; 
	container[index].querySelector('.ime').innerHTML = value.name; 
	container[index].querySelector('.prezime').innerHTML = value.lastname; 
	container[index].querySelector('.pol').innerHTML = value.gender; 
	container[index].querySelector('.godine').innerHTML = value.age; 
});

console.log(jsonNewObj);