# Encountering-Fairies

A small game of encountering an interaction with one of the five fairies to earn points. When the user encounters a fairy, the fairy will state his/her name and ask what the user wants. In response, the user may:

    Ask for a wish,
    Offer to help the fairy, or
    Say goodbye to the fairy.

The user will continue to interact with the fairy until the user chooses the final option, saying goodbye to the fairy. Once the user says goodbye, the game moves on to the next fairy. After the user has encountered all of the fairies, the game is over and the user's points total is displayed.



Specifications

All interaction will occur through standard input and standard output.

Fairy (base class; NEVER instantiated):

  Must state his/her name and a greeting
  Must ask what the user wants
  Must respond to requests for wishes
  Must respond to offers to help

Good Fairy (derived class):

  Will always grant a wish
  For each wish granted, the user gets 10 points
  Will accept an offer for help once, but then decline additional offers
  The user earns 50 points for the offer to help
  Can grant up to 5 wishes

Evil Fairy (derived class):

  Will always deny the user's wish; i.e., cannot grant any wishes
  For each wish denied, the user loses 10 points
  Will always reject an offer of help
  For each offer rejected, the user loses 50 points

Equivocal Fairy (derived class):

  Will grant the user's wish sometimes (based on a random number generator)
  For each wish granted, the user gets 10 points
  For each wish denied, the user loses 10 points
  Will respond to an offer of help with the statement, "I'll think about it"
  Can grant up to 3 wishes
