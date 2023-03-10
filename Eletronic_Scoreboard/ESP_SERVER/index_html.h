const char Inicial_page_html[] PROGMEM = R"rawliteral(
<!DOCTYPE html>

<html>

<head>
  <title>Placar Eletr&ocircnico &#128223;&#128241;</title>
  <meta name="viewport" content="width=device-width, initial-scale=0.6, user-scalable=no">
  <style>

.emoji{
  font-size: 100px;
  height: 300px;
}

    .caixa {
      height: 600px;
      width: 450px;
      padding-top: 20px;
    }

    .caixa_cronometro {
      height: 140px;
      width: 480px;
      padding-top: 10px;
      padding-bottom: 20px;
    }

    .time1 {
      margin: auto;
      width: 110px;
      height: 300px;
      border: 5px solid rgb(100, 47, 70);
      padding: 10px;
      vertical-align: top;
      border-radius: 10px;
      background-color: rgb(238, 174, 202);
    }

    .time2 {
      margin: auto;
      width: 110px;
      height: 300px;
      border: 5px solid rgb(100, 47, 70);
      padding: 10px;
      vertical-align: top;
      border-radius: 10px;
      background-color: rgb(238, 174, 202);
    }

    .cron {
      margin: auto;
      max-height: 150px;
      border: 5px solid rgb(100, 47, 70);
      padding: 7.5px;
      width: 70%;
      min-width: 10px;
      text-align: center;
      vertical-align: auto;
      margin-left: auto;
      margin-right: auto;
      border-radius: 10px;
      background-color: rgb(238, 174, 202);
    }

    .botao {
      height: 170px;
      width: 420px;
      margin-top: 2.5px;
      margin-bottom: 2.5px;
      text-align: center;
    }

     html {
       align-items: center;
      font-family: Arial;
      text-align: center;
      margin: 20px;
    }

    h1 {
      display: block;
      font-size: 2em;
      margin-block-start: 0.67em;
      margin-block-end: 0.67em;
      margin-inline-start: 0px;
      margin-inline-end: 0px;
      font-weight: bold;
      font-family: 'Courier New', Courier, monospace;
      color: azure;
    }

    h2 {
      -webkit-text-stroke: 1.5px rgb(100, 47, 70);
      font-size: 2.6rem;
      color: #e993b8;
      font-family: 'Courier New', Courier, monospace;
      margin-bottom: 0px;
    }

    h3 {
      -webkit-text-stroke: 1.5px rgb(100, 47, 70);
      font-size: 2rem;
      color: #e993b8;
      font-family: 'Courier New', Courier, monospace;
      margin-top: 10px;
      margin-bottom: 10px;
    }

    h4 {
      -webkit-text-stroke: 1.5px rgb(100, 47, 70);
      font-size: 3rem;
      color: #e993b8;
      font-family: 'Courier New', Courier, monospace;
      margin-top: 15px;
      margin-bottom: 15px;
    }

    h5 {
      -webkit-text-stroke: 1.5px rgb(100, 47, 70);
      font-size: 2rem;
      color: #e993b8;
      font-family: 'Courier New', Courier, monospace;
      margin: 10px;
    }

    h6{
      -webkit-text-stroke: 1.5px rgb(100, 47, 70);
      font-size: 1.5rem;
      color: #e993b8;
      font-family: 'Courier New', Courier, monospace;
      margin-bottom: 2.5px;
      margin-top: 10px;
      float: center;
    }

    p {
      font-size: 1.5rem;
      color: azure;
      font-family: 'Courier New', Courier, monospace;
    }

    button {
      -webkit-text-stroke: 1.5px rgb(100, 47, 70);
      padding: 5px 17.5px;
      background-color: rgb(250, 214, 229);
      color: #e993b8;
      border: none;
      font-family: 'Poppoins', sans-serif;
      font-size: 18px;
      border-radius: 10px;
      border: 5px solid rgb(100, 47, 70);
      cursor: pointer;
      outline: none;
      font-family: 'Franklin Gothic Medium', 'Arial Narrow', Arial, sans-serif;
      font-size: 4rem;
    }

    body {
      width: 450px;
      height: 600px;
      display: inline-block;
      margin: 0px auto;
      background: rgb(238, 174, 202);
      background: radial-gradient(circle, rgba(238, 174, 202, 1) 0%, rgba(148, 187, 233, 1) 100%);
    }

    .slider {
      position: absolute;
      top: 0;
      left: 0;
      right: 0;
      bottom: 0;
      background-color: #ccc;
      border-radius: 34px
    }

    .op2 {
      width: auto;
      display: inline-block;
      margin-right: 0vw;
      font-size: 3vw;
      text-align: center;
      padding: 5vw 0vw 5vw 0vw;
      min-width: 40vw;

    }

    .op1 {
      width: auto;
      display: inline-block;
      margin-right: 0vw;
      font-size: 3vw;
      text-align: center;
      padding: 5vw 0vw 5vw 0vw;
      min-width: 40vw;

    }
  </style>
</head>

