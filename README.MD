# TinyLandsAR - Terrain Manipulator

## Table of Contents
1. [Introduction](#introduction)
2. [Setup](#setup)
3. [Install](#install)
4. [Future Work}(#futurework)

## Introduction <a name="introduction"></a>
The goal of this project was to explore how to use ARkit at the time of its release and to do something different. The overall goal is to make an interactive Terrain/World generator, 
in which natural and unnatural elements can be placed in the scene and interact with eachother.

## Setup <a name="setup"></a>
At the time of writing (07/14/2017), these componenets are needed to setup this project and to use ARkit.

- Mac Computer
	- (https://www.apple.com/macbook-pro/)
- ARkit Capable Apple device w/ iOS11 beta installed
	- (https://www.apple.com/shop/buy-ipad/ipad-pro)
- MacVR Beta Unity Build 
	- (http://beta.unity3d.com/download/c92f68c59a22/public_download.html)
	- (https://unity3d.com/unity/beta/unity2017.1.0b5)
- Download the ARkit plugin for Unity3d 
	- (https://www.assetstore.unity3d.com/en/#!/content/92515)

## Install <a name="install"></a>
This is how you install and deploy the application to an apple device

1. If there is a Build folder with an xCode project inside <a name="install-step1"></a>
	1. Open the project
	2. Set the the device to your apple device
	3. Set the team under the Signing panel in General application settings
2. If there is NOT an xcodeproj file in the Build folder
	1. Open the project in Unity
	2. Build the project for iOS (CMD + Shift + B) (CTRL + Shift + B)
	3. Once the builds finishes follow the instructions on [Step 1](#install-step1).

## Future Work <a name="futurework"></a>
- Boids birds flying around the environemnt and avoiding terrain
- Grazing animals
- Clouds that move or dissapear when terrain is pushed through them
- Water interaction
- Addition of unnatural objects such as houses, boats
- Fun Interactions:
	- Dropping bombs to deform terrain
	- Cast storms through the terrain (Tornadoes, Hurricanes, etc)
	


