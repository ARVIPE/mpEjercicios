void ficherosEspeciales(){
    while (fgets(nombre, 200, fich))
    {
        nombre[strlen(nombre)-1]='\0';
        fscanf(fich, "%s", dni);
        fscanf(fich, "%d\n", &edad);
    }
    
}