<body>
  <h2>Bem vindo ao nosso</h2>
  <h3>Placar Eletr&ocirc;nico</h3>
  <div class="emoji">
  &#127936;
  <br>
  &#9917;
  &#127952;
</div>
<br>
  <script>
  </script>

<div class="caixa">
  <h6>SELECIONE SEU ESPORTE:</h6>
  <a href="index_html"><button class="botao">Futebol &#9917;</button></a>
  <a href="volei_page_html"><button class="botao">Vol&ecirc;i &#127952;</button></a>
  <a href="bask_page_html"><button class="botao">Basquete &#127936;</button></a>
</div>
</body>

</html>
)rawliteral";

//-----------------------------------------------

const char index_html[] PROGMEM = R"rawliteral(
<!DOCTYPE html>

<html>

<head>
  <title>Placar Eletr&ocircnico &#128223;&#128241;</title>
  <meta name="viewport" content="width=device-width, initial-scale=0.6, user-scalable=no">
  <style>

.resetbutton{
      width: 565px;
    }

    .reset{
      padding-top: 0px;
      height: 200px;
    }

    .caixadetexto {
      height: 175px;
      width: 600px;
    }


    .caixa {
      height: 380px;
      width: 600px;

    }

    .caixa_cronometro{
      height: 140px;
      width: 600px;
      padding-top: 10px;
      padding-bottom: 20px;
    }

    .time1 {
      margin:auto;
      width: 250px;
      height: 300px;
      border: 5px solid rgb(100, 47, 70);
      padding: 10px;
      vertical-align: top;
      border-radius: 10px;
      background-color: rgb(238,174,202);
    }

    .time2 {
      margin: auto;
      width: 250px;
      height: 300px;
      border: 5px solid rgb(100, 47, 70);
      padding: 10px;
      vertical-align: top;
      border-radius: 10px;
      background-color: rgb(238,174,202);
    }

    .cron {
      margin: auto;
      max-height: 150px;
      border: 5px solid rgb(100, 47, 70);
      padding: 7.5px;
      width: 540px;
      min-width: 10px;
      text-align: center;
      vertical-align: auto;
      margin-left: auto;
      margin-right: auto;
      border-radius: 10px;
      background-color: rgb(238,174,202);
    }

    html {
      font-family: Arial;
      display: inline-block;
      text-align: center;
    }

    h1 {
    display: block;
    font-size: 2em;
    margin-block-start: 0.67em;
    margin-block-end: 0.67em;
    margin-inline-start: 0px;
    margin-inline-end: 0px;
    font-weight: bold;
    font-family: 'Courier New', Courier, monospace;
    color: azure;
}

    h2 {
      -webkit-text-stroke: 2.1px rgb(100, 47, 70);
      font-size: 2.6rem;
      color: #e993b8;
      font-family: 'Courier New', Courier, monospace;
      margin-top: 0px;
      margin-bottom: 0px;
}

h3 {
  -webkit-text-stroke: 1.5px rgb(100, 47, 70);
    font-size: 2rem;
    color: #e993b8;
    font-family: 'Courier New', Courier, monospace;
    margin-top: 10px;
    margin-bottom: 10px;
}

h4{
  -webkit-text-stroke: 2.5px rgb(100, 47, 70);
    font-size: 3rem;
    color: #e993b8;
    font-family: 'Courier New', Courier, monospace;
    margin-top: 15px;
    margin-bottom: 15px;
}

h5{
  -webkit-text-stroke: 1.5px rgb(100, 47, 70);
  font-size: 2rem;
    color: #e993b8;
    font-family: 'Courier New', Courier, monospace;
    margin: 10px;
}


p {
    font-size: 1.5rem;
    color: azure;
    font-family: 'Courier New', Courier, monospace;
}

button{
  -webkit-text-stroke: 1.3px rgb(100, 47, 70);
    padding: 5px 17.5px;
    background-color: rgb(250, 214, 229);
    color: #e993b8;
    border: none;
    font-family: 'Poppoins', sans-serif;
    font-size: 18px;
    border-radius: 10px;
    border: 5px solid rgb(100, 47, 70);
    cursor:pointer;
    outline: none;
    font-family:'Franklin Gothic Medium', 'Arial Narrow', Arial, sans-serif;
    font-size: 1.3rem;
}

    body {
      display: inline-block;
      margin: 0px auto;
      background: rgb(238,174,202);
      background: radial-gradient(circle, rgba(238,174,202,1) 0%, rgba(148,187,233,1) 100%);
    }

    .slider {
      position: absolute;
      top: 0;
      left: 0;
      right: 0;
      bottom: 0;
      background-color: #ccc;
      border-radius: 34px
    }

    .op2 {
      width: auto;
      display: inline-block;
      margin-right: 0vw;
      font-size: 3vw;
      text-align: center;
      padding: 5vw 0vw 5vw 0vw;
      min-width: 40vw;

    }

    .op1 {
      width: auto;
      display: inline-block;
      margin-right: 0vw;
      font-size: 3vw;
      text-align: center;
      padding: 5vw 0vw 5vw 0vw;
      min-width: 40vw;

    }
  </style>
