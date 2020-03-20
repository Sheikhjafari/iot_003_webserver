const char html_page[] PROGMEM = R"=====(


<!DOCTYPE html>
<html>
<head>
  <meta charset="utf-8">
  <meta name="viewport" content="width=device-width, initial-scale=1">
  <link rel="stylesheet" href="https://maxcdn.bootstrapcdn.com/bootstrap/3.4.1/css/bootstrap.min.css">
  <script src="https://ajax.googleapis.com/ajax/libs/jquery/3.4.1/jquery.min.js"></script>
  <script src="https://maxcdn.bootstrapcdn.com/bootstrap/3.4.1/js/bootstrap.min.js"></script>
<style>
body{
background: #d3d3d3;
}
.h2_header{
margin-left : 15px;
}
.div_header{
 margin-top : -10px;
 margin-right:10px;
 margin-bottom:-5px;
 margin-left : -10px;
 height: 120%;
 width: 120%;
 border: 1px solid #FFFFFF;
 background: #FFFFFF;
}



.slidecontainer {
 margin-top : 0px;
 margin-right:0px;
 margin-bottom:0px;
 margin-left : 0px;
  width: 100%;
  border: 1px solid #EEEEEE;
  background: #FFFFFF;
}

.slider {
  -webkit-appearance: none;
  width: 50%;
  height: 10px;
  border-radius: 5px;
  background: #d3d3d3;
  outline: none;
  opacity: 0.7;
  -webkit-transition: .0s;
  transition: opacity .2s;
}

.slider:hover {
  opacity: 1;
}

.slider::-webkit-slider-thumb {
  -webkit-appearance: none;
  appearance: none;
  width: 25px;
  height: 25px;
  border-radius: 50%;
  background: #326C88;
  cursor: pointer;
}

.slider::-moz-range-thumb {
  width: 25px;
  height: 25px;
  border-radius: 50%;
  background: #326C88;
  cursor: pointer;
}

/* Rounded switch */

.switch {
  position: relative;
  display: inline-block;
  width: 60px;
  height: 34px;
}

.switch input { 
  opacity: 0;
  width: 0;
  height: 0;
}

.slider1 {
  position: absolute;
  cursor: pointer;
  top: 0;
  left: 0;
  right: 0;
  bottom: 0;
  background-color: #ccc;
  -webkit-transition: .4s;
  transition: .4s;
}

.slider1:before {
  position: absolute;
  content: "";
  height: 26px;
  width: 26px;
  left: 4px;
  bottom: 4px;
  background-color: white;
  -webkit-transition: .2s;
  transition: .2s;
}

input:checked + .slider1 {
  background-color: #326C88;
}

input:focus + .slider1 {
  box-shadow: 0 0 1px #326C88;
}

input:checked + .slider1:before {
  -webkit-transform: translateX(26px);
  -ms-transform: translateX(26px);
  transform: translateX(26px);
}

.slider1.round {
  border-radius: 34px;
}

.slider1.round:before {
  border-radius: 50%;
}

</style>
</head>
<body>

<div class="div_header">

<h2 class="h2_header"> ESP8266 Server Control</h2>

</div>

<br>




<div class="container-fluid" style="background: #FFFFFF">
  <div class="row" style="margin-top:10px">
    <div class="col-sm-8">
      <p>YELLOW LED CONTRAST Value: <span id="slider_p"></span></p>
    </div>

    <div class="col-sm-4">
      <input type="range" min="0" max="1023" value="0" class="slider" id="myRange">
    </div>
  </div>


  <div class="row">
    <div class="col-sm-11">
      <p>RED LED Switch: <span id="led_state1">OFF</span></p> 
    </div>
   
    <div class="col-sm-1" >
    <label class="switch" >
      <input type="checkbox" onchange="state_change(this,'led_state1')">
      <span class="slider1 round"></span>
    </label>
    </div>
  </div>
  
   <div class="row">
    <div class="col-sm-11">
      <p>GREEN LED Switch: <span id="led_state2">OFF</span></p> 
    </div>

    <div class="col-sm-1" style="align-content:flex-start">
    <label class="switch">
      <input type="checkbox" onchange="state_change(this,'led_state2')">
      <span class="slider1 round"></span>
    </label>
    </div>
  </div>
</div>

<script src="https://canvasjs.com/assets/script/canvasjs.min.js"></script>


<script>
var slider = document.getElementById("myRange");
var output = document.getElementById("slider_p");
  
 i=slider.value;
   i=Math.round((i*100)/1023);
  output.innerHTML =i + "%"; 
  

slider.onchange = function() {
   i=this.value;
   i=Math.round((i*100)/1023);
  output.innerHTML =i + "%"; 
  pwm_change(1023-this.value);
}
</script>

<script>
function pwm_change(val) {
  var xhttp = new XMLHttpRequest();
  xhttp.open("GET", "setPWM?PWMval="+val, true);
  xhttp.send();
}
</script>

<script>
function state_change(element,id) {
  var xhttp = new XMLHttpRequest();
  
  if (element.checked){
    if(id=="led_state1"){
    xhttp.open("GET", "setButton1?button_state=1", true);
  }
  else if(id=="led_state2")
  {
    xhttp.open("GET", "setButton2?button_state=1", true);
  }
    document.getElementById(id).innerHTML = "ON";
  } else if (!element.checked){
    if(id=="led_state1"){
        xhttp.open("GET", "setButton1?button_state=0", true);
    }
    else if(id=="led_state2")
    {
       xhttp.open("GET", "setButton2?button_state=0", true);
    }
    document.getElementById(id).innerHTML = "OFF";
  }
  xhttp.send();
}
</script>

</body>

</html>

)=====";
