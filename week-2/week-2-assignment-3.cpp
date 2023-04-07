// Assignment-3
/*
  name        [ Valid | Good Practice ]
  NAME        [ Valid | Bad Practice ]

  1name       [ ??? ] => Reason ?
  ==========> [not valid] --> it starts with number

  __name      [ ??? ] => Reason ?
  ==========> [valid | bad practice] --> it starts with underscore

  name@name   [ ??? ] => Reason ?
  ==========> [not valid ] --> it icludes special charcter

  name10name  [ ??? ] => Reason ?
  ==========> [valid | bad practice ] --> it has numbers in the middle

  name!name   [ ??? ] => Reason ?
  ==========> [not valid ] --> it icludes special charcter

  first_NAME  [ ??? ] => Reason ?
  ==========> [valid | bad practice ] --> because the 2nd word it all uppercase

  first_name  [ ??? ] => Reason ?
  ==========> [valid | best practice ] --> because this way is snake_case

  firstName   [ ??? ] => Reason ?
  ==========> [valid | best practice ] --> because this way is camelCase

  first name  [ ??? ] => Reason ?
  ==========> [not valid ] --> it icludes white space

  fn          [ ??? ] => Reason ?
  ==========> [ valid | bad practice  ] --> it does'nt mean any thing

  public      [ ??? ] => Reason ?
  ==========> [not valid ] --> it icludes reserved word

  Public      [ ??? ] => Reason ?
  ==========> [valid | bad practice] --> it does'nt mean any thing

*/