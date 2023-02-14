
// Futebol
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
        var tempo = 1000; // milésimos por segundos
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

        // Bask
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
        var tempo = 1000; // milésimos por segundos
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

        // Volei
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