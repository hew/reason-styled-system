module type Config = {let scale: array(int);};

module BoxMaker = (Config: Config) => {
  [@react.component]
  let make = (~py=?, ~px=?, ~p=?, ~mt=?, ~mb=?, ~ml=?, ~mr=?, ~children, ()) =>
    <div
      style={ReactDOMRe.Style.make(
        ~marginTop=
          switch (mt) {
          | Some(m) =>
            switch (m) {
            | m when m == 5 => (Config.scale[5] |> string_of_int) ++ "px"
            | m when m == 4 => (Config.scale[4] |> string_of_int) ++ "px"
            | m when m == 3 => (Config.scale[3] |> string_of_int) ++ "px"
            | m when m == 2 => (Config.scale[2] |> string_of_int) ++ "px"
            | m when m == 1 => (Config.scale[1] |> string_of_int) ++ "px"
            | m => (m |> string_of_int) ++ "px"
            }
          | None => ""
          },
        ~marginBottom=
          switch (mb) {
          | Some(m) =>
            switch (m) {
            | m when m == 5 => (Config.scale[5] |> string_of_int) ++ "px"
            | m when m == 4 => (Config.scale[4] |> string_of_int) ++ "px"
            | m when m == 3 => (Config.scale[3] |> string_of_int) ++ "px"
            | m when m == 2 => (Config.scale[2] |> string_of_int) ++ "px"
            | m when m == 1 => (Config.scale[1] |> string_of_int) ++ "px"
            | m => (m |> string_of_int) ++ "px"
            }
          | None => ""
          },
        ~marginLeft=
          switch (ml) {
          | Some(m) =>
            switch (m) {
            | m when m == 5 => (Config.scale[5] |> string_of_int) ++ "px"
            | m when m == 4 => (Config.scale[4] |> string_of_int) ++ "px"
            | m when m == 3 => (Config.scale[3] |> string_of_int) ++ "px"
            | m when m == 2 => (Config.scale[2] |> string_of_int) ++ "px"
            | m when m == 1 => (Config.scale[1] |> string_of_int) ++ "px"
            | m => (m |> string_of_int) ++ "px"
            }
          | None => ""
          },
        ~marginRight=
          switch (mr) {
          | Some(m) =>
            switch (m) {
            | m when m == 5 => (Config.scale[5] |> string_of_int) ++ "px"
            | m when m == 4 => (Config.scale[4] |> string_of_int) ++ "px"
            | m when m == 3 => (Config.scale[3] |> string_of_int) ++ "px"
            | m when m == 2 => (Config.scale[2] |> string_of_int) ++ "px"
            | m when m == 1 => (Config.scale[1] |> string_of_int) ++ "px"
            | m => (m |> string_of_int) ++ "px"
            }
          | None => ""
          },
        ~padding=
          switch (p) {
          | Some(p) =>
            switch (p) {
            | p when p == 5 => (Config.scale[5] |> string_of_int) ++ "px"
            | p when p == 4 => (Config.scale[4] |> string_of_int) ++ "px"
            | p when p == 3 => (Config.scale[3] |> string_of_int) ++ "px"
            | p when p == 2 => (Config.scale[2] |> string_of_int) ++ "px"
            | p when p == 1 => (Config.scale[1] |> string_of_int) ++ "px"
            | p => (p |> string_of_int) ++ "px"
            }
          | None => ""
          },
        ~paddingTop=
          switch (py) {
          | Some(p) =>
            switch (p) {
            | p when p == 5 => (Config.scale[5] |> string_of_int) ++ "px"
            | p when p == 4 => (Config.scale[4] |> string_of_int) ++ "px"
            | p when p == 3 => (Config.scale[3] |> string_of_int) ++ "px"
            | p when p == 2 => (Config.scale[2] |> string_of_int) ++ "px"
            | p when p == 1 => (Config.scale[1] |> string_of_int) ++ "px"
            | p => (p |> string_of_int) ++ "px"
            /* | None => [] */
            }
          | None => ""
          },
        ~paddingBottom=
          switch (py) {
          | Some(p) =>
            switch (p) {
            | p when p == 5 => (Config.scale[5] |> string_of_int) ++ "px"
            | p when p == 4 => (Config.scale[4] |> string_of_int) ++ "px"
            | p when p == 3 => (Config.scale[3] |> string_of_int) ++ "px"
            | p when p == 2 => (Config.scale[2] |> string_of_int) ++ "px"
            | p when p == 1 => (Config.scale[1] |> string_of_int) ++ "px"
            | p => (p |> string_of_int) ++ "px"
            }
          | None => ""
          },
        ~paddingLeft=
          switch (px) {
          | Some(p) =>
            switch (p) {
            | p when p == 5 => (Config.scale[5] |> string_of_int) ++ "px"
            | p when p == 4 => (Config.scale[4] |> string_of_int) ++ "px"
            | p when p == 3 => (Config.scale[3] |> string_of_int) ++ "px"
            | p when p == 2 => (Config.scale[2] |> string_of_int) ++ "px"
            | p when p == 1 => (Config.scale[1] |> string_of_int) ++ "px"
            | p => (p |> string_of_int) ++ "px"
            }
          | None => ""
          },
        ~paddingRight=
          switch (px) {
          | Some(p) =>
            switch (p) {
            | p when p == 5 => (Config.scale[5] |> string_of_int) ++ "px"
            | p when p == 4 => (Config.scale[4] |> string_of_int) ++ "px"
            | p when p == 3 => (Config.scale[3] |> string_of_int) ++ "px"
            | p when p == 2 => (Config.scale[2] |> string_of_int) ++ "px"
            | p when p == 1 => (Config.scale[1] |> string_of_int) ++ "px"
            | p => (p |> string_of_int) ++ "px"
            }
          | None => ""
          },
        (),
      )}>
      children
    </div>;
};
