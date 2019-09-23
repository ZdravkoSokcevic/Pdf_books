// javascript

// fetch medota

let promise = fetch('https://jsonplaceholder.typicode.com/users');

promise.then(response => {
	return response.json();
}).then(data => {
	console.log(data);
}).catch(err => {
	console.error(err);
});

let promise1 = new Promise((resolve, reject) => {
	let error = false;

	if(error) {
		reject(new Error('Desila se greska'));
	} else {
		setTimeout(resolve, 1000);
	}
});


function createList(color, time) {
	return new Promise((resolve, reject) => {
		let error = false;

		if(error) {
			reject(new Error('Desila se greska'));
		} else {
			setTimeout(() => {
				let lista = document.createElement('p');
				lista.innerText = color;
				document.body.append(lista);
				resolve();
			}, time);
		}
	})
}


createList('crvena', 500).then(() => {
	console.log('prvi poziv se zavrsio');
	return createList('plava', 2000);
}).then(() => createList('zuta', 1000)).then(() => {
	console.log('teci poziv se zavrsio');
});


promise1.then(() => {
	return createP();
}).then(data => console.log(data))
.catch(err => console.log('Desila se greska'));

function createP() {
	return new Promise((resolve, reject) => {
		let paragraph = document.createElement('p');
		paragraph.innerText = 'Lorem ipsum dolor sit amet.';
		document.body.append(paragraph);
		let err = false;

		if(err) {
			reject(new Error('Greska'));
		} else {
			resolve('OK');
		}
	});
}