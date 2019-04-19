module type Config = {let scale: array(int);};

module BoxMaker = (Config: Config) => {
  let beep = "";

  [@react.component]
  let make =
      (
        ~py=0,
        ~px=0,
        ~p=0,
        ~mt=0,
        ~mb=0,
        ~ml=0,
        ~mr=0,
        ~style=Css.style([]),
        children,
      ) => {
    <div
      style={ReactDOMRe.Style.make(
        ~marginTop=
          switch (mt) {
          | mt when mt == 5 => Config.scale[5] |> string_of_int
          | mt when mt == 4 => Config.scale[4] |> string_of_int
          | mt when mt == 3 => Config.scale[3] |> string_of_int
          | mt when mt == 2 => Config.scale[2] |> string_of_int
          | mt when mt == 1 => Config.scale[1] |> string_of_int
          | mt => mt |> string_of_int
          /* | None => [] */
          },
        (),
      )}>
      children
    </div>;
  };
};
