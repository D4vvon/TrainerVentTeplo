const http = require('http');
const fs = require('fs');

const hostname = '127.0.0.1';
const port = 3000;

const server = http.createServer((req, res) => {
    res.statusCode = 200;
    res.setHeader('Content-Type', 'text/plain');
    res.end('Hello World!!');
});

server.listen(port, hostname, () => {
    console.log(`Server running at http://${hostname}:${port}/`);
});

function getRequest() {
    let rawdata = fs.readFileSync('data.json');
    let student = JSON.parse(rawdata);
    console.log(student);
}


function sendRequest() {
    let rawdata = fs.readFileSync('data.json');
    let parseddata = JSON.parse(rawdata);
    parseddata.push({
        "id": 2,
        "bIsWorked": "True",
        "t_out_air": 25,
        "t_out_water": 40,
        "fanSpeed": 50,
        "t_in_air": 20,
        "bIsAvaria": "False",
        "bIsAuto": "False",
        "t_main": 80,
        "t_1": 79,
        "t_2": 78,
        "t_out_main": 40,
        "t_out_2": 37
    });
    let data = JSON.stringify(parseddata);
    fs.writeFileSync('my.json', data);
    getRequest();
}