#!/usr/bin/env node
const url = 'https://swapi-api.hbtn.io/api/films/';
const request = require('request');

request(url + process.argv[2] + '/', (error, response, body) => {
  if (error) throw error;

  const film = JSON.parse(body);
  const charUrls = film.characters;

  charUrls.forEach((charUrl) => {
    request(charUrl, (error, response, body) => {
      const data = JSON.parse(body);
      const character = data.name;
      console.log(character);
    }
    );
  });
});