</head>

<body>
  
  <div class="caixadetexto">
    <h4>Placar Eletr&ocircnico</h4>
    <h2>Futebol &#9917;</h2>
    <br>
    <h3>&#128317; Pontua&ccedil&atildeo: &#128317;</h3>
  </div>

  <script>

    var Time1 = 0000;

    function increment1() {
      Time1 = Time1 + 1;

      if (Time1 > 99) {
        Time1 = 0;
      }
      document.getElementById("counting1").innerText = Time1;
      document.getElementById("counting2").innerText = Time2;

      var xhr = new XMLHttpRequest();
      xhr.open("GET", "/contadorTime1?value=" + Time1, true);
      xhr.send();

      var xhr = new XMLHttpRequest();
      xhr.open("GET", "/contadorTime2?value=" + time_2, true);
      xhr.send();
    }

    function decrement1() {
      Time1 = Time1 - 1;

      if (Time1 < 0) {
        Time1 = 0;
      }
      document.getElementById("counting1").innerText = Time1;
      document.getElementById("counting2").innerText = Time2;

      var xhr = new XMLHttpRequest();
      xhr.open("GET", "/contadorTime1?value=" + Time1, true);
      xhr.send();

      var xhr = new XMLHttpRequest();
      xhr.open("GET", "/contadorTime2?value=" + time_2, true);
      xhr.send();
    }

    var Time2 = 0000;
    var time_2 = 0;

    function increment2() {
      Time2 = Time2 + 1;
      time_2 = time_2 + 100;

      if (time_2 > 9999) {
        time_2 = 0;
      }
      if (Time2 > 99) {
        Time2 = 0;
      }
      document.getElementById("counting1").innerText = Time1;
      document.getElementById("counting2").innerText = Time2;
      var xhr = new XMLHttpRequest();
      xhr.open("GET", "/contadorTime1?value=" + Time1, true);
      xhr.send();

      var xhr = new XMLHttpRequest();
      xhr.open("GET", "/contadorTime2?value=" + time_2, true);
      xhr.send();
    }

    function decrement2() {
      Time2 = Time2 - 1;
      time_2 = time_2 - 100;

      if (time_2 < 100){
        time_2 = 0000;
      }

      if (Time2 < 0) {
        Time2 = 0000;
      }

      document.getElementById("counting1").innerText = Time1;
      document.getElementById("counting2").innerText = Time2;
      var xhr = new XMLHttpRequest();
      xhr.open("GET", "/contadorTime1?value=" + Time1, true);
      xhr.send();

      var xhr = new XMLHttpRequest();
      xhr.open("GET", "/contadorTime2?value=" + time_2, true);
      xhr.send();
    }

    function reset() {
      Time1 = 0;
      Time2 = 0;
      time_2 = 0;


      document.getElementById("counting1").innerText = Time1;
      document.getElementById("counting2").innerText = Time2;

      var xhr = new XMLHttpRequest();
      xhr.open("GET", "/contadorTime1?value=" + Time1, true);
      xhr.send();

      var xhr = new XMLHttpRequest();
      xhr.open("GET", "/contadorTime2?value=" + time_2, true);
      xhr.send();
    }

    function logoutButton() {
      var xhr = new XMLHttpRequest();
      xhr.open("GET", "/logout", true);
      xhr.send();
      setTimeout(function () { window.open("/logged-out", "_self"); }, 1000);
    }

    "use strict"
    
    var min = 0;
    var mm = 0;
    var ss = 0;
    var tempo = 1000; // mil??simos por segundos
    var cron;

    function start() {
      cron = setInterval(() => { timer() }, tempo);
      document.getElementById("counter").innerText = cron;

      
    }

    function pause() {
      clearInterval(cron);
    }

    function stop() {
      clearInterval(cron);

      mm = 0;
      ss = 0;
      min = 0;
      document.getElementById("counter").innerText = "00:00";

      var xhr = new XMLHttpRequest();
      xhr.open("GET", "/Cronometro_ss?value=" + ss, true);
      xhr.send();

      var xhr = new XMLHttpRequest();
      xhr.open("GET", "/Cronometro_mm?value=" + min, true);
      xhr.send();

    }

    function timer() {
      ss++;
      console.log(ss);
      if (ss == 60) {
        ss = 0;
        mm++;
        min = min + 100;
      }
     

      var xhr = new XMLHttpRequest();
      xhr.open("GET", "/Cronometro_ss?value=" + ss, true);
      xhr.send();

      var xhr = new XMLHttpRequest();
      xhr.open("GET", "/Cronometro_mm?value=" + min, true);
      xhr.send();

      var format = (mm < 10 ? "0" + mm : mm) + ":" + (ss < 10 ? "0" + ss : ss);

      document.getElementById("counter").innerText = format;
    }

  </script>




  <div class="caixa">
    <div class="op1">
      <div class="time1">
        <h5>Time 1</h5>
        <br>
        <button onclick="increment1()">+1</button>
        <h4 id="counting1">0</h4>
        <button onclick="decrement1()">-1</button>
      </div>
    </div>
    <div class="op2">
      <div class="time2">
        <h5>Time 2</h5>
        <br>
        <button onclick="increment2()">+1</button>
        <h4 id="counting2">0</h4>
        <button onclick="decrement2()">-1</button>

      </div>
    </div>
  </div>

  <div class="reset">
    <button onclick="reset()" class="resetbutton">Reset</button>
  </div>
    <br>

    <div class="caixa_cronometro">

      <div class="cron">
        <button onclick="start();"> Iniciar </button>
        <button onclick="pause();">Pausar</button>
        <button onclick="stop();">Resetar</button>
        <h4 id="counter">00:00</h4>
      </div>
    </div>
    <br>
    <button onclick="logoutButton()">Logout</button>
