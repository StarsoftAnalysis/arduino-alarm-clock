const char mainpage[] PROGMEM = R"=====(
<!DOCTYPE html>
<html lang="en" class="h-100">
<head>
<!--

    Copyright 2021 Chris Dennis

    This file is part of AlarmClock.

    AlarmClock is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AlarmClock is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with AlarmClock.  If not, see <https://www.gnu.org/licenses/>.

-->
    <title>Alarm Clock</title>
    <meta charset="utf-8">
    <meta name="viewport" content="width=device-width, initial-scale=1, shrink-to-fit=no">
    <link rel="shortcut icon" href="data:image/png;base64,iVBORw0KGgoAAAANSUhEUgAAACAAAAAgCAYAAABzenr0AAAAGXRFWHRTb2Z0d2FyZQBBZG9iZSBJbWFnZVJlYWR5ccllPAAAAyZpVFh0WE1MOmNvbS5hZG9iZS54bXAAAAAAADw/eHBhY2tldCBiZWdpbj0i77u/IiBpZD0iVzVNME1wQ2VoaUh6cmVTek5UY3prYzlkIj8+IDx4OnhtcG1ldGEgeG1sbnM6eD0iYWRvYmU6bnM6bWV0YS8iIHg6eG1wdGs9IkFkb2JlIFhNUCBDb3JlIDUuNi1jMTQ1IDc5LjE2MzQ5OSwgMjAxOC8wOC8xMy0xNjo0MDoyMiAgICAgICAgIj4gPHJkZjpSREYgeG1sbnM6cmRmPSJodHRwOi8vd3d3LnczLm9yZy8xOTk5LzAyLzIyLXJkZi1zeW50YXgtbnMjIj4gPHJkZjpEZXNjcmlwdGlvbiByZGY6YWJvdXQ9IiIgeG1sbnM6eG1wPSJodHRwOi8vbnMuYWRvYmUuY29tL3hhcC8xLjAvIiB4bWxuczp4bXBNTT0iaHR0cDovL25zLmFkb2JlLmNvbS94YXAvMS4wL21tLyIgeG1sbnM6c3RSZWY9Imh0dHA6Ly9ucy5hZG9iZS5jb20veGFwLzEuMC9zVHlwZS9SZXNvdXJjZVJlZiMiIHhtcDpDcmVhdG9yVG9vbD0iQWRvYmUgUGhvdG9zaG9wIENDIDIwMTkgKFdpbmRvd3MpIiB4bXBNTTpJbnN0YW5jZUlEPSJ4bXAuaWlkOjcyM0IyNEUzNzU1NTExRTlCMzkxRjQ2OEExQ0JBRDQyIiB4bXBNTTpEb2N1bWVudElEPSJ4bXAuZGlkOjcyM0IyNEU0NzU1NTExRTlCMzkxRjQ2OEExQ0JBRDQyIj4gPHhtcE1NOkRlcml2ZWRGcm9tIHN0UmVmOmluc3RhbmNlSUQ9InhtcC5paWQ6NzIzQjI0RTE3NTU1MTFFOUIzOTFGNDY4QTFDQkFENDIiIHN0UmVmOmRvY3VtZW50SUQ9InhtcC5kaWQ6NzIzQjI0RTI3NTU1MTFFOUIzOTFGNDY4QTFDQkFENDIiLz4gPC9yZGY6RGVzY3JpcHRpb24+IDwvcmRmOlJERj4gPC94OnhtcG1ldGE+IDw/eHBhY2tldCBlbmQ9InIiPz6w1L5cAAACMUlEQVR42sRX3ZGCQAwW5hqwBa4EeLqne8ASsAQoQUvQEqSEowR5uKd7ckuQFizBS5ys8xF3dUEcMxNxdDf58h+i8/k8eyd98EcURUGHs6/vOT1y4kSeSC1xx8/D3+8pRB4bH10+HgAgxaysJC4CDWuIawLSPgVALN4NUOwCUvk8chcAKU/psSeew88sqCY2zCS4k7McklS4dNxZ0FkTDIAElmI5ClmTkDowV/j+RgGp9H0nAIflHMely42SGzNXrCV8P5CsN564ASCXDpLlM0mkymPlTtw95ByHLLPGsO5YnV+BcuMTKpR4vvdIZBg4t8L/Y0CKfzLC5YT9ZikyL0aKrj4AcBPT1mb4FCSyti5dCKBQ9Ts1NS5dMbjfuqWd0nrlBVstiQ2D9UCqevqrCGWnCACzuHshgE5XTuw4dHohgBvZ8USCc4rpasxFF4B0RDyZNgTigDUeItsCMCFdTWU113Wl3MoKGEQR0D3NFYAaJvmA0uLplikD5nf2hxzutjoEDdRoMaS+iTPodCfV9WyrL8ADjSsHWk9bDgWy5nErc984jpQuXXocHwHlWuL8NEmFbGwvILmfvnFcqaxOJ1CegnKtow9AEgOt3tutZ6TyXLYrnLK98vXthHtVDYPDodxuh9widCl1reOdbMS1b82We6Vw8mg9D3kv0FZgEzEwXHAt1+T1XtCbESTR0FxoRbl5+tUMgBQCxFcdRhQ39xSPAuB7J9CtdQhdAbyT/gUYAIfcPyOnTyPUAAAAAElFTkSuQmCC" />

    <link rel="stylesheet" href="https://stackpath.bootstrapcdn.com/bootstrap/4.3.1/css/bootstrap.min.css" integrity="sha384-ggOyR0iXCbMQv3Xipma34MD+dH/1fQ784/j6cY/iJTQUOhcWr7x9JvoRxT2MZw1T" crossorigin="anonymous">
    <link rel="stylesheet" href="https://use.fontawesome.com/releases/v5.8.2/css/all.css" integrity="sha384-oS3vJWv+0UjzBfQzYUhtDYW+Pj2yciDJxpsK1OYPAYjqT085Qq/1cq5FLXAZQ7Ay" crossorigin="anonymous">

    <script src="https://code.jquery.com/jquery-3.5.1.min.js" integrity="sha256-9/aliU8dGd2tb6OSsuzixeV4y/faTqgFtohetphbbj0=" crossorigin="anonymous" xdefer></script>
    <script src="https://stackpath.bootstrapcdn.com/bootstrap/4.3.1/js/bootstrap.min.js" integrity="sha384-JjSmVgyd0p3pXB1rRibZUAYoIIy6OrQ6VrjIEaFf/nJGzIxFDsf4x0xIM+B07jRM" crossorigin="anonymous" xdefer></script>
    <script src="/js" xdefer></script>

