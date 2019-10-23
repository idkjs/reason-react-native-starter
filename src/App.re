open ReactNative;
let styles =
  Style.(
    StyleSheet.create({
      "container":
        style(
          ~flex=1.,
          ~justifyContent=`center,
          ~alignItems=`center,
          ~backgroundColor="#F5FCFF",
          (),
        ),
      "instructions":
        style(~textAlign=`center, ~color="#333333", ~marginBottom=5.->dp, ()),
      "welcome":
        style(~fontSize=20., ~textAlign=`center, ~margin=10.->dp, ()),
    })
  );
let instructions =
  switch (Platform.os) {
  | os when os == Platform.ios =>
    "Press Cmd+R to reload,\n" ++ "Cmd+D or shake for dev menu"
  | os when os == Platform.android =>
    "Double tap R on your keyboard to reload,\n"
    ++ "Shake or press menu button for dev menu"
  | os when os == Platform.web => "Press Cmd+R to reload."
  | _ => ""
  };

[@react.component]
let app = () => {
  <View style=styles##container>
    <Text style=styles##welcome>
      "Welcome to React Native!"->React.string
    </Text>
    <Text style=styles##instructions>
      "To get started, edit App.js"->React.string
    </Text>
    <Text style=styles##instructions> instructions->React.string </Text>
  </View>;
};