</body>

</html>
)rawliteral";

//------------------------------------------------------------------------------------

const char volei_page_html[] PROGMEM = R"rawliteral(
<!DOCTYPE html>

<html>

<head>
  <title>Placar Eletr&ocircnico &#128223;&#128241;</title>
  <meta name="viewport" content="width=device-width, initial-scale=0.6, user-scalable=no">
  <style>

.resetbutton{
      width: 565px;
    }

    .reset{
      padding-top: 0px;
      height: 389px;
    }

    .caixadetexto {
      height: 175px;
      width: 600px;
    }

    .caixa {
      height: 380px;
      width: 600px;

    }

    .caixa_cronometro{
      height: 140px;
      width: 480px;
      padding-top: 10px;
      padding-bottom: 20px;
    }

    .time1 {
      margin:auto;
      width: 250px;
      height: 300px;
      border: 5px solid rgb(100, 47, 70);
      padding: 10px;
      vertical-align: top;
      border-radius: 10px;
      background-color: rgb(238,174,202);
    }

    .time2 {
      margin: auto;
      width: 250px;
      height: 300px;
      border: 5px solid rgb(100, 47, 70);
      padding: 10px;
      vertical-align: top;
      border-radius: 10px;
      background-color: rgb(238,174,202);
    }

    .cron {
      margin: auto;
      max-height: 150px;
      border: 5px solid rgb(100, 47, 70);
      padding: 7.5px;
      width: 540px;
      min-width: 10px;
      text-align: center;
      vertical-align: auto;
      margin-left: auto;
      margin-right: auto;
      border-radius: 10px;
      background-color: rgb(238,174,202);
    }

    html {
      font-family: Arial;
      display: inline-block;
      text-align: center;
    }

    h1 {
    display: block;
    font-size: 2em;
    margin-block-start: 0.67em;
    margin-block-end: 0.67em;
    margin-inline-start: 0px;
    margin-inline-end: 0px;
    font-weight: bold;
    font-family: 'Courier New', Courier, monospace;
    color: azure;
}

    h2 {
      -webkit-text-stroke: 2.1px rgb(100, 47, 70);
      font-size: 2.6rem;
      color: #e993b8;
      font-family: 'Courier New', Courier, monospace;
      margin-top: 0px;
      margin-bottom: 0px;
}

h3 {
  -webkit-text-stroke: 1.5px rgb(100, 47, 70);
    font-size: 2rem;
    color: #e993b8;
    font-family: 'Courier New', Courier, monospace;
    margin-top: 10px;
    margin-bottom: 10px;
}

h4{
  -webkit-text-stroke: 2.5px rgb(100, 47, 70);
    font-size: 3rem;
    color: #e993b8;
    font-family: 'Courier New', Courier, monospace;
    margin-top: 15px;
    margin-bottom: 15px;
}

h5{
  -webkit-text-stroke: 1.5px rgb(100, 47, 70);
  font-size: 2rem;
    color: #e993b8;
    font-family: 'Courier New', Courier, monospace;
    margin: 10px;
}


p {
    font-size: 1.5rem;
    color: azure;
    font-family: 'Courier New', Courier, monospace;
}

button{
  -webkit-text-stroke: 1.3px rgb(100, 47, 70);
    padding: 5px 17.5px;
    background-color: rgb(250, 214, 229);
    color: #e993b8;
    border: none;
    font-family: 'Poppoins', sans-serif;
    font-size: 18px;
    border-radius: 10px;
    border: 5px solid rgb(100, 47, 70);
    cursor:pointer;
    outline: none;
    font-family:'Franklin Gothic Medium', 'Arial Narrow', Arial, sans-serif;
    font-size: 1.3rem;
}

    body {
      display: inline-block;
      margin: 0px auto;
      background: rgb(238,174,202);
      background: radial-gradient(circle, rgba(238,174,202,1) 0%, rgba(148,187,233,1) 100%);
    }

    .slider {
      position: absolute;
      top: 0;
      left: 0;
      right: 0;
      bottom: 0;
      background-color: #ccc;
      border-radius: 34px
    }

    .op2 {
      width: auto;
      display: inline-block;
      margin-right: 0vw;
      font-size: 3vw;
      text-align: center;
      padding: 5vw 0vw 5vw 0vw;
      min-width: 40vw;

    }

    .op1 {
      width: auto;
      display: inline-block;
      margin-right: 0vw;
      font-size: 3vw;
      text-align: center;
      padding: 5vw 0vw 5vw 0vw;
      min-width: 40vw;

    }
  </style>
