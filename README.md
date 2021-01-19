# esp8266-button

Control a two state device (ON/OFF) with an ESP8266, a relay and aswitch push button


## Quick Start

### Clone repository

```
$ git clone git@github.com:KNaiskes/esp8266-button.git
```

### Create and activate virtual enviroment

```
$ cd esp8266-button
$ python -m venv venv
$ source venv/bin/activate
```

### Install dependencies

```
$ pip install -r requirements.txt
```

## Upload code to the board

```
$ platformio run --target upload
```

# Components

| list                        |
|-----------------------------|
| 1 ESP8266                   |
| 1 Switch Push Button        |
| 1 1K ohm resistor           |
| 1 Breadboard                |
| 1 Relay                     |
| 6 Male to Male Jumper Wires |


# Circuit
![project](https://user-images.githubusercontent.com/6069054/105068204-53ed1d80-5a89-11eb-8826-9efdc6af29bf.jpg)
