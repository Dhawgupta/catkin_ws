
"use strict";

let AnalogWrite = require('./AnalogWrite.js')
let DigitalRead = require('./DigitalRead.js')
let ServoWrite = require('./ServoWrite.js')
let DigitalWrite = require('./DigitalWrite.js')
let AnalogRead = require('./AnalogRead.js')
let ServoRead = require('./ServoRead.js')
let DigitalSetDirection = require('./DigitalSetDirection.js')

module.exports = {
  AnalogWrite: AnalogWrite,
  DigitalRead: DigitalRead,
  ServoWrite: ServoWrite,
  DigitalWrite: DigitalWrite,
  AnalogRead: AnalogRead,
  ServoRead: ServoRead,
  DigitalSetDirection: DigitalSetDirection,
};
