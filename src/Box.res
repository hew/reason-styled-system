module type Config = {
  let scale: array<int>
  let domUnit: string
}

module BoxMaker = (Config: Config) => {
  let systemize = shorthand =>
    shorthand->Belt.Option.mapWithDefault("", m => {
      let scale = string_of_int(
        switch m {
        | 1
        | 2
        | 3
        | 4
        | 5 =>
          Config.scale[m]
        | _ => m
        },
      )

      scale ++ Config.domUnit
    })

  @react.component
  let make = (~py=?, ~px=?, ~p=?, ~mt=?, ~mb=?, ~ml=?, ~mr=?, ~children, ()) =>
    <div
      style={ReactDOM.Style.make(
        ~marginTop=systemize(mt),
        ~marginBottom=systemize(mb),
        ~marginLeft=systemize(ml),
        ~marginRight=systemize(mr),
        ~padding=systemize(p),
        ~paddingTop=systemize(py),
        ~paddingBottom=systemize(py),
        ~paddingLeft=systemize(px),
        ~paddingRight=systemize(px),
        (),
      )}>
      children
    </div>
}
