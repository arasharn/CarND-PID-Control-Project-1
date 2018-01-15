# CarND-Controls-PID
Self-Driving Car Engineer Nanodegree Program

---
## Introduction

This repository contains the second version of lane-keeping project which implemented the goal through a PID controller instead of a deep-learning enabled steering angle prediction as completed before.

## Overview

For this project, we used a PID controller which stands for Proportional, Integral, and Differential controller. A controller has generally the purpose of following a signal trajectory given system dynamics which are making the task more difficult i.e. are the reason why issues like overshoot and rise time exist.

## PID Control

### P
The proportional part of the controller simply calculates the steering angle as the error scaled by a constant (proportional) factor. This also means that no matter how small the error there will always be overshoot by the nature of the control mechanism. I.e. for the P controller to act an error has to exist therefore it will always have minimal overshoot.

### I
The integral part of the controller computes the area under the error curve by continously adding up the error and scaling it by the i-factor. This component of the PID controller accounts for the constant error that is accumulating and constantly increasing over each time step.

### D
The differential part of the controller is a term that uses the difference between the previous and current time step to create another part of the PID controller. This part controlls the overshoot caused by the P controller and allows the control signal to asymptotically approach the goal trajectory.


## Dependencies

* cmake >= 3.5
 * All OSes: [click here for installation instructions](https://cmake.org/install/)
* make >= 4.1(mac, linux), 3.81(Windows)
  * Linux: make is installed by default on most Linux distros
  * Mac: [install Xcode command line tools to get make](https://developer.apple.com/xcode/features/)
  * Windows: [Click here for installation instructions](http://gnuwin32.sourceforge.net/packages/make.htm)
* gcc/g++ >= 5.4
  * Linux: gcc / g++ is installed by default on most Linux distros
  * Mac: same deal as make - [install Xcode command line tools]((https://developer.apple.com/xcode/features/)
  * Windows: recommend using [MinGW](http://www.mingw.org/)
* [uWebSockets](https://github.com/uWebSockets/uWebSockets)
  * Run either `./install-mac.sh` or `./install-ubuntu.sh`.
  * If you install from source, checkout to commit `e94b6e1`, i.e.
    ```
    git clone https://github.com/uWebSockets/uWebSockets 
    cd uWebSockets
    git checkout e94b6e1
    ```
    Some function signatures have changed in v0.14.x. See [this PR](https://github.com/udacity/CarND-MPC-Project/pull/3) for more details.
* Simulator. You can download these from the [project intro page](https://github.com/udacity/self-driving-car-sim/releases) in the classroom.

There's an experimental patch for windows in this [PR](https://github.com/udacity/CarND-PID-Control-Project/pull/3)
