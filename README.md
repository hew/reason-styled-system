# Reason Styled System

> styled-system in reason!

```reason
<Text px=3 size=80> {"hummussss" |> React.string} </Text>
```

## Status: WIP

**Use at your own risk.**

## About this Library

This is a proof-of-concept for a [styled-system](https://github.com/styled-system/) type of API in reason-react. 

styled-system allows for, as the author states, "rapid UI development", and this is true in reasonml also - perhapes even more so.
If typing is your bottleneck in reasonml-based iterative product design, you may benefit from this library, which allows you to
pre-define your font and spacing scale units, so you can reference them by scale index, as opposed to explicitly. This kind of abstraction
comes with a number of benefits.

Beyond reason-react, reason-styled-system is dependency-free, and will likely stay that way.

## Installation

1. install from github:
  ```sh
  npm i github.com:hew/reason-styled-system
  ```

2. Add the library to your `bsconfig.json`:
  ```json
  "bs-dependencies": ["reason-styled-system"],
  ```


## API 

```reason
/* System.re */
module Scale = {
  let space = [|2, 4, 8, 16, 32|];
  let font = [|2, 4, 8, 16, 32|];
};

module Units = {
  let px = "px";
};
```

```reason
/* Primatives.re */
module Box =
  Box.BoxMaker({
    let scale = System.Scale.space;
    let domUnit = System.Units.px;
  });

module Text =
  Text.TextMaker({
    let scale = System.Scale.font;
    let domUnit = System.Units.px;
  });

```

```reason
/* In some component */
[@react.component]
let make = () => {
  Primatives.(
    <>
      /* All the elements follow the scale, up to five. Past five, the value is just passed
         explicitly. So here, 3 = 8px, and 80 = 80px */
      <Text px=3 size=80> {"Sup mang" |> React.string} </Text>
      
      /* Here, 2 = 4px, and 30 = 30px */
      <Box mt=2 px=30> <div /> </Box>
    </>
  );
};

```


## Progress

**Core**
- [x] space
- [x] fontSize
- [x] color
- [ ] width

**Utility**
- [x] style
- [x] is (text)
- [ ] responsive

**Planned Others**
- [ ] flex


## Credits / Inspiration

* As this library is based on styled-system, most of the credits go to Brent Jackson and the maintainers of styled-system.
* https://github.com/hew/styled-functors