</head>

<body>
  <div class="caixadetexto">
    <h4>Placar Eletr&ocircnico</h4>
    <h2>Vol&ecirc;i &#127952;</h2>
    <br>
    <h3>&#128317; Pontua&ccedil&atildeo: &#128317;</h3>
  </div>

  <script>

    var Time1 = 0000;

    function increment1() {
      Time1 = Time1 + 1;

      if (Time1 > 99) {
        Time1 = 0;
      }
      document.getElementById("counting1").innerText = Time1;
      document.getElementById("counting2").innerText = Time2;

      var xhr = new XMLHttpRequest();
      xhr.open("GET", "/contadorTime1?value=" + Time1, true);
      xhr.send();

      var xhr = new XMLHttpRequest();
      xhr.open("GET", "/contadorTime2?value=" + time_2, true);
      xhr.send();
    }

    function decrement1() {
      Time1 = Time1 - 1;

      if (Time1 < 0) {
        Time1 = 0;
      }
      document.getElementById("counting1").innerText = Time1;
      document.getElementById("counting2").innerText = Time2;

      var xhr = new XMLHttpRequest();
      xhr.open("GET", "/contadorTime1?value=" + Time1, true);
      xhr.send();

      var xhr = new XMLHttpRequest();
      xhr.open("GET", "/contadorTime2?value=" + time_2, true);
      xhr.send();
    }

    var Time2 = 0000;
    var time_2 = 0;

    function increment2() {
      Time2 = Time2 + 1;
      time_2 = time_2 + 100;

      if (time_2 > 9999) {
        time_2 = 0;
      }
      if (Time2 > 99) {
        Time2 = 0;
      }
      document.getElementById("counting1").innerText = Time1;
      document.getElementById("counting2").innerText = Time2;
      var xhr = new XMLHttpRequest();
      xhr.open("GET", "/contadorTime1?value=" + Time1, true);
      xhr.send();

      var xhr = new XMLHttpRequest();
      xhr.open("GET", "/contadorTime2?value=" + time_2, true);
      xhr.send();
    }

    function decrement2() {
      Time2 = Time2 - 1;
      time_2 = time_2 - 100;

      if (time_2 < 100){
        time_2 = 0000;
      }

      if (Time2 < 0) {
        Time2 = 0000;
      }

      document.getElementById("counting1").innerText = Time1;
      document.getElementById("counting2").innerText = Time2;
      var xhr = new XMLHttpRequest();
      xhr.open("GET", "/contadorTime1?value=" + Time1, true);
      xhr.send();

      var xhr = new XMLHttpRequest();
      xhr.open("GET", "/contadorTime2?value=" + time_2, true);
      xhr.send();
    }

    function reset() {
      Time1 = 0;
      Time2 = 0;
      time_2 = 0;


      document.getElementById("counting1").innerText = Time1;
      document.getElementById("counting2").innerText = Time2;

      var xhr = new XMLHttpRequest();
      xhr.open("GET", "/contadorTime1?value=" + Time1, true);
      xhr.send();

      var xhr = new XMLHttpRequest();
      xhr.open("GET", "/contadorTime2?value=" + time_2, true);
      xhr.send();
    }

    function logoutButton() {
      var xhr = new XMLHttpRequest();
      xhr.open("GET", "/logout", true);
      xhr.send();
      setTimeout(function () { window.open("/logged-out", "_self"); }, 1000);
    }

 
    

  </script>




  <div class="caixa">
    <div class="op1">
      <div class="time1">
        <h5>Time 1</h5>
        <br>
        <button onclick="increment1()">+1</button>
        <h4 id="counting1">0</h4>
        <button onclick="decrement1()">-1</button>
      </div>
    </div>
    <div class="op2">
      <div class="time2">
        <h5>Time 2</h5>
        <br>
        <button onclick="increment2()">+1</button>
        <h4 id="counting2">0</h4>
        <button onclick="decrement2()">-1</button>

      </div>
    </div>
  </div>

  <div class="reset">
    <button onclick="reset()" class="resetbutton">Reset</button>
  </div>
    <br>

    <button onclick="logoutButton()">Logout</button>
</body>

</html>

)rawliteral";

//------------------------------------------------------------------------------------

const char bask_page_html[] PROGMEM = R"rawliteral(

<!DOCTYPE html>

<html>

