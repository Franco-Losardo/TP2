#include <fstream>
#include <algorithm>
#include "../archivos_h/andypolis.h"

using namespace std;

Andypolis::Andypolis() {
    this -> cantidad_edificios = 0;
    this -> edificios_disponibles = new Edificio*[EDIFICIOS_DISPONIBLES_MINIMO];
    this -> inventario.cargar_inventario();
    this -> mapa.cargar_mapa();
    this -> cargar_edificios_disponibles();
}

void Andypolis::guardar_y_salir() {
    this -> inventario.guardar_inventario();
    guardar_edificios();
}

void Andypolis::cargar_edificios_disponibles() {
    ifstream archivo_edificios(RUTA_EDIFICIOS);
    if (!archivo_edificios) {
        cout << COLOR_ROJO << "El archivo de edificios no existe. Para continuar, crealos y volve a correr el programa." << COLOR_POR_DEFECTO << endl;
        exit(1);
    }
    string nombre;
    string piedra;
    string madera;
    string metal;
    string permitidos;
    while(!archivo_edificios.eof()) {
        getline(archivo_edificios, nombre, DELIMITADOR);
        getline(archivo_edificios, piedra, DELIMITADOR);
        getline(archivo_edificios, madera, DELIMITADOR);
        getline(archivo_edificios, metal, DELIMITADOR);
        getline(archivo_edificios, permitidos);

        if (nombre == "aserradero") {
            this -> edificios_disponibles[this -> cantidad_edificios] = new Aserradero(nombre, stoi(piedra), stoi(madera), stoi(metal), stoi(permitidos));
        }
        else if (nombre == "escuela") {
            this -> edificios_disponibles[this -> cantidad_edificios] = new Escuela(nombre, stoi(piedra), stoi(madera), stoi(metal), stoi(permitidos));
        }
        else if (nombre == "fabrica") {
            this -> edificios_disponibles[this -> cantidad_edificios] = new Fabrica(nombre, stoi(piedra), stoi(madera), stoi(metal), stoi(permitidos));
        }
        else if (nombre == "mina") {
            this -> edificios_disponibles[this -> cantidad_edificios] = new Mina(nombre, stoi(piedra), stoi(madera), stoi(metal), stoi(permitidos));
        }
        else if (nombre == "obelisco") {
            this -> edificios_disponibles[this -> cantidad_edificios] = new Obelisco(nombre, stoi(piedra), stoi(madera), stoi(metal), stoi(permitidos));
        }
        else if (nombre == "planta") {
            this -> edificios_disponibles[this -> cantidad_edificios] = new Planta_electrica("planta electrica", stoi(piedra), stoi(madera), stoi(metal), stoi(permitidos));
        }
        this -> cantidad_edificios++;

        if (this -> cantidad_edificios == EDIFICIOS_DISPONIBLES_MINIMO) {
            this -> redimensionar_arreglo_edificios(this -> cantidad_edificios * 2);
        }
    }
    archivo_edificios.close();
    this -> redimensionar_arreglo_edificios(this -> cantidad_edificios);
}

void Andypolis::redimensionar_arreglo_edificios(int nueva_longitud) {
    Edificio** nuevo_vector_edificios = new Edificio*[nueva_longitud];
    for (int i = 0; i < this -> cantidad_edificios; i++) {
        nuevo_vector_edificios[i] = this -> edificios_disponibles[i];
    }
    delete [] this -> edificios_disponibles;
    this -> edificios_disponibles = nuevo_vector_edificios;
}

int Andypolis::pedir_opcion() {
    int opcion_ingresada = 0;
    cout << endl;
    cout << "1. Construir edificio por nombre" << endl;
    cout << endl;
    cout << "2. Listar los edificios construidos" << endl;
    cout << endl;
    cout << "3. Listar todos los edificios" << endl;
    cout << endl;
    cout << "4. Demoler un edificio por coordenada" << endl;
    cout << endl;
    cout << "5. Mostrar mapa" << endl;
    cout << endl;
    cout << "6. Consultar coordenada" << endl;
    cout << endl;
    cout << "7. Mostrar inventario" << endl;
    cout << endl;
    cout << "8. Recolectar recursos producidos" << endl;
    cout << endl;
    cout << "9. Lluvia de recursos" << endl;
    cout << endl;
    cout << "10. Guardar y salir" << endl;
    cout << "Ingrese la opcion deseada: ";
    cin >> opcion_ingresada;
    system(CLR_SCREEN);
    return opcion_ingresada;
}

void Andypolis::guardar_edificios() {

}

bool Andypolis::existe_el_edificio(string edificio){
    bool existe = false;
    for (int i = 0; i < this->cantidad_edificios; i++){
        if (this->edificios_disponibles[i]->obtener_nombre() == edificio){
            existe = true;
        }
    }
    return existe;
}

