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


## Hyperparameter Selection
I started the hyperparameter choice by first selecting the parameters from the lecture (0.2, 3.0, 0.004) as a starting point. The magnitude of the parameters was a good starting point to know in what approximate range the parameters should be. With that I slowly manually adjusted the parameters up and down each time running the simulator until the car ran smoothly without too much overshoot and constant drift to one side. I finally arrived at the values (0.1, 4.0, 0.0001).

