const char html_page[] PROGMEM = R"=====(


<!DOCTYPE html>
<html>
<head>
  <meta charset="utf-8">
  <meta name="viewport" content="width=device-width, initial-scale=1">
   <link rel="stylesheet" href="https://maxcdn.bootstrapcdn.com/font-awesome/4.7.0/css/font-awesome.min.css">
  <link rel="stylesheet" href="https://fonts.googleapis.com/css?family=Ubuntu">
  <link rel="stylesheet" href="https://maxcdn.bootstrapcdn.com/bootstrap/3.3.7/css/bootstrap.min.css" integrity="sha384-BVYiiSIFeK1dGmJRAkycuHAHRg32OmUcww7on3RYdg4Va+PmSTsz/K68vbdEjh4u" crossorigin="anonymous">
  <link rel="stylesheet" href="https://maxcdn.bootstrapcdn.com/bootstrap/3.3.7/css/bootstrap-theme.min.css" integrity="sha384-rHyoN1iRsVXV4nD0JutlnGaslCJuC7uwjduW9SVrLvRYooPp2bWYgmgJQIXwl/Sp" crossorigin="anonymous">
  <link rel="stylesheet" href="http://code.ionicframework.com/ionicons/2.0.1/css/ionicons.min.css">
  <link rel="stylesheet" href="https://cdnjs.cloudflare.com/ajax/libs/bootstrap-slider/10.0.0/css/bootstrap-slider.min.css">

  <script src="https://ajax.googleapis.com/ajax/libs/jquery/3.2.1/jquery.min.js"></script>
  <script src="https://cdnjs.cloudflare.com/ajax/libs/bootstrap-slider/10.0.0/bootstrap-slider.min.js"></script>
  <script src="https://maxcdn.bootstrapcdn.com/bootstrap/3.3.7/js/bootstrap.min.js" integrity="sha384-Tc5IQib027qvyjSMfHjOMaLkfuWVxZxUPnCJA7l2mCWNIpG9mGCD8wGNIcPD7Txa" crossorigin="anonymous"></script>
  <script src="https://use.fontawesome.com/fd9dba5260.js"></script>
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
 width: 100%;
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

        .slider-selection {
        background: #f77500 !important;
        }
        .slider-success .slider-selection {
          background-color: #5cb85c !important;
        }
        .slider-primary .slider-selection {
          background-color: #428bca !important;
        }
        .slider-info .slider-selection {
          background-color: #5bc0de !important;
        }
        .slider-warning .slider-selection {
          background-color: #f0ad4e !important;
        }
        .slider-danger .slider-selection {
          background-color: #d9534f !important;
        }
        .slider.slider-horizontal {
          width: 100% !important;
          height: 20px;
        }
        .slider-handle {
          background-color: #fff !important;
          background-image: none !important;
          -webkit-box-shadow: 1px 1px 24px -2px rgba(0,0,0,0.75) !important;
          -moz-box-shadow: 1px 1px 24px -2px rgba(0,0,0,0.75) !important;
          box-shadow: 1px 1px 24px -2px rgba(0,0,0,0.75) !important;
        }

        .slider-strips .slider-selection {
          background-image: repeating-linear-gradient(-45deg, transparent, transparent 5px, rgba(255,252,252,0.08) 5px, rgba(252,252,252,0.08) 10px) !important;
          background-image: -ms-repeating-linear-gradient(-45deg, transparent, transparent 5px, rgba(255,252,252,0.08) 5px, rgba(252,252,252,0.08) 10px) !important;
          background-image: -o-repeating-linear-gradient(-45deg, transparent, transparent 5px, rgba(255,252,252,0.08) 5px, rgba(252,252,252,0.08) 10px) !important;
          background-image: -webkit-repeating-linear-gradient(-45deg, transparent, transparent 5px, rgba(255,252,252,0.08) 5px, rgba(252,252,252,0.08) 10px) !important; 
        }
        .tooltip-inner {
          max-width: 200px;
          padding: 3px 8px;
          color: #bdbdbd !important;
          text-align: center;
          background-color: transparent !important;
          border-radius: 4px;
        }
        .tooltip.top .tooltip-arrow {
          display: none !important;
        }
        .slider .tooltip.top {
          margin-top: -25px !important;
        }
        .well {
          background: transparent !important;
          border: none !important;
          box-shadow: none !important;
          width: 100% !important;
          padding: 0;
        }
        .slider-ghost .slider-track {
          height: 5px !important;
        }
        .slider-ghost .slider-handle {
          top: -2px !important;
          border: 5px solid #f77500;
        }
        .slider-success.slider-ghost .slider-handle {
          border-color: #5cb85c;
        }
        .slider-primary.slider-ghost .slider-handle {
          border-color: #428bca;
        }
        .slider-info.slider-ghost .slider-handle {
          border-color: #5bc0de;
        }
        .slider-warning.slider-ghost .slider-handle {
          border-color: #f0ad4e;
        }
        .slider-danger.slider-ghost .slider-handle {
          border-color: #d9534f;
        }
</style>
</head>
<body>

<div class="container-fluid" style="background: #FFFFFF">

<h2 class="h2_header">ESP8266 Web Control Panel</h2>

</div>

<br>




<div class="container-fluid" style="background: #FFFFFF;margin-left:20px;margin-right:20px;">



  <div class="row" style="margin-top:20px ;min-height:50px;">
    <div class="col-sm-7">
      <p>YELLOW LED CONTRAST Value: <span id="slider_p"></span></p>
    </div>

    <div class="col-sm-5" >
      <input type="range" min="0" max="1023" value="530" class="slider" id="myRange">
    </div>
  </div>


  <div class="row" style="min-height:50px;">
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
  
    <div class="row" style="min-height:50px;"> 
    <div class="col-sm-11">
      <p>GREEN LED Switch: <span id="led_state2">OFF</span></p> 
    </div>

    <div class="col-sm-1">
    <label class="switch">
      <input type="checkbox" onchange="state_change(this,'led_state2')">
      <span class="slider1 round"></span>
    </label>
    </div>
  </div>
</div>

<script src="https://canvasjs.com/assets/script/canvasjs.min.js"></script>

<script>
function pwm_change(val) {
  var xhttp = new XMLHttpRequest();
  xhttp.open("GET", "setPWM?PWMval="+val, true);
  xhttp.send();
}
</script>

<script>
var slider = document.getElementById("myRange");
var output = document.getElementById("slider_p");
  
   i=slider.value;
   i=Math.round((i*100)/1023)
  output.innerHTML =i + "%"; 
  pwm_change(1023-slider.value);


slider.onchange = function() {
   var i=this.value;
   i=Math.round((i*100)/1023)
   output.innerHTML =i + "%"; 
   pwm_change(1023-this.value);
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