void Andypolis::mostrar_nombres_de_edificios(){
    for (int i = 0; i < this->cantidad_edificios; i++){
        cout << ". " << this->edificios_disponibles[i]->obtener_nombre() << endl;
        cout << COLOR_MARRON << LINEA_DIVISORIA << COLOR_POR_DEFECTO << endl;
    }
}

int Andypolis::posicion_del_edifcio(string edificio){
    int pos_edificio = -1;
    for (int i = 0; i < this->cantidad_edificios; i++){
        if (this->edificios_disponibles[i]->obtener_nombre() == edificio){
            pos_edificio = i;
        }
    }
    return pos_edificio;
}

int* Andypolis::obtener_materiales_necesarios(int pos_edificio){
    int* materiales_necesarios = this->edificios_disponibles[pos_edificio]->obtener_materiales_necesarios();
    return materiales_necesarios;
}

bool Andypolis::hay_materiales_suficientes(string edificio_a_construir){
    bool hay_mat_suficientes = true;
    int cantidad_de_materiales = this->inventario.obtener_cantidad_materiales();
    int* materiales_necesarios;
    Material* materiales_actuales = this->inventario.obtener_inventario();
    for (int i = 0; i < this->cantidad_edificios; i++){
        if(this->edificios_disponibles[i]->obtener_nombre() == edificio_a_construir){
            materiales_necesarios = obtener_materiales_necesarios(i);
        }
    }
    int piedra_necesaria = materiales_necesarios[0];
    int madera_necesaria = materiales_necesarios[1];
    int metal_necesario = materiales_necesarios[2];

    for (int i = 0; i < cantidad_de_materiales; i++){
        if (materiales_actuales[i].obtener_tipo() == "piedra"){
            if (materiales_actuales[i].obtener_cantidad() < piedra_necesaria){
                hay_mat_suficientes = false;
            }
        }
        else if (materiales_actuales[i].obtener_tipo() == "madera"){
            if (materiales_actuales[i].obtener_cantidad() < madera_necesaria){
                hay_mat_suficientes = false;
            }
        }
        else if (materiales_actuales[i].obtener_tipo() == "metal"){
            if (materiales_actuales[i].obtener_cantidad() < metal_necesario){
                hay_mat_suficientes = false;
            }
        }
    }
    return hay_mat_suficientes;
}

bool Andypolis::se_alcanzo_maximo_permitido(string edificio_a_construir){
    int pos_edificio = posicion_del_edifcio(edificio_a_construir);
    int cantidad_de_construidos = this->edificios_disponibles[pos_edificio]->obtener_construidos();
    int maximo_permitido = this->edificios_disponibles[pos_edificio]->obtener_cantidad_permitida();
    return (cantidad_de_construidos == maximo_permitido);
}

bool Andypolis::pedir_confirmacion(string edificio_a_construir){
    string decision;
    cout << "Está seguro que quiere construir un/a " << edificio_a_construir << " ?(s/n): ";
    cin >> decision;
    transform(decision.begin(), decision.end(), decision.begin(), ::tolower); //convierte la entrada a minuscula
    return (decision == "s");
}


int* Andypolis::pedir_coordenadas(){
    string coord_x;
    string coord_y;
    cout << "Ingrese la coordenada x(columna): ";
    cin >> coord_x;
    cout << "Ingrese la coordenada y(fila): ";
    cin >> coord_y;
    int* coordenadas = new int[2];//pido memoria!!!
    coordenadas[0] = stoi(coord_x);
    coordenadas[1] = stoi(coord_y);
    return coordenadas;
}

void Andypolis::actualizar_cant_materiales(int pos_edificio){
    int* materiales_necesarios = obtener_materiales_necesarios(pos_edificio);
    int piedra_necesaria = materiales_necesarios[0];
    int madera_necesaria = materiales_necesarios[1];
    int metal_necesario = materiales_necesarios[2];
    Material* materiales_actuales = this->inventario.obtener_inventario();

    for (int i = 0; i < this->inventario.obtener_cantidad_materiales(); i++){
        if (materiales_actuales[i].obtener_tipo() == "piedra"){
            materiales_actuales[i].usar_material(piedra_necesaria);
        }
        else if (materiales_actuales[i].obtener_tipo() == "madera"){
            materiales_actuales[i].usar_material(madera_necesaria);
        }
        else if (materiales_actuales[i].obtener_tipo() == "metal"){
            materiales_actuales[i].usar_material(metal_necesario);
        }
    }
    
}


bool Andypolis::se_puede_construir(int coord_x, int coord_y) {
    bool es_casillero_construible = this->mapa.se_puede_construir(coord_x, coord_y);
    cout << "es constr: " << es_casillero_construible << endl;
    bool esta_ocupado = this->mapa.esta_ocupado(coord_x, coord_y);
    return (es_casillero_construible && !esta_ocupado);
    
}