<head>
  <title>Placar Eletr&ocircnico &#128223;&#128241;</title>
  <meta name="viewport" content="width=device-width, initial-scale=0.6, user-scalable=no">
  <style>

    .resetbutton{
      width: 565px;
    }

    .reset{
      padding-top: 0px;
      height: 200px;
    }

    .caixadetexto {
      height: 175px;
      width: 600px;
    }

    .caixa {
      height: 380px;
      width: 600px;
    }

    .caixa_cronometro {
      height: 140px;
      width: 600px;
      padding-top: 10px;
      padding-bottom: 20px;
    }

    .time1 {
      margin: auto;
      width: 250px;
      height: 300px;
      border: 5px solid rgb(100, 47, 70);
      padding: 10px;
      vertical-align: top;
      border-radius: 10px;
      background-color: rgb(238, 174, 202);
    }

    .time2 {
      margin: auto;
      width: 250px;
      height: 300px;
      border: 5px solid rgb(100, 47, 70);
      padding: 10px;
      vertical-align: top;
      border-radius: 10px;
      background-color: rgb(238, 174, 202);
    }

    .cron {
      margin: auto;
      max-height: 150px;
      border: 5px solid rgb(100, 47, 70);
      padding: 7.5px;
      width: 540px;
      min-width: 10px;
      text-align: center;
      vertical-align: auto;
      margin-left: auto;
      margin-right: auto;
      border-radius: 10px;
      background-color: rgb(238, 174, 202);
    }

    html {
      font-family: Arial;
      display: inline-block;
      text-align: center;
    }

    h1 {
      display: block;
      font-size: 2em;
      margin-block-start: 0.67em;
      margin-block-end: 0.67em;
      margin-inline-start: 0px;
      margin-inline-end: 0px;
      font-weight: bold;
      font-family: 'Courier New', Courier, monospace;
      color: azure;
    }

    h2 {
      -webkit-text-stroke: 2.1px rgb(100, 47, 70);
      font-size: 2.6rem;
      color: #e993b8;
      font-family: 'Courier New', Courier, monospace;
      margin-top: 0px;
      margin-bottom: 0px;
    }

    h3 {
      -webkit-text-stroke: 1.5px rgb(100, 47, 70);
      font-size: 2rem;
      color: #e993b8;
      font-family: 'Courier New', Courier, monospace;
      margin-top: 10px;
      margin-bottom: 10px;
    }

    h4 {
      -webkit-text-stroke: 2.5px rgb(100, 47, 70);
      font-size: 3rem;
      color: #e993b8;
      font-family: 'Courier New', Courier, monospace;
      margin-top: 15px;
      margin-bottom: 15px;
    }

    h5 {
      -webkit-text-stroke: 1.5px rgb(100, 47, 70);
      font-size: 2rem;
      color: #e993b8;
      font-family: 'Courier New', Courier, monospace;
      margin: 10px;
    }


    p {
      font-size: 1.5rem;
      color: azure;
      font-family: 'Courier New', Courier, monospace;
    }

    button {
      -webkit-text-stroke: 1.3px rgb(100, 47, 70);
      padding: 5px 17.5px;
      background-color: rgb(250, 214, 229);
      color: #e993b8;
      border: none;
      font-family: 'Poppoins', sans-serif;
      font-size: 18px;
      border-radius: 10px;
      border: 5px solid rgb(100, 47, 70);
      cursor: pointer;
      outline: none;
      font-family: 'Franklin Gothic Medium', 'Arial Narrow', Arial, sans-serif;
      font-size: 1.3rem;
    }

    body {
      display: inline-block;
      margin: 0px auto;
      background: rgb(238, 174, 202);
      background: radial-gradient(circle, rgba(238, 174, 202, 1) 0%, rgba(148, 187, 233, 1) 100%);
    }

    .slider {
      position: absolute;
      top: 0;
      left: 0;
      right: 0;
      bottom: 0;
      background-color: #ccc;
      border-radius: 34px
    }

    .op2 {
      width: auto;
      display: inline-block;
      margin-right: 0vw;
      font-size: 3vw;
      text-align: center;
      padding: 5vw 0vw 0vw 0vw;
      min-width: 40vw;

    }

    .op1 {
      width: auto;
      display: inline-block;
      margin-right: 0vw;
      font-size: 3vw;
      text-align: center;
      padding: 5vw 0vw 0vw 0vw;
      min-width: 40vw;

    }
  </style>
</head>

