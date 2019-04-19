# Reason Styled System

## Status: WIP

**Use at your own risk.**

## About this Library

This is a proof-of-concept for a [styled-system](https://github.com/styled-system/) type of API in reason-react. 

Styled System allows for, as the author states, "rapid UI development", and this is true in reasonml also - perhapes even more so.
If typing is your bottleneck in reasonml-based iterative product design, you may benefit from this library, which allows you to
pre-define your font and spacing scale units, so you can reference them by scale index, as opposed to explicitly. This kind of abstraction
comes with a number of benefits. 

Beyond reason-react, Reason Styled System is dependency-free, and will likely stay that way.

## Progress

**Core**
- [x] space
- [x] fontSize
- [x] color
- [ ] width

**Utility**
- [x] style

**Planned Others**
- [ ] flex


## Installation

1. Install the library from github:
  ```sh
  npm i github.com:hew/reason-styled-system
  ```

2. Add the library to your `bsconfig.json`:
  ```json
  "bs-dependencies": ["reason-styled-system"],
  ```