Edificio* Andypolis::construir_edificio(string nombre_edificio, int coord_x, int coord_y){
    Edificio* edificio_creado = 0;
    if (nombre_edificio == "aserradero"){
        edificio_creado = new Aserradero(nombre_edificio, coord_x, coord_y);
    }
    else if (nombre_edificio == "escuela"){
        edificio_creado = new Escuela(nombre_edificio, coord_x, coord_y);
    }
    else if (nombre_edificio == "fabrica"){
        edificio_creado = new Fabrica(nombre_edificio, coord_x, coord_y);
    }
    else if (nombre_edificio == "mina"){
        edificio_creado = new Mina(nombre_edificio, coord_x, coord_y);
    }
    else if (nombre_edificio == "obelisco"){
        edificio_creado = new Obelisco(nombre_edificio, coord_x, coord_y);
    }
    else if (nombre_edificio == "planta electrica"){
        edificio_creado = new Planta_electrica(nombre_edificio, coord_x, coord_y);
    }
    return edificio_creado;
}

void Andypolis::construir_edificio_por_nombre(){
    string edificio_a_construir;
    cout << "Edificios disponibles para construir" << endl;
    cout << COLOR_VERDE_AGUA << LINEA_DIVISORIA << COLOR_POR_DEFECTO << endl;
    mostrar_nombres_de_edificios();
    cout << "Ingrese el nombre del edificio que desea construir: ";
    cin >> edificio_a_construir;
    transform(edificio_a_construir.begin(), edificio_a_construir.end(), edificio_a_construir.begin(), ::tolower); //convierte la entrada a minuscula
    if (!existe_el_edificio(edificio_a_construir)){
        cout << COLOR_ROJO << "El edificio ingresado no existe, intente nuevamente" << COLOR_POR_DEFECTO << endl;
    }
    else if (!hay_materiales_suficientes(edificio_a_construir)){
        cout << COLOR_ROJO << "No hay materiales suficientes para construir " << edificio_a_construir << COLOR_POR_DEFECTO << endl;
    }
    else if (se_alcanzo_maximo_permitido(edificio_a_construir)){
        cout << COLOR_ROJO << "Ya estan construidos la cantidad maxima de " << edificio_a_construir << " posibles" << COLOR_POR_DEFECTO << endl;
    }
    else{
        bool confirmacion = pedir_confirmacion(edificio_a_construir);
        if(!confirmacion){
            cout << COLOR_VERDE << "Operacion cancelada" << COLOR_POR_DEFECTO << endl;
        }
        else{
            int* coordenadas = pedir_coordenadas();
            int coord_x = coordenadas[0];
            int coord_y = coordenadas[1];
            if (!se_puede_construir(coord_x, coord_y)){
                cout << COLOR_ROJO << "No es posible construir en esas coordenadas" << COLOR_POR_DEFECTO << endl;
            }
            else{
                int pos_edificio = posicion_del_edifcio(edificio_a_construir);
                Edificio* nuevo_edificio = construir_edificio(edificio_a_construir, coord_x, coord_y);
                actualizar_cant_materiales(pos_edificio);
                this->mapa.ocupar_casillero(nuevo_edificio, nullptr, coord_x, coord_y);
                //aca iria el metodo de mapa para pasarle el puntero a edificio y ocupar el casillero
                cout << COLOR_VERDE << "El edificio fue construido statisfactoriamente" << COLOR_POR_DEFECTO << endl;
            }
        }
    }
    elegir_opcion();
}

void Andypolis::listar_edificios_construidos() {

}

void Andypolis::listar_todos_edificios() {

}

void Andypolis::demoler_edificio_por_coordenada() {

}

void Andypolis::recolectar_recursos_perdidos() {

}

void Andypolis::lluvia_de_recursos() {

}

void Andypolis::mostrar_mapa(){
    this->mapa.mostrar_mapa();
    elegir_opcion();
}

void Andypolis::mostrar_inventario(){
    this->inventario.mostrar_inventario();
    elegir_opcion();
}

void Andypolis::consultar_coordenada(){
    int coord_x;
    int coord_y;
    cout << "Ingrese la coordenada_x(columna): ";
    cin >> coord_x;
    cout << "Ingrese la coordenada_y(fila): ";
    cin >> coord_y;
    this->mapa.consultar_coordenada(coord_x, coord_y);
    elegir_opcion();
}

void Andypolis::elegir_opcion() {
    int opcion_ingresada = pedir_opcion();
    switch (opcion_ingresada) {
        case 1:
            construir_edificio_por_nombre();
            break;
        case 2:
            listar_edificios_construidos();
            break;
        case 3:
            listar_todos_edificios();
            break;
        case 4:
            demoler_edificio_por_coordenada();
            break;
        case 5:
            mostrar_mapa();
            break;
        case 6:
            consultar_coordenada();
            break;
        case 7:
            mostrar_inventario();
            break;
        case 8:
            recolectar_recursos_perdidos();
            break;
        case 9:
            lluvia_de_recursos();
            break;
        case 10:
            guardar_y_salir();
            break;
        default:
            cout << COLOR_ROJO << "Oops, opcion incorrecta. Intenta nuevamente" << COLOR_POR_DEFECTO << endl;
            break;
    }
}

