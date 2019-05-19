

//Continuacion del ejercicio del otro dia


int to_file(std::string filename, const alumno& a) {

	std::ofstream fout(fliename);
	if (!fout) {
		str::cout << strerror(errno);
			return -1;
	}

	//escribe
	fout<<to_string(a);
	fout.close();
	return 0;
}



int main(int argc, char**argv) {
	alumno a;
	a.asignatura = "inf_ind";
	a.id_mat=355354;
	a.id_grupo = 1;

	//check parametros


	if (argc != 4) { //2 si fuera solo el fichero, 3 si fichero y nombre....
		std::cout << "Introduzca el nombre del archivo" << std::endl;; //dos puntos y coma
		return -1;
	}

	a.nombre = argv[2];
	a.asignatura = argv[3];
	a309::to_file = argv[1];
	a309::to_file(file, a);

}