</head>

<body class="d-flex flex-column h-100">
<nav class="navbar navbar-expand-md navbar-dark bg-dark">
  <div class="container">
      <h1 class="text-white mb-0"><i class="far fa-clock"></i> Alarm Clock</h1>
  </div>
</nav>
<main role="main">
  <div class="container">
    <div class=form-group>
      <div class="form-row">

        <div class="col-auto">
          <h2 class="mt-3">Set the alarm</h2>
          <table class=table-sm>
            <tr><th>Day</th><th>Alarm Time</th><th>Set?</th></tr>
            <tr><td>Sunday</td><td><input id="time0" type="time" class="form-control" aria-label="Alarm time Sunday"></td><td><input id="set0" class="form-control" type="checkbox" aria-label="Alarm set Sunday"</td></tr> 
            <tr><td>Monday</td><td><input id="time1" type="time" class="form-control" aria-label="Alarm time Monday"></td><td><input id="set1" class="form-control" type="checkbox" aria-label="Alarm set Monday"</td></tr> 
            <tr><td>Tuesday</td><td><input id="time2" type="time" class="form-control" aria-label="Alarm time Tuesday"></td><td><input id="set2" class="form-control" type="checkbox" aria-label="Alarm set Tuesday"</td></tr> 
            <tr><td>Wednesday</td><td><input id="time3" type="time" class="form-control" aria-label="Alarm time Wednesday"></td><td><input id="set3" class="form-control" type="checkbox" aria-label="Alarm set Wednesday"</td></tr> 
            <tr><td>Thursday</td><td><input id="time4" type="time" class="form-control" aria-label="Alarm time Thursday"></td><td><input id="set4" class="form-control" type="checkbox" aria-label="Alarm set Thursday"</td></tr> 
            <tr><td>Friday</td><td><input id="time5" type="time" class="form-control" aria-label="Alarm time Friday"></td><td><input id="set5" class="form-control" type="checkbox" aria-label="Alarm set Friday"</td></tr> 
            <tr><td>Saturday</td><td><input id="time6" type="time" class="form-control" aria-label="Alarm time Saturday"></td><td><input id="set6" class="form-control" type="checkbox" aria-label="Alarm set Saturday"</td></tr> 
          </table>
        </div>

        <div class="col-auto">
          <button class="btn btn-primary mt-3" type=button id=saveAlarm>Save</button>
        </div>

        <div class="col-auto">
          <h4 class="mt-3">Current Time</h4>
          <p id=currentTime class="h2 font-weight-bold font-italic">00:00</p>
        </div>

      </div>
    </div>

    <p><a href="/settings">Settings</a>

  </div>
</main>

<footer class="footer mt-auto bg-light text-dark py-3">
    <div class="container">
      <div class="row">
        <div class="col-sm">
            <i class='fas fa-fw fa-code-branch'></i> Version: 0.1.6<br>
            <i class='fas fa-fw fa-wifi'></i> Signal Strength: <span id="WiFiValue">...</span>%<br>
            <i class='fas fa-fw fa-lightbulb'></i> Light level: <span id="ADCValue">0</span>
        </div>
        <div class="col-sm text-left text-sm-right">
            <i class="fab fa-fw fa-github"></i> <a href="https://github.com/starsoftanalysis/arduino-alarm-clock/" target="_blank">GitHub</a><br>
            <i class="far fa-fw fa-question-circle"></i> <a href="http://blough.ie/bac/" target="_blank">Help & Support</a>
        </div>
      </div>
    </div>
</footer>
  </body>
</html>
)=====";