<body>
  <div class="caixadetexto">
    <h4>Placar Eletr&ocircnico</h4>
    <h2>Basquete &#127936;</h2>
    <br>
    <h3>&#128317; Pontua&ccedil&atildeo: &#128317;</h3>
  </div>

  <script>

    var Time1 = 0000;

    function increment1pt() {
      Time1 = Time1 + 1;

      if (Time1 > 99) {
        Time1 = 0;
      }
      document.getElementById("counting1").innerText = Time1;
      document.getElementById("counting2").innerText = Time2;

      var xhr = new XMLHttpRequest();
      xhr.open("GET", "/contadorTime1?value=" + Time1, true);
      xhr.send();

      var xhr = new XMLHttpRequest();
      xhr.open("GET", "/contadorTime2?value=" + time_2, true);
      xhr.send();
    }

    function increment2pt() {
      Time1 = Time1 + 2;

      if (Time1 > 99) {
        Time1 = 0;
      }
      document.getElementById("counting1").innerText = Time1;
      document.getElementById("counting2").innerText = Time2;

      var xhr = new XMLHttpRequest();
      xhr.open("GET", "/contadorTime1?value=" + Time1, true);
      xhr.send();

      var xhr = new XMLHttpRequest();
      xhr.open("GET", "/contadorTime2?value=" + time_2, true);
      xhr.send();
    }

    function increment3pt() {
      Time1 = Time1 + 3;

      if (Time1 > 99) {
        Time1 = 0;
      }
      document.getElementById("counting1").innerText = Time1;
      document.getElementById("counting2").innerText = Time2;

      var xhr = new XMLHttpRequest();
      xhr.open("GET", "/contadorTime1?value=" + Time1, true);
      xhr.send();

      var xhr = new XMLHttpRequest();
      xhr.open("GET", "/contadorTime2?value=" + time_2, true);
      xhr.send();
    }

    function decrement1pt() {
      Time1 = Time1 - 1;

      if (Time1 < 0) {
        Time1 = 0;
      }
      document.getElementById("counting1").innerText = Time1;
      document.getElementById("counting2").innerText = Time2;

      var xhr = new XMLHttpRequest();
      xhr.open("GET", "/contadorTime1?value=" + Time1, true);
      xhr.send();

      var xhr = new XMLHttpRequest();
      xhr.open("GET", "/contadorTime2?value=" + time_2, true);
      xhr.send();
    }

    function decrement2pt() {
      Time1 = Time1 - 2;

      if (Time1 < 0) {
        Time1 = 0;
      }
      document.getElementById("counting1").innerText = Time1;
      document.getElementById("counting2").innerText = Time2;

      var xhr = new XMLHttpRequest();
      xhr.open("GET", "/contadorTime1?value=" + Time1, true);
      xhr.send();

      var xhr = new XMLHttpRequest();
      xhr.open("GET", "/contadorTime2?value=" + time_2, true);
      xhr.send();
    }

    function decrement3pt() {
      Time1 = Time1 - 3;

      if (Time1 < 0) {
        Time1 = 0;
      }
      document.getElementById("counting1").innerText = Time1;
      document.getElementById("counting2").innerText = Time2;

      var xhr = new XMLHttpRequest();
      xhr.open("GET", "/contadorTime1?value=" + Time1, true);
      xhr.send();

      var xhr = new XMLHttpRequest();
      xhr.open("GET", "/contadorTime2?value=" + time_2, true);
      xhr.send();
    }

    var Time2 = 0000;
    var time_2 = 0;

    function increment21pt() {
      Time2 = Time2 + 1;
      time_2 = time_2 + 100;

      if (time_2 > 9999) {
        time_2 = 0;
      }
      if (Time2 > 99) {
        Time2 = 0;
      }
      document.getElementById("counting1").innerText = Time1;
      document.getElementById("counting2").innerText = Time2;
      var xhr = new XMLHttpRequest();
      xhr.open("GET", "/contadorTime1?value=" + Time1, true);
      xhr.send();

      var xhr = new XMLHttpRequest();
      xhr.open("GET", "/contadorTime2?value=" + time_2, true);
      xhr.send();
    }

    function increment22pt() {
      Time2 = Time2 + 2;
      time_2 = time_2 + 200;

      if (time_2 > 9999) {
        time_2 = 0;
      }
      if (Time2 > 99) {
        Time2 = 0;
      }
      document.getElementById("counting1").innerText = Time1;
      document.getElementById("counting2").innerText = Time2;
      var xhr = new XMLHttpRequest();
      xhr.open("GET", "/contadorTime1?value=" + Time1, true);
      xhr.send();

      var xhr = new XMLHttpRequest();
      xhr.open("GET", "/contadorTime2?value=" + time_2, true);
      xhr.send();
    }

    function increment23pt() {
      Time2 = Time2 + 3;
      time_2 = time_2 + 300;

      if (time_2 > 9999) {
        time_2 = 0;
      }
      if (Time2 > 99) {
        Time2 = 0;
      }
      document.getElementById("counting1").innerText = Time1;
      document.getElementById("counting2").innerText = Time2;
      var xhr = new XMLHttpRequest();
      xhr.open("GET", "/contadorTime1?value=" + Time1, true);
      xhr.send();

      var xhr = new XMLHttpRequest();
      xhr.open("GET", "/contadorTime2?value=" + time_2, true);
      xhr.send();
    }

    function decrement21pt() {
      Time2 = Time2 - 1;
      time_2 = time_2 - 100;

      if (time_2 < 100) {
        time_2 = 0000;
      }

      if (Time2 < 0) {
        Time2 = 0000;
      }

      document.getElementById("counting1").innerText = Time1;
      document.getElementById("counting2").innerText = Time2;
      var xhr = new XMLHttpRequest();
      xhr.open("GET", "/contadorTime1?value=" + Time1, true);
      xhr.send();

      var xhr = new XMLHttpRequest();
      xhr.open("GET", "/contadorTime2?value=" + time_2, true);
      xhr.send();
    }

    function decrement22pt() {
      Time2 = Time2 - 2;
      time_2 = time_2 - 200;

      if (time_2 < 100) {
        time_2 = 0000;
      }

      if (Time2 < 0) {
        Time2 = 0000;
      }

      document.getElementById("counting1").innerText = Time1;
      document.getElementById("counting2").innerText = Time2;
      var xhr = new XMLHttpRequest();
      xhr.open("GET", "/contadorTime1?value=" + Time1, true);
      xhr.send();

      var xhr = new XMLHttpRequest();
      xhr.open("GET", "/contadorTime2?value=" + time_2, true);
      xhr.send();
    }

    function decrement23pt() {
      Time2 = Time2 - 3;
      time_2 = time_2 - 300;

      if (time_2 < 100) {
        time_2 = 0000;
      }

      if (Time2 < 0) {
        Time2 = 0000;
      }

      document.getElementById("counting1").innerText = Time1;
      document.getElementById("counting2").innerText = Time2;
      var xhr = new XMLHttpRequest();
      xhr.open("GET", "/contadorTime1?value=" + Time1, true);
      xhr.send();

      var xhr = new XMLHttpRequest();
      xhr.open("GET", "/contadorTime2?value=" + time_2, true);
      xhr.send();
    }

    function reset() {
      Time1 = 0;
      Time2 = 0;
      time_2 = 0;


      document.getElementById("counting1").innerText = Time1;
      document.getElementById("counting2").innerText = Time2;

      var xhr = new XMLHttpRequest();
      xhr.open("GET", "/contadorTime1?value=" + Time1, true);
      xhr.send();

      var xhr = new XMLHttpRequest();
      xhr.open("GET", "/contadorTime2?value=" + time_2, true);
      xhr.send();
    }

    function logoutButton() {
      var xhr = new XMLHttpRequest();
      xhr.open("GET", "/logout", true);
      xhr.send();
      setTimeout(function () { window.open("/logged-out", "_self"); }, 1000);
    }

    "use strict"

    var min = 0;
    var mm = 0;
    var ss = 0;
    var tempo = 1000; // mil??simos por segundos
    var cron;

    function start() {
      cron = setInterval(() => { timer() }, tempo);
      document.getElementById("counter").innerText = cron;


    }

    function pause() {
      clearInterval(cron);
    }

    function stop() {
      clearInterval(cron);

      mm = 0;
      ss = 0;
      min = 0;
      document.getElementById("counter").innerText = "00:00";

      var xhr = new XMLHttpRequest();
      xhr.open("GET", "/Cronometro_ss?value=" + ss, true);
      xhr.send();

      var xhr = new XMLHttpRequest();
      xhr.open("GET", "/Cronometro_mm?value=" + min, true);
      xhr.send();

    }

    function timer() {
      ss++;
      console.log(ss);
      if (ss == 60) {
        ss = 0;
        mm++;
        min = min + 100;
      }


      var xhr = new XMLHttpRequest();
      xhr.open("GET", "/Cronometro_ss?value=" + ss, true);
      xhr.send();

      var xhr = new XMLHttpRequest();
      xhr.open("GET", "/Cronometro_mm?value=" + min, true);
      xhr.send();

      var format = (mm < 10 ? "0" + mm : mm) + ":" + (ss < 10 ? "0" + ss : ss);

      document.getElementById("counter").innerText = format;
    }

  </script>




  <div class="caixa">
    <div class="op1">
      <div class="time1">
        <h5>Time 1</h5>
        <br>
        <button onclick="increment1pt()">+1</button>
        <button onclick="increment2pt()">+2</button>
        <button onclick="increment3pt()">+3</button>
        <h4 id="counting1">0</h4>
        <button onclick="decrement1pt()">-1</button>
        <button onclick="decrement2pt()">-2</button>
        <button onclick="decrement3pt()">-3</button>
      </div>
    </div>
    <div class="op2">
      <div class="time2">
        <h5>Time 2</h5>
        <br>
        <button onclick="increment21pt()">+1</button>
        <button onclick="increment22pt()">+2</button>
        <button onclick="increment23pt()">+3</button>
        <h4 id="counting2">0</h4>
        <button onclick="decrement21pt()">-1</button>
        <button onclick="decrement22pt()">-2</button>
        <button onclick="decrement23pt()">-3</button>
      </div>
    </div>
  </div>

  <div class="reset">
    <button onclick="reset()" class="resetbutton">Reset</button>
  </div>
  <br>

  <div class="caixa_cronometro">

    <div class="cron">
      <button onclick="start();"> Iniciar </button>
      <button onclick="pause();">Pausar</button>
      <button onclick="stop();">Resetar</button>
      <h4 id="counter">00:00</h4>
    </div>
  </div>
  <br>
  <button onclick="logoutButton()">Logout</button>
</body>

</html>

)rawliteral";

//------------------------------------------------------------------------------------

const char logout_html[] PROGMEM = R"rawliteral(
<!DOCTYPE html>
<html>
<head>
  <meta name="viewport" content="width=device-width, initial-scale=0.75, user-scalable=no">
<body>
  <p>Logged out or <a href="/">return to homepage</a>.</p>
  <p><strong>Note:</strong> close all web browser tabs to complete the logout process.</p>
</body>
</html>
)rawliteral";
