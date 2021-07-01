let {render, querySelector} = module(ReactDOM)
switch querySelector("#example") {
| None => ()
| Some(e) => render(<Example />, e)
}
