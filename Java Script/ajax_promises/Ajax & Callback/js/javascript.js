// javascript
const dugme = document.getElementById('posalji'); // dugme get data
const forma = document.getElementById('forma1'); // forma
const lista = document.getElementById('lista'); // Html element UL
// lista svih postova
let postovi = [];

// Dobijanje podataka sa servera 
function getData(callback) {
	// kreiranje XMLHttpRequest Objekta
	const xhr = new XMLHttpRequest();
	// otvaranje zahteva ka serveru sa svim parametrima.
	xhr.open('GET', 'https://jsonplaceholder.typicode.com/posts?userId=2', true);
	// slanje zahteva ka serveru.
	xhr.send();
	// onreadystatechange funkcija za ispitavanje kada je spreman zahtev sa server
	xhr.onreadystatechange = function() {
		// ready state oznacava da je zahtev spreman 
		// status 200 oznacava da je status kod ovog zahteva 200 OK 
		if(this.readyState == 4 && this.status == 200) {
			// pozivanje callback funkcije i prosledjivanje parametra odnosno 
			// vrednosti koje nam je vratio server
			callback(JSON.parse(this.responseText));
		}
	}
}

// Kreiranje posta
function create(data) {
	// kreiranje XMLHttpRequest Objekta
	const xhr = new XMLHttpRequest();

	xhr.open('POST', 'https://jsonplaceholder.typicode.com/posts', true);
	xhr.send(data);
	// onreadystatechange funkcija za ispitavanje kada je spreman zahtev sa server
	xhr.onreadystatechange = function() {
		if(this.readyState == 4 && this.status == 200) {
			console.log(this.responseText);
		}
	}
}

// editovanje Posta
function editPost(data, id) {
	// kreiranje XMLHttpRequest Objekta
	const xhr = new XMLHttpRequest();

	xhr.open('PATCH', `https://jsonplaceholder.typicode.com/posts/${id}`, true);
	xhr.send(data);
	// onreadystatechange funkcija za ispitavanje kada je spreman zahtev sa server
	xhr.onreadystatechange = function() {
		if(this.readyState == 4 && this.status == 200) {
			console.log(this.responseText);
		}
	}
} 

// Kreiranje liste od dobijenih informacija sa servera
function fetchData(data) {
	lista.innerHTML = null;
	let listItem = '';
	data.forEach((post, index) => {
		postovi.push(post);
		listItem += `<li id="${post.id}">userID:${post.userId} | postID:${post.id} | title:${post.title}</li>`;
	});
	lista.innerHTML = listItem;

	addListeners();
}

// dodavanje EventListnera za svaki od List Itema.
function addListeners() {
	const items = document.querySelectorAll('li');
	items.forEach((element, index) => {
		element.addEventListener('click', () => {
			setData(element.id);
		});
	});
}

// Popunjavanje podataka u formi sa odgovarajucim podacima (POTREBNO JE NASTAVITI ODAVDE).
function setData(id) {
	console.log(postovi, id);
	for(let i = 0; i < postovi.length; i++) {
		if(postovi[i].id == id) {
			console.log(postovi[i]);
		}
	}
}

// Event listener prilikom dodavanja novog Posta.
forma.addEventListener('submit', (e) => {
	// preventivno zaustavljanje podrazumevanog dogadjaja za slanje forme.
	// Odnosno slanje zahteva ka serveru na putanji koja je definisana u action atributu
	e.preventDefault();
	// sredjivanje podataka koji se salju serveru
	let data = {
		userId: document.forms[0].elements.userId.value,
		title: document.forms[0].elements.title.value,
		body: document.forms[0].elements.body.value
	};
	// slanje podataka (klikom na dugme Add)
	create(JSON.stringify(data));
});

// Event Listener za dobavljanje podataka sa servera. dugme Get Data
dugme.addEventListener('click', () => {
	 getData(fetchData);
});