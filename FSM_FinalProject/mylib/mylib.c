void Statecon(int User_S, int User_F, int Oven_0, int Oven_1, int nextState[2]){
nextState[0] = ((!User_S) & User_F) | ((!Oven_1) & Oven_0) | (Oven_1 & (!Oven_0)) | (User_S & (!User_F) & Oven_1);

nextState[1] = (User_S & User_F) | (User_S & User_F & (!Oven_0)) | (User_S & Oven_1);
}

void Output(int Oven_state, int result[2]){
  result[0] = !Oven_state;
  result[1] = Oven_state;
}

