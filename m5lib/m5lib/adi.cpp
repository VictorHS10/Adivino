#include "adi.h"
#include <string>
#include <iostream>
#include <cstdlib>
#include <ctime>

// colores
#define RESET   "\033[0m"
#define RED     "\033[31m"
#define GREEN   "\033[32m"
#define YELLOW  "\033[33m"
#define BLUE    "\033[34m"

using namespace std;

namespace Adivino
{


	void adiv::adivino() {
		static string volverAJugar;
		static int contadorMuertes;
		static int contadorPsicopata;
		static int contadorPacifista;
		static int contadorPersonaNormal;
		static int contadorTonto;
		static int contadorListo;
		static string edad;

		do
		{


			std::cout << "Bienvenido, si has llegado a este lugar es porque quieres que te muestre tu futuro. Asi que cuentame un poco de ti a continuacion.\n";
			system("pause");
			system("cls");

			// Nombre
			std::cout << "Antes de comenzar, permiteme conocer tu nombre. Como te llamas?\n";
			std::string nombre;
			std::cin >> nombre;

			std::cout << "Hoy, " << nombre << ", te sumergire en el misterio que revelara el destino sobre tu vida." << std::endl;

			//Pedir edad.

			std::string edad;
			bool esValido;
			do {
				cout << "Y ahora, cuantos anos tienes, " << nombre << "?" << endl;
				std::cin >> edad;
				if (Adivino::adiv::esNumero(edad)) {
					esValido = true;
				}
				else {
					std::cout << "La edad no es un numero valido. Por favor, ingresa un numero valido." << std::endl;
					esValido = false;
				}
			} while (!esValido);

			// Verificar si el nombre comienza con vocal o J,V,C,R o P, M,N.
			if (tolower(nombre[0]) == 'a' || tolower(nombre[0]) == 'm' || tolower(nombre[0]) == 'n' || tolower(nombre[0]) == 'e' || tolower(nombre[0]) == 'i' || tolower(nombre[0]) == 'o' || tolower(nombre[0]) == 'u' || tolower(nombre[0]) == 'j' || tolower(nombre[0]) == 'v' || tolower(nombre[0]) == 'c' || tolower(nombre[0]) == 'r' || tolower(nombre[0]) == 'p' ) {
				// Bloque para nombres que comienzan con vocal
				std::cout << "Oh, eres Phil, el hombre divorciado y con dos hijos? Recuerdo verte antes! Como llegaste aqui, Phil?" << std::endl;

				std::string respuesta1;
				do {
					std::cout << "1- No me llamo Phil, ya te lo dije antes." << std::endl;
					std::cout << "2- Si, soy Phil." << std::endl;
					std::cout << "3- Quien es Phil?" << std::endl;

					std::cin >> respuesta1;

					// Verificar respuestas
					if (respuesta1 == "1") {
						std::cout << "Ah, disculpa. Entonces tu nombre es " << nombre << ". Un placer, yo soy Calvin Klein." << std::endl;

						std::string respuesta2;
						do {
							std::cout << "1- Calvin Klein, la marca de ropa?" << std::endl;
							std::cout << "2- Encantado de conocerte." << std::endl;
							std::cout << "3- Estas bromeando?" << std::endl;

							std::cin >> respuesta2;

							// Verificar respuestas para Calvin Klein
							if (respuesta2 == "1") {
								std::cout << "Exactamente! Pero aqui estoy en una nueva carrera como adivino. Bueno, vamos a entrar a mi caravana para comenzar a adivinar tu maravilloso futuro." << std::endl;
								std::cout << "**Entras a la caravana y ves que esta un poco oscura. Calvin te dice que te sientes y que comenzaran a adivinar tu futuro.**" << std::endl;
								std::cout << "Excelente, comencemos con algo sencillo. *Cual es tu color favorito?" << std::endl;

								std::string colorFavorito;
								std::cin >> colorFavorito;

								// Verificar color favorito
								if (tolower(colorFavorito[0]) == 'a' || tolower(colorFavorito[0]) == 'r' || tolower(colorFavorito[0]) == 'v' || tolower(colorFavorito[0]) == 'a') {
									std::cout << "*Gran eleccion! Tu color favorito es " << colorFavorito << "." << std::endl;
									std::cout << "*De repente sientes que entras en otro mundo al parecer Calvin Klein te ha metido un par de farlopa dentro de tu cuerpo, yo de ti le daba matarile** " << std::endl;

									std::string respuesta3;
									do {
										std::cout << "1- Le das un punetazo y le dices que vais a solucionar esto como hombres." << std::endl;
										std::cout << "2- Le dices que tienes que ir al bano." << std::endl;

										std::cin >> respuesta3;

										if (respuesta3 == "1") {
											std::string respuesta4;
											do {
												std::cout << "*Salen los dos de la caravana y Calvin Klein te dice que te cortara el pelo, pero tienes cara de querer matarlo.*" << std::endl;
												std::cout << "**Que quieres hacer?" << std::endl;
												std::cout << "1- Ves al lado un ladrillo y lo coges para atacar a Calvin." << std::endl;
												std::cout << "2- Te avalanzas sobre el y le das un K.O." << std::endl;
												std::cout << "3- Llamas por telefono a Ronald McDonald." << std::endl;

												std::cin >> respuesta4;

												// Variables para la salud de los personajes
												int tuSalud = 100;
												int saludCalvin = 100;

												if (respuesta4 == "1") {
													// Bucle de pelea
													while (tuSalud > 0 && saludCalvin > 0) {
														std::cout << "Tu salud: " << tuSalud << " | Salud de Calvin Klein: " << saludCalvin << std::endl;
														std::cout << "1- Intentar golpear a Calvin Klein." << std::endl;
														std::cout << "2- Intentar esquivar el proximo golpe." << std::endl;

														std::string opcion;
														std::cin >> opcion;

														// Acciones del jugador
														if (opcion == "1") {
															int golpeJugador = rand() % 20 + 20; // Dano aleatorio
															saludCalvin -= golpeJugador;
															std::cout << "*Golpeas a Calvin Klein! Le haces " << golpeJugador << " puntos de dano." << std::endl;
														}
														else if (opcion == "2") {
															std::cout << "Logras esquivar el proximo golpe de Calvin Klein." << std::endl;
														}
														else {
															std::cout << "Opcion no valida. Pierdes tu turno." << std::endl;
														}

														// Acciones de Calvin Klein
														int golpeCalvin = rand() % 20 + 10; // Dano aleatorio
														tuSalud -= golpeCalvin;
														std::cout << "Calvin Klein te golpea. Te hace " << golpeCalvin << " puntos de dano." << std::endl;
													}

													// Resultado de la pelea
													if (tuSalud <= 0) {
														std::cout << "Lamentablemente, Calvin Klein te ha vencido." << std::endl;
														std::cout << RED << "FINAL: Muerte por Calvin Klein" << RESET << std::endl;
														contadorMuertes++;
														contadorPacifista++;
													}
													else {
														std::cout << "*Felicidades! Has derrotado a Calvin Klein." << std::endl;
														std::cout << "**Escondes el cadaver dentro de la caravana y huyes de la escena sin ningun peligro" << std::endl;
														std::cout << RED << "FINAL: Calvin Muerto y tu vivo y coleando." << RESET << std::endl;
														contadorMuertes++;
														contadorPsicopata++;
													}
												}
												else if (respuesta4 == "2") {
													std::cout << "**Le das tan fuerte a Calvin Klein que lo dejas en el suelo. Pero resulta que Louis Vuitton te ve de lejos y llama a la policia.**" << std::endl;

													std::string respuesta5;
													do {
														std::cout << "**Tambien ves un vehiculo que al parecer es un triciclo de nino, lo coges y huyes de la escena del crimen, pero resulta que la policia comienza a perseguirte. Parece que estas en problemas.**" << std::endl;
														std::cout << "**Llegas a un cruce y decides si atropellar a una abuela o a un pobre nino jugando con su pelota**" << std::endl;
														std::cout << "1- Atropellar a la abuela." << std::endl;
														std::cout << "2- Atropellar al pobre nino." << std::endl;
														std::cout << "3- Quitarle la pelota al nino." << std::endl;

														std::cin >> respuesta5;

														if (respuesta5 == "1") {
															std::cout << "**Al parecer la abuela tenia un baston y te empieza a dar golpes, finalmente, eres detenido por la policia.**" << std::endl;
															std::cout << RED << "FINAL: Detenido por culpa de la abuela." << RESET << std::endl;
															contadorMuertes++;
															contadorPsicopata++;
														}
														else if (respuesta5 == "2") {
															std::string respuesta6;
															do {
																std::cout << "**El nino te ve y te tira la pelota en la cara, tu te caes del triciclo y decides huir a una casa cercana.**" << std::endl;
																std::cout << "***Que vas a hacer?**" << std::endl;
																std::cout << "1- Entrar a la casa y esconderte." << std::endl;
																std::cout << "2- Comienzas a vomitar potentemente." << std::endl;

																std::cin >> respuesta6;

																if (respuesta6 == "1") {
																	std::string respuesta7;
																	do {
																		std::cout << "**Te escondes en un armario dentro de una casa, pero de repente escuchas un ruido que viene de la puerta.**" << std::endl;
																		std::cout << "***Que quieres hacer?" << std::endl;
																		std::cout << "1- Sales del armario." << std::endl;
																		std::cout << "2- Te quedas." << std::endl;

																		std::cin >> respuesta7;

																		if (respuesta7 == "1") {

																			std::string respuesta8;
																			do
																			{
																				std::cout << "**Sales y ves a un senor apuntandote con una escopeta**" << std::endl;
																				std::cout << "**Que quieres hacer?**" << std::endl;
																				std::cout << "1- Rezas a dios." << std::endl;
																				std::cout << "2- Le das un punetazo. " << std::endl;
																				std::cin >> respuesta8;

																				if (respuesta8 == "1")
																				{
																					std::cout << "El senor te se piensa que eres el mesias del arabe y te dispara en toda la cara con la escopeta." << std::endl;
																					std::cout << RED << "FINAL: Escopetazo en la cara." << RESET << std::endl;
																					contadorMuertes++;
																					contadorPacifista++;
																				}
																				else if (respuesta8 == "2") {
																					std::string respuesta9;
																					do {
																						std::cout << "**Le das un punetazo al senor con la escopeta y comienza la pelea.**" << std::endl;
																						std::cout << "**Que quieres hacer?**" << std::endl;
																						std::cout << "1- Intentar quitarle la escopeta." << std::endl;
																						std::cout << "2- Intentar esquivar sus disparos." << std::endl;

																						std::cin >> respuesta9;
																						int saludSenorEscopeta = 100;
																						int tuSalud = 100;
																						if (respuesta9 == "1") {
																							// Bucle de pelea con el senor de la escopeta
																							while (tuSalud > 0 && saludSenorEscopeta > 0) {
																								std::cout << "Tu salud: " << tuSalud << " | Salud del senor con la escopeta: " << saludSenorEscopeta << std::endl;
																								std::cout << "1- Intentar quitarle la escopeta." << std::endl;
																								std::cout << "2- Intentar esquivar el proximo disparo." << std::endl;

																								std::string opcion;
																								std::cin >> opcion;

																								// Acciones del jugador
																								if (opcion == "1") {
																									int intentoQuitarEscopeta = rand() % 20 + 10; // Exito aleatorio
																									if (intentoQuitarEscopeta > 15) {
																										std::cout << "*Logras quitarle la escopeta al senor. Ahora tienes el control.*" << std::endl;
																									}
																									else {
																										std::cout << "*Fallaste al intentar quitarle la escopeta. El senor te dispara.*" << std::endl;
																										tuSalud -= rand() % 30 + 10; // Dano aleatorio
																									}
																								}
																								else if (opcion == "2") {
																									std::cout << "Logras esquivar el proximo disparo del senor con la escopeta." << std::endl;
																								}
																								else {
																									std::cout << "Opcion no valida. Pierdes tu turno." << std::endl;
																								}

																								// Acciones del senor con la escopeta
																								int disparoSenor = rand() % 20 + 10; // Dano aleatorio
																								tuSalud -= disparoSenor;
																								std::cout << "El senor con la escopeta te dispara. Te hace " << disparoSenor << " puntos de dano." << std::endl;
																							}

																							// Resultado de la pelea con el senor de la escopeta
																							if (tuSalud <= 0) {
																								std::cout << "Lamentablemente, el senor con la escopeta te ha disparado en todo el cerebro y te has quedado K.O." << std::endl;
																								std::cout << RED << "FINAL: Lamentable" << RESET << std::endl;
																								contadorMuertes++;
																								contadorPersonaNormal++;
																							}
																							else {
																								std::cout << "*Felicidades! Has derrotado al senor con la escopeta." << std::endl;
																								std::cout << "**Huyes de la escena del crimen y te vas a tu casa tan tranquilo al parecer solamente estabas sonando asi que tranquilo**" << std::endl;
																								std::cout << RED << "FINAL: Por lo menos todo era un Sueno." << RESET << std::endl;
																								contadorMuertes++;
																								contadorPsicopata++;
																							}
																						}
																						else if (respuesta9 == "2") {
																							std::cout << "Decides esquivar los disparos del senor con la escopeta y logras escapar de la pelea." << std::endl;
																							std::cout << "**Lamentablemente la policia te pilla saliendo corriendo de la casa y quedas detenido**" << std::endl;
																							std::cout << RED << "FINAL: A Prision campeon." << RESET << std::endl;
																							contadorMuertes++;
																							contadorPacifista++;
																						}
																						else {
																							std::cout << "Respuesta no valida. Intentalo de nuevo." << std::endl;
																						}
																					} while (respuesta9 < "1" || respuesta9 > "2");
																				}
																				else
																				{
																					std::cout << "Respuesta incorrecta" << std::endl;
																				}
																			} while (respuesta8 < "1" || respuesta8 > "2");

																		}
																		else if (respuesta7 == "2") {
																			std::cout << "**Te quedas en el armario y pasan anos y no sales al parecer te quedaste de por vida atrapado en ese pobre armario que tendra que convivir con tu alma en ese armario**" << std::endl;
																			std::cout << RED << "FINAL: Encerrado en el armario pobre armario." << RESET << std::endl;
																			contadorMuertes++;
																			contadorPersonaNormal++;
																		}
																		else {
																			std::cout << "Respuesta incorrecta. Vuelve a intentarlo." << std::endl;
																		}
																	} while (respuesta7 < "1" || respuesta7 > "2");

																}
																else if (respuesta6 == "2") {
																	std::cout << "**Al parecer gracias a tu gomito creas una brecha espacio temporal y te envian a otro planeta paralelo donde no paso nada de lo que has vivido en este planeta.**" << std::endl;
																	std::cout << RED << "FINAL: Brecha Temporal." << RESET << std::endl;
																	contadorMuertes++;
																	contadorPersonaNormal++;
																}
																else {
																	std::cout << "Respuesta incorrecta." << std::endl;
																}
															} while (respuesta6 < "1" || respuesta6 > "2");

														}
														else if (respuesta5 == "3") {
															std::string respuesta6_1;
															do
															{
																std::cout << "**Le quitas la pelota al nino y les das a uno de los dos policias un pelotazo y se cae al suelo** " << std::endl;
																std::cout << "**El problema es que aun te persigue un policia**" << std::endl;
																std::cout << "**Llegas a un centro de estudios llamado Monlau**" << std::endl;
																std::cout << "**Que vas a hacer?**" << std::endl;
																std::cout << "1- Entras al centro de Estudios Monlau." << std::endl;
																std::cout << "2- Sigues huyendo de la policia." << std::endl;
																std::cin >> respuesta6_1;

																if (respuesta6_1 == "1") {
																	std::string respuesta7_1;

																	do
																	{
																		std::cout << "**Entras en Monlau y te encuentras a 4 profes que te dicen con cara de serios**" << std::endl;
																		std::cout << "Tenemos un reto para ti, elige a uno de nosotros." << std::endl;
																		std::cout << "1- Ramon Aguilar." << std::endl;
																		std::cout << "2- Javier Salvador." << std::endl;
																		std::cout << "3- Carmen Quintas." << std::endl;
																		std::cout << "4- Roberto Manca." << std::endl;
																		std::cout << "5- No te decides por ninguno." << std::endl;

																		std::cin >> respuesta7_1;

																		if (respuesta7_1 == "1")
																		{
																			std::cout << "Buenas, soy Ramon vamos a ponerte un reto de SQL!" << std::endl;
																			std::cout << "Cual es la sentencia SQL para seleccionar todos los registros de una tabla? " << std::endl;
																			std::cout << "1- SELECT * FROM tabla;" << std::endl;
																			std::cout << "2- SHOW ALL FROM tabla;" << std::endl;
																			std::cout << "3- OPEN tabla;" << std::endl;
																			std::string respuesta7_1_2;
																			do
																			{
																				std::cin >> respuesta7_1_2;
																				if (respuesta7_1_2 == "1")
																				{
																					std::cout << "**Ramon sonrie y te Felicita, lo has hecho muy bien :D**" << std::endl;
																					std::cout << "**Ramon te da un ticket con el que puedes hacer que te deje de perseguir la policia" << std::endl;
																					std::cout << RED << "FINAL: Professional de SQL" << RESET << std::endl;
																					contadorMuertes++;
																					contadorListo++;

																				}
																				else if (respuesta7_1_2 == "2" || respuesta7_1_2 == "3")
																				{
																					std::cout << "**Ramon se enfada tanto que te electrocuta con un cable de fibra optica**" << std::endl;
																					std::cout << RED << "FINAL: Electrocutado por Ramon, lamentable." << RESET << std::endl;
																					contadorMuertes++;
																					contadorTonto++;
																				}
																				else
																				{
																					std::cout << "Respuesta Incorrecta" << std::endl;
																				}

																			} while (respuesta7_1_2 < "1" || respuesta7_1_2 > "3");

																		}
																		else if (respuesta7_1 == "2")
																		{
																			std::cout << "Buenas, soy Javier Salvador, y te voy a poner un reto de C++." << std::endl;
																			std::cout << "*Que es un puntero en C++?" << std::endl;
																			std::cout << "1- Un tipo de dato para almacenar direcciones de memoria." << std::endl;
																			std::cout << "2- Un operador aritmetico." << std::endl;
																			std::cout << "3- Un tipo de bucle en C++." << std::endl;

																			std::string respuesta7_1_2;
																			do
																			{
																				std::cin >> respuesta7_1_2;

																				if (respuesta7_1_2 == "1")
																				{
																					std::cout << "**Javier Salvador asiente con aprobacion. Has respondido correctamente.**" << std::endl;
																					std::cout << "**Te invita a unirse a su club de programadores expertos.**" << std::endl;
																					std::cout << RED << "FINAL: Programador Estrella en C++." << RESET << std::endl;
																					contadorMuertes++;
																					contadorListo++;
																				}
																				else
																				{
																					std::cout << "**Javier Salvador frunce el ceno. Tu respuesta es incorrecta.**" << std::endl;
																					std::cout << "**Te mira con decepcion y te sugiere estudiar mas C++.**" << std::endl;
																					std::cout << RED << "FINAL: Decepcionado en C++." << RESET << std::endl;
																					contadorMuertes++;
																					contadorTonto++;
																				}

																			} while (respuesta7_1_2 < "1" || respuesta7_1_2 > "3");
																		}
																		else if (respuesta7_1 == "3")
																		{
																			std::cout << "Ey, soy Carmen Quintas, y te voy a poner un reto de Java." << std::endl;
																			std::cout << "*Cual es la diferencia entre '==' y '.equals()' en Java al comparar cadenas?" << std::endl;
																			std::cout << "1- '==' compara referencias, '.equals()' compara contenido." << std::endl;
																			std::cout << "2- Ambos comparan contenido pero de manera diferente." << std::endl;
																			std::cout << "3- '==' compara contenido, '.equals()' compara referencias." << std::endl;

																			std::string respuesta7_1_2;
																			do
																			{
																				std::cin >> respuesta7_1_2;

																				if (respuesta7_1_2 == "1")
																				{
																					std::cout << "**Carmen Quintas sonrie y aplaude. Has superado su desafio de Java.**" << std::endl;
																					std::cout << "**Te felicita y te aconseja seguir aprendiendo.**" << std::endl;
																					std::cout << RED << "FINAL: Experto en Java." << RESET << std::endl;
																					contadorMuertes++;
																					contadorListo++;
																				}
																				else
																				{
																					std::cout << "**Carmen Quintas frunce el ceno. Tu respuesta no es correcta.**" << std::endl;
																					std::cout << "**Te anima a estudiar mas sobre las comparaciones en Java.**" << std::endl;
																					std::cout << RED << "FINAL: Fallaste en Java." << RESET << std::endl;
																					contadorMuertes++;
																					contadorTonto++;
																				}

																			} while (respuesta7_1_2 < "1" || respuesta7_1_2 > "3");
																		}
																		else if (respuesta7_1 == "4")
																		{
																			std::cout << "Ciao! Soy Roberto Manca, y te voy a poner un reto de Python." << std::endl;
																			std::cout << "*Cual es la funcion 'len()' en Python?" << std::endl;
																			std::cout << "1- Devuelve la longitud de una cadena." << std::endl;
																			std::cout << "2- Convierte una cadena a minusculas." << std::endl;
																			std::cout << "3- Genera numeros aleatorios." << std::endl;

																			std::string respuesta7_1_2;
																			do
																			{
																				std::cin >> respuesta7_1_2;

																				if (respuesta7_1_2 == "1")
																				{
																					std::cout << "**Roberto Manca asiente. Has superado su desafio de Python, y ademas te da una pizza de cuatro quesos.**" << std::endl;
																					std::cout << "**Te felicita y te sugiere explorar mas el mundo de Python.**" << std::endl;
																					std::cout << RED << "FINAL: Experto en Python." << RESET << std::endl;
																					contadorMuertes++;
																					contadorListo++;
																				}
																				else
																				{
																					std::cout << "**Roberto Manca frunce el ceno. Tu respuesta no es correcta.**" << std::endl;
																					std::cout << "**Te recomienda revisar la documentacion de Python, y te da un golpetazo con un portatil en toda la cara.**" << std::endl;
																					std::cout << RED << "FINAL: Fallaste en Python, animo campeon." << RESET << std::endl;
																					contadorMuertes++;
																					contadorTonto++;
																				}

																			} while (respuesta7_1_2 < "1" || respuesta7_1_2 > "3");
																		}
																		else if (respuesta7_1 == "5")
																		{
																			std::cout << "Los 4 profesores te miran con desaprobacion y te envian a la sala de profesores. Parece que has evitado el reto." << std::endl;
																			std::cout << RED << "FINAL: Evitando el Desafio, CASTIGADO EN LA SALA DE PROFESORES." << RESET << std::endl;
																			contadorMuertes++;
																			contadorTonto++;
																			contadorPersonaNormal++;
																		}
																		else
																		{
																			std::cout << "Respuesta no valida. Intentalo de nuevo." << std::endl;
																		}

																	} while (respuesta7_1 < "1" || respuesta7_1 > "5");
																}
																else if (respuesta6_1 == "2")
																{
																	std::cout << "**Finalmente la policia llama a mas refuerzos y te detienen con las manos en la masa.**" << std::endl;
																	std::cout << RED << "FINAL: Detenido por bobo." << RESET << std::endl;
																	contadorMuertes++;
																	contadorTonto++;
																}
																else
																{
																	std::cout << "Respuesta Incorrecta" << std::endl;
																}

															} while (respuesta6_1 < "1" || respuesta6_1 > "2");


														}
														else {
															std::cout << "Respuesta incorrecta. Intentalo de nuevo." << std::endl;
														}
													} while (respuesta5 < "1" || respuesta5 > "3");

												}
												else if (respuesta4 == "3")
												{
													std::cout << "Decides llamar a Ronald McDonald para pedir ayuda." << std::endl;
													std::cout << "De repente, Ronald aparece en un destello de colores y te desafia a una batalla de piedra, papel y tijeras." << std::endl;


													std::cout << "Elige tu movimiento:" << std::endl;
													std::cout << "1- Piedra" << std::endl;
													std::cout << "2- Papel" << std::endl;
													std::cout << "3- Tijeras" << std::endl;

													int tuMovimiento;
													std::cin >> tuMovimiento;


													int movimientoRonald = rand() % 3 + 1;  // 1: Piedra, 2: Papel, 3: Tijeras

													// Mostrar los movimientos
													std::cout << "Tu elegiste: ";
													switch (tuMovimiento)
													{
													case 1:
														std::cout << "Piedra" << std::endl;
														break;
													case 2:
														std::cout << "Papel" << std::endl;
														break;
													case 3:
														std::cout << "Tijeras" << std::endl;
														break;
													}

													std::cout << "Ronald McDonald elige: ";
													switch (movimientoRonald)
													{
													case 1:
														std::cout << "Piedra" << std::endl;
														break;
													case 2:
														std::cout << "Papel" << std::endl;
														break;
													case 3:
														std::cout << "Tijeras" << std::endl;
														break;
													}

													// Determinar el ganador
													if (tuMovimiento == movimientoRonald)
													{
														std::cout << "Es un empate. Parece que Ronald y tu son igualmente talentosos en este juego. Ronald te da un McFlurry y unas patatas y os vais felices de la zona." << std::endl;
														std::cout << RED << "FINAL: Ronald y tu Felices :D" << RESET << std::endl;
														contadorMuertes++;
														contadorPersonaNormal++;
														contadorListo++;
													}
													else if ((tuMovimiento == 1 && movimientoRonald == 3) ||
														(tuMovimiento == 2 && movimientoRonald == 1) ||
														(tuMovimiento == 3 && movimientoRonald == 2))
													{
														std::cout << "Felicidades, has ganado la batalla contra Ronald McDonald. Parece que eres un maestro en piedra, papel y tijeras." << std::endl;
														std::cout << RED << "FINAL: Ganador Experto en Piedra, Papel Y Tijera." << RESET << std::endl;
														contadorMuertes++;
														contadorListo++;
													}
													else
													{
														std::cout << "Oh no, Ronald McDonald ha ganado esta vez." << std::endl;
														std::cout << RED << "FINAL: Triste y desolado." << RESET << std::endl;
														contadorMuertes++;
														contadorTonto++;
													}
												}
												else {
													std::cout << "Respuesta incorrecta." << std::endl;
												}
											} while (respuesta4 < "1" || respuesta4 > "3");

										}
										else if (respuesta3 == "2") {
											std::cout << "Decides decirle a Calvin Klein que necesitas ir al bano." << std::endl;
											std::cout << "**Te entran una ganas increibles de sacar algo de tu cuerpo. Y finalmente defecas en el bano." << std::endl;
											std::cout << "**Defecas tanto y tanto que Calvin entra al bano y te dice de irte de su Caravana YA!" << std::endl;
											std::cout << RED << "FINAL: Mucha Mierda." << RESET << std::endl;
											contadorMuertes++;
											contadorTonto++;
										}
										else {
											std::cout << "Respuesta no valida. Intentalo de nuevo." << std::endl;
										}
									} while (respuesta3 < "1" || respuesta3 > "2");

								}
								else {
									std::cout << "No parece ser un color comun. Calvin te mira con cara de desprecio y saca un cuchillo." << std::endl;
									std::cout << "Te encuentras en una situacion peligrosa. Calvin te desafia a una pelea a cuchillos. Tienes que tomar decisiones rapidas para sobrevivir." << std::endl;

									std::string respuestaCuchillos;


									do {
										std::cout << "1- Aceptar el desafio y sacar tu propio cuchillo." << std::endl;
										std::cout << "2- Intentar negociar una salida pacifica." << std::endl;
										std::cout << "3- Gritar por ayuda y tratar de huir." << std::endl;

										std::cin >> respuestaCuchillos;

										if (respuestaCuchillos == "1") {
											int tuSalud = 100;
											int saludCalvin = 100;
											std::cout << "Decides aceptar el desafio y sacas tu propio cuchillo. La tension en el aire es palpable." << std::endl;

											// Bucle de pelea a cuchillos
											while (tuSalud > 0 && saludCalvin > 0) {
												std::cout << "Tu salud: " << tuSalud << " | Salud de Calvin: " << saludCalvin << std::endl;
												std::cout << "1- Intentar apunalar a Calvin." << std::endl;
												std::cout << "2- Intentar esquivar su cuchillo." << std::endl;

												int opcion;
												std::cin >> opcion;

												// Acciones del jugador
												if (opcion == 1) {
													int apunalarJugador = rand() % 20 + 20; // Dano aleatorio
													saludCalvin -= apunalarJugador;
													std::cout << "*Apunalas a Calvin! Le haces " << apunalarJugador << " puntos de dano." << std::endl;
												}
												else if (opcion == 2) {
													std::cout << "Logras esquivar el cuchillo de Calvin." << std::endl;
												}
												else {
													std::cout << "Opcion no valida. Pierdes tu turno." << std::endl;
												}

												// Acciones de Calvin
												int apunalarCalvin = rand() % 20 + 10; // Dano aleatorio
												tuSalud -= apunalarCalvin;
												std::cout << "Calvin intenta apunalarte. Te hace " << apunalarCalvin << " puntos de dano." << std::endl;
											}

											// Resultado de la pelea a cuchillos
											if (tuSalud <= 0) {
												std::cout << "Lamentablemente, Calvin te ha vencido en la pelea a cuchillos." << std::endl;
												std::cout << RED << "FINAL: Derrota en la pelea a cuchillos." << RESET << std::endl;
												contadorMuertes++;
												contadorTonto++;
											}
											else {
												std::cout << "*Felicidades! Has derrotado a Calvin en la pelea a cuchillos." << std::endl;
												std::cout << "**Logras salir ileso de la situacion y te retiras del lugar." << std::endl;
												std::cout << RED << "FINAL: Victoria en la pelea a cuchillos." << RESET << std::endl;
												contadorMuertes++;
												contadorListo++;
											}
										}
										else if (respuestaCuchillos == "2") {
											std::cout << "Decides intentar negociar una salida pacifica con Calvin. Le hablas calmadamente, buscando una solucion sin violencia." << std::endl;
											std::cout << "Calvin parece considerar tu propuesta y finalmente acepta detener la confrontacion." << std::endl;
											std::cout << RED << "FINAL: Acuerdo pacifico con Calvin." << RESET << std::endl;
											contadorMuertes++;
											contadorPacifista++;
										}
										else if (respuestaCuchillos == "3") {
											std::cout << "Gritas por ayuda y tratas de huir de la situacion. La gente cercana acude a tu llamado y Calvin se ve obligado a retroceder." << std::endl;
											std::cout << RED << "FINAL: Escapada exitosa, evitando la pelea a cuchillos." << RESET << std::endl;
											contadorMuertes++;
											contadorPacifista++;
										}
										else {
											std::cout << "Respuesta no valida. Intentalo de nuevo." << std::endl;
										}
									} while (respuestaCuchillos < "1" || respuestaCuchillos > "3");

								}

							}
							else if (respuesta2 == "2") {
								std::cout << "Un placer compatriota " << nombre << " estamos orgullosos de que estes aqui apoyando a la patria porfavor haz el placer de subir a nuestra nueva nave espacial para descubrir tu futuro." << std::endl;

								std::string respuesta3;
								do
								{
									std::cout << "1- Una nave mola." << std::endl;
									std::cout << "2- Como no quiero ir." << std::endl;

									std::cin >> respuesta3;

									if (respuesta3 == "1")
									{
										std::cout << "*Calvin te lleva a una nave espacial en la que te dice monta monta y te dice disfruta :D*" << std::endl;
										std::cout << "*Te montas te abrochas y comienza a sonar una grabadora que te dice." << std::endl;
										std::cout << "Bienvenidos a CALVIN SPACE Company, queremos agradecer el placer de ser el primer compatriota que pruebe nuestras naves :D" << std::endl;
										std::cout << "*Se te ve un poco preocupado*" << std::endl;
										std::cout << "Por ultimo queremos advertir de que no nos hacemos responsables de su posible muerte. Gracias y adios :D" << std::endl;
										std::cout << "*ATENCION COMIENZA EL DESPEGUE*" << std::endl;
										std::cout << "*Despegas y finalmente llegas a un planeta rojo*" << std::endl;

										std::string respuesta4;
										do
										{
											std::cout << "1- Aterrizas en el planeta rojo." << std::endl;
											std::cout << "2- Continua tu travesia." << std::endl;

											std::cin >> respuesta4;

											if (respuesta4 == "1")
											{
												std::cout << "*Aterrizas en el planeta y bajas de la nave*" << std::endl;
												std::cout << "*Ves desde muy lejos como una especie de humanos que se van acercando a ti." << std::endl;
												std::cout << "*Se acercan demasiado y te hacen un gesto extrano.*" << std::endl;

												std::string respuesta5;
												do
												{
													std::cout << "1- Imitas el gesto de los aliens." << std::endl;
													std::cout << "2- Te quedas quieto y no haces nada." << std::endl;
													std::cin >> respuesta5;

													if (respuesta5 == "1")
													{
														std::cout << "*Imitas el gesto y te miran con mala cara*" << std::endl;
														std::cout << "*Se siguen acercando mas a ti y te tiran al suelo*" << std::endl;
														std::cout << "*Sacan una especia de arma y creo que aqui ya estas muerto amigo*" << std::endl;
														std::cout << RED << "FINAL: Asesinado por Aliens." << RESET << std::endl;
														contadorMuertes++;
														contadorTonto++;
													}
													else if (respuesta5 == "2")
													{
														std::cout << "*Te quedas terriblemente quieto pero es que ellos tambien se quedan quietos*" << std::endl;
														std::cout << "*Os quedais quietos eternamente tan tan quietos que, pasan dias, semanas, meses, anos y ahi os quedais para siempre.*" << std::endl;
														std::cout << RED << "FINAL: Muerte Eterna." << RESET << std::endl;
														contadorMuertes++;
														contadorTonto++;

													}
													else
													{
														std::cout << "Respuesta Incorrecta" << std::endl;
													}


												} while (respuesta5 < "1" || respuesta5 > "2");

											}
											else if (respuesta4 == "2")
											{
												std::cout << "*Continuas tu travesia y se comienza a agotar la gasolina del avion.*" << std::endl;
												std::cout << "*Que vamos a hacer creo que estamos perdidos*" << std::endl;

												std::string respuesta5;
												do
												{
													std::cout << "1- Miras de repararlo." << std::endl;
													std::cout << "2- Te quedas sentado y no tocas nada." << std::endl;
													std::cin >> respuesta5;
													if (respuesta5 == "1")
													{
														std::cout << "*Intentas repararlo pero al parecer has tocado el boton de la nave que no era y te has quedado sin oxigeno.*" << std::endl;
														std::cout << RED << "FINAL: Sin aire, triste amigo mejor haberte quedado quieto." << RESET << std::endl;
														contadorMuertes++;
														contadorTonto++;
													}
													else if (respuesta5 == "2")
													{
														std::cout << "*Te quedas sentado quieto no tocas nada pero al parecer hay una radio*" << std::endl;
														std::string respuesta6;
														do
														{
															std::cout << "1- La enchufas y te pones a escuchar musicote de Michel Jackson." << std::endl;
															std::cout << "2- No lo enchufas." << std::endl;
															std::cin >> respuesta6;

															if (respuesta6 == "1")
															{
																std::cout << "*Te sientes especialmente contento con esta musica ya que con esta te quedaras eternamente en la nave espacial." << std::endl;
																std::cout << RED << "FINAL: En la nave quieto pero con musica." << RESET << std::endl;
																contadorMuertes++;
																contadorListo++;
															}
															else if (respuesta6 == "2")
															{
																std::cout << "*No enchufas las musica pero te quedas eternamente en la nave.*" << std::endl;
																std::cout << RED << "FINAL: En la nave para siempre, siempre, siempre." << RESET << std::endl;
																contadorMuertes++;
																contadorTonto++;
															}
															else
															{
																std::cout << "Respuesta Incorrecta" << std::endl;
															}
														} while (respuesta6 < "1" || respuesta6 > "2");
													}
												} while (respuesta5 < "1" || respuesta5 > "2");
											}
											else
											{
												std::cout << "Respuesta Incorrecta" << std::endl;
											}

										} while (respuesta4 < "1" || respuesta4 > "2");


									}
									else if (respuesta3 == "2")
									{
										std::cout << "*Finalmente decides no ir a la nave pero, Calvin saca un papel y te dice de firmar." << std::endl;
										std::cout << "*Que vas a hacer?*" << std::endl;

										std::string respuesta4;

										do
										{
											std::cout << "1- Firmas el papel sin leer." << std::endl;
											std::cout << "2- Firmas el papel leyendo." << std::endl;
											std::cout << "3- No firmas." << std::endl;
											std::cin >> respuesta4;
											if (respuesta4 == "1")
											{
												std::cout << "*Firmas el papel y te dice Calvin que muy bien*" << std::endl;
												std::cout << "*Llega una ambulancia y te llevan al hospital al parecer has firmado que te quiten el corazon." << std::endl;
												std::cout << RED << "FINAL: Corazon pa fuera." << RESET << std::endl;
												contadorMuertes++;
												contadorTonto++;
											}
											else if (respuesta4 == "2")
											{
												std::cout << "*Firmas el papel y lees que te van a quitar el corazon, le dices a Calvin que esto que es*" << std::endl;
												std::cout << "*El te pregunta pero firmas?*" << std::endl;
												std::string respuesta5;
												do
												{
													std::cout << "1- Firmas." << std::endl;
													std::cout << "2- No Firmas" << std::endl;
													std::cin >> respuesta5;

													if (respuesta5 == "1")
													{
														std::cout << "*Firmas el papel y te dice Calvin que muy bien*" << std::endl;
														std::cout << "*Llega una ambulancia y te llevan al hospital al parecer has firmado que te quiten el corazon." << std::endl;
														std::cout << RED << "FINAL: Corazon pa fuera pero consciente de ello, menuda muerte amigo." << RESET << std::endl;
														contadorMuertes++;
														contadorListo++;
													}
													else if (respuesta5 == "2")
													{
														std::cout << "*Calvin saca una pistola y te dispara para no dejar pruevas de su negocio de trafico de organos." << std::endl;
														std::cout << RED << "FINAL: Muerte por pistola por Calvin, tenias que firmar." << RESET << std::endl;
														contadorMuertes++;
														contadorTonto++;
													}
												} while (respuesta5 < "1" || respuesta5 > "2");
											}
											else if (respuesta4 == "3")
											{
												std::cout << "*Calvin saca una AK12 y te dispara para no dejar pruevas de su negocio de trafico de organos." << std::endl;
												std::cout << RED << "FINAL: Muerte por AK12 por Calvin, tenias que firmar." << RESET << std::endl;
												contadorMuertes++;
												contadorTonto++;
											}
										} while (respuesta4 < "1" || respuesta4 > "3");

									}
									else
									{
										std::cout << "Respuesta Incorrecta" << std::endl;
									}


								} while (respuesta3 < "1" || respuesta3 > "2");

							}
							else if (respuesta2 == "3") {
								std::cout << "*Calvin te mira un poco con cara de loco y te dice que se va al bano.*" << std::endl;
								std::string respuesta3;
								do
								{
									std::cout << "1- Sales de la caravana y huyes." << std::endl;
									std::cout << "2- Te quedas dentro." << std::endl;

									std::cin >> respuesta3;

									if (respuesta3 == "1")
									{
										std::cout << "*Sales de la caravana y explotas en pedazos al parecer Calvin puso una bomba fuera de la caravana*" << std::endl;
										std::cout << RED << "FINAL: Muerte por bomba." << RESET << std::endl;
										contadorMuertes++;
										contadorTonto++;
									}
									else if (respuesta3 == "2")
									{
										std::cout << "*Sale Calvin del bano y al parecer se ha vestido de payaso y tiene una hacha en la mano.*" << std::endl;
										std::cout << "*Te dice asi que estoy bromeando?! Tu intentas escapar de la caravana pero no llegas a tiempo y te apunala con el hacha" << std::endl;
										std::cout << RED << "FINAL: Muerte por Calvin payaso." << RESET << std::endl;
										contadorMuertes++;
										contadorPersonaNormal++;
									}
									else
									{
										std::cout << "Respuesta Incorrecta." << std::endl;
									}
								} while (respuesta3 < "1" || respuesta3 > "2");
							}
							else
							{
								std::cout << "Respuesta Incorrecta." << std::endl;
							}


						} while (respuesta2 < "1" || respuesta2 > "3");

					}
					else if (respuesta1 == "2") {
						std::cout << "Un placer Phil, yo soy Clavin Klein! " << std::endl;
						std::cout << "Vamos a empezar a adivinar tu grandioso futuro." << std::endl;
						std::cout << "*El adivino de repente comienza a sacar espuma por la boca, creo que a tomado algo que le ha sentado mal.*" << std::endl;
						std::cout << "*Intentas ayudarlo pero no puedes hacer nada.*" << std::endl;
						std::cout << RED << "FINAL: Calvin le ha dado algo." << RESET << std::endl;
						contadorMuertes++;
						contadorPersonaNormal++;

					}
					else if (respuesta1 == "3") {
						std::cout << "Pues Phil eres tu no te acuerdas? Y yo soy Calvin" << std::endl;
						std::cout << "*Tu dices NO yo no soy Phil*" << std::endl;
						std::cout << "*Calvin insiste que ERES PHIL*" << std::endl;
						std::cout << "*Tambien te dice que le debes 1000 euros en efectivo por la sesion de adivino de anoche.*" << std::endl;

						std::string respuesta2;

						do {
							std::cout << "1- No soy Phil." << std::endl;
							std::cout << "2- Pues si soy Phil." << std::endl;
							std::cout << "3- No te debo nada a ti!" << std::endl;

							std::cin >> respuesta2;

							if (respuesta2 == "1") {
								std::cout << "*ERES PHIL, ERES PHIL, ERES PHIL, ERES PHIL*" << std::endl;
								std::cout << "*Comienzas a sentir un dolor de cabeza muy intenso y te desmayas.*" << std::endl;
								std::cout << RED << "FINAL: Desmayo." << RESET << std::endl;
								contadorMuertes++;
								contadorPsicopata++;
							}
							else if (respuesta2 == "2") {
								std::cout << "*Calvin te mira fijamente y te ata a la silla.*" << std::endl;
								std::cout << "*Calvin te dice... vamos a hacerte un interrogatorio.*" << std::endl;
								std::cout << "*Que hiciste ayer por la noche?*" << std::endl;

								std::string respuesta3;

								do
								{
									std::cout << "1- Nada." << std::endl;
									std::cout << "2- Dormir." << std::endl;

									std::cin >> respuesta3;

									if (respuesta3 == "1")
									{
										std::cout << "*Calvin te dice asi que no hiciste nada eso es sospechoso*" << std::endl;
										std::cout << "*De repente Calvin saca una hoja donde dice que eres un asesino en serie y que seras encarcelado.*" << std::endl;

										std::string respuesta4;

										do
										{
											std::cout << "1- No soy un asesino!" << std::endl;
											std::cout << "2- Si soy un asesino!" << std::endl;

											std::cin >> respuesta4;

											if (respuesta4 == "1")
											{
												std::cout << "*Calvin llama a la policia y te detenien.*" << std::endl;
												std::cout << RED << "FINAL: Detenido por asesino." << RESET << std::endl;
												contadorMuertes++;
												contadorTonto++;
											}
											else if (respuesta4 == "2")
											{
												std::cout << "*Calvin sale corriendo de la caravana y va a llamar a la policia.*" << std::endl;
												std::cout << "*Que vas a hacer?*" << std::endl;

												std::string respuesta5;

												do
												{
													std::cout << "1- Huyes" << std::endl;
													std::cout << "2- Te quedas." << std::endl;

													std::cin >> respuesta5;

													if (respuesta5 == "1")
													{
														std::cout << "*Huyes de la escena corriendo muy rapido.*" << std::endl;
														std::cout << RED << "FINAL: Huyes corriendo." << RESET << std::endl;
														contadorMuertes++;
														contadorListo++;
													}
													else if (respuesta5 == "2")
													{
														std::cout << "*Quedas detenido por Calvin*" << std::endl;
														std::cout << RED << "FINAL: Detenido porque quieres." << RESET << std::endl;
														contadorMuertes++;
														contadorTonto++;
													}
													else
													{
														std::cout << "Respuesta Incorrecta." << std::endl;
													}
												} while (respuesta5 < "1" || respuesta5 > "2");
											}
											else
											{
												std::cout << "Respuesta Incorrecta." << std::endl;
											}

										} while (respuesta4 < "1" || respuesta4 > "2");
									}
									else if (respuesta3 == "2")
									{
										std::cout << "*Asi que solo dormir, me parece correcto ya puedes irte eres libre.*" << std::endl;
										std::cout << RED << "FINAL: Dormir esta comodo." << RESET << std::endl;
										contadorMuertes++;
										contadorPersonaNormal++;
									}
									else
									{
										std::cout << "Respuesta Incorrecta." << std::endl;
									}
								} while (respuesta3 < "1" || respuesta3 > "2");

							}
							else if (respuesta2 == "3") {
								std::cout << "*Calvin te dice entonces tendras que hacerme un favor*" << std::endl;
								std::cout << "*Entran en escena 3 personas, Calvin te dice que este es su equipo para robar un banco, y que si haces ese trabajo pagaras tu deuda* " << std::endl;

								std::string respuesta3;

								do
								{
									std::cout << "1- Te niegas rotundamente a hacer un robo. " << std::endl;
									std::cout << "2- Dices vamos y te unes al equipo para robar el banco. " << std::endl;

									std::cin >> respuesta3;

									if (respuesta3 == "1")
									{
										std::cout << "*Al negarte ellos te dicen de subirte al coche, tu te subes y ellos te dicen giramos  a la derecha o la izquierda.* " << std::endl;

										std::string respuesta4;

										do
										{

											std::cout << "1- Derecha" << std::endl;
											std::cout << "2- Izquierda" << std::endl;

											std::cin >> respuesta4;

											if (respuesta4 == "1")
											{
												std::cout << "*Van hacia el carril de la derecha y se encuentran un precipicio deciden tirarte por el.* " << std::endl;
												std::cout << RED << "FINAL: Caida al vacio." << RESET << std::endl;
												contadorMuertes++;
												contadorTonto++;
											}
											else if (respuesta4 == "2")
											{
												std::cout << "*Llegas a una feria con montañas rusas tiobibo diversas atracciones en cual quieres montarte con los amigos de Calvin?* " << std::endl;

												std::string respuesta5;

												do
												{
													std::cout << "1- Montaña Rusa" << std::endl;
													std::cout << "2- Tiovivo" << std::endl;


													std::cin >> respuesta5;

													if (respuesta5 == "1")
													{
														std::cout << "*Te subes tranquilamente en la montaña rusa,y esta resulta que le faltaban algunos tornillos.* " << std::endl;
														std::cout << "*Los amigos de Calvin te piden desesperadamente que lo arregles*" << std::endl;
														std::cout << "*Finalmente te decidiras a intentar repararlo o no.* " << std::endl;

														std::string respuesta6;

														do
														{
															std::cout << "1- Decides arreglarlo. " << std::endl;
															std::cout << "2- Decides quedarte quieto y respirar aire puro. " << std::endl;

															std::cin >> respuesta6;

															if (respuesta6 == "1")
															{
																std::cout << "*No eres ningun experto en montañas rusas asi que lamentablemente mueres en el intento.*" << std::endl;
																std::cout << RED << "FINAL: Muerte en montaña rusa intentando reparar. " << RESET << std::endl;
																contadorMuertes++;
																contadorListo++;
															}
															else if (respuesta6 == "2")
															{
																std::cout << "*Respirar aire puro, y los amigos de Calvin se ponen manos a la obra se quitan las camisetas y se crean un paracaidas con la ropa* " << std::endl;
																std::cout << "*Tu intentas coger tu mobil y buscar en Google como hacer un paracaidas en 1 segundo pero no te da tiempo a hacer nada* " << std::endl;
																std::cout << RED << "FINAL: Muerte con la montaña rusa. " << RESET << std::endl;
																contadorMuertes++;
																contadorTonto++;
															}
															else
															{
																std::cout << "Respuesat Incorrecta. " << std::endl;
															}

														} while (respuesta6 < "1" || respuesta6 > "2");
													}
													else if (respuesta5 == "2")
													{
														std::cout << "*Te subes al Tiovivo y disfrutas como un niño, los amigos de Calvin tambien disfrutan. Digamos que este fue un gran camino ya que Tu y los amigos de Calvin os haceis inseparables.* " << std::endl;
														std::cout << RED << "FINAL: Feliz y con los amigos de Calvin a tu lado. " << RESET << std::endl;
														contadorMuertes++;
														contadorPacifista++;
													}
													else
													{
														std::cout << "Respuesta Incorrecta. " << std::endl;
													}

												} while (respuesta5 < "1" || respuesta5 > "3");
											}
											else
											{
												std::cout << "Respuesta Incorrecta. " << std::endl;
											}



										} while (respuesta4 < "1" || respuesta4 > "2");

									}
									else if (respuesta3 == "2")
									{
										std::cout << "*Decides ir con los amigos de Calvin a un atraco, los 4 agarrais unas pistolas de juguete* " << std::endl;
										std::cout << "*Tu les dices que con una pistola de juguete no vais a hacer nada, pero ellos te dicen ERES UN CAGAO?*" << std::endl;

										std::string respuesta4;

										do
										{
											std::cout << "1- Te cagas " << std::endl;
											std::cout << "2- No te cagas" << std::endl;

											std::cin >> respuesta4;

											if (respuesta4 == "1")
											{
												std::cout << "*Te haces tanta tanta caca, que los amigos de Calvin huyen de ti muy rapido. *" << std::endl;
												std::cout << RED << "FINAL: Muerto engullido por caca, Lamentable!." << RESET << std::endl;
												contadorMuertes++;
												contadorTonto++;
											}
											else if (respuesta4 == "2")
											{
												std::cout << "*Finalmente no te cagas, y llegais al banco.*" << std::endl;
												std::cout << "*Los amigos de Calvin se disponen a coger rehenes y atarlos, tu por otro lado robas las cajas que hay y vais directos a la caja fuerte tu y otro amigo de Calvin.*" << std::endl;
												std::cout << "*Como vas a organizar al grupo?*" << std::endl;

												std::string respuesta5;

												do
												{
													std::cout << "1- Dices a uno de los amigos de Calvin que se quede en la puerta negociando con los guardias y vigilando a los rehenes. " << std::endl;
													std::cout << "2- Le dices que da igual los rehenes y los echais a la calle" << std::endl;
													std::cout << "3- Todos vais a la caja fuerte. " << std::endl;

													std::cin >> respuesta5;

													if (respuesta5 == "1")
													{
														std::cout << "*El amigo de calvin se queda con los rehenes mientras este se pone a negociar con la policia una salida limpia del banco*" << std::endl;
														std::cout << "*Al parecer el amigo de calvin es un crack y consigue negociar una persecucion limpia*" << std::endl;

														std::cout << "*Finalmente sales del establecimiento, pero espera no falta algo?*" << std::endl;

														std::string respuesta6;
														do
														{
															std::cout << "1- Sales directo fuera." << std::endl;
															std::cout << "2- Te quedas dentro por el momento." << std::endl;

															std::cin >> respuesta6;

															if (respuesta6 == "1")
															{
																std::cout << "*Creo que te olvidaste del dinero pero bueno ya no hay vuelta atras!*" << std::endl;
																std::cout << "*Teneis que decidir un vehiculo para la huida.*" << std::endl;



																std::string respuesta7;
																do
																{
																	std::cout << "1- Ferrari." << std::endl;
																	std::cout << "2- Carritos de la compra." << std::endl;
																	std::cout << "3- Patienete electrico." << std::endl;

																	std::cin >> respuesta7;

																	if (respuesta7 == "1")
																	{
																		std::cout << "*Elegiste el Ferrari como quieres conducirlo?*" << std::endl;

																		std::string respuesta8_1;
																		do
																		{
																			std::cout << "1- Correr a toda mecha." << std::endl;
																			std::cout << "2- Ir lento." << std::endl;

																			std::cin >> respuesta8_1;

																			if (respuesta8_1 == "1")
																			{
																				std::cout << "*Corres tan a tope que te das contra un muro al parecer te has muerto.*" << std::endl;
																				std::cout << RED << "Final: Muerte por Ferrari, triste." << RESET << std::endl;
																				contadorMuertes++;
																				contadorTonto++;
																			}
																			else if (respuesta8_1 == "2")
																			{
																				std::cout << "*Corres tan lento que finalmente la policia te hace un PIT y te vas a la carcel.*" << std::endl;
																				std::cout << RED << "Final: Encarcelado con Ferrari." << RESET << std::endl;
																				contadorMuertes++;
																				contadorTonto++;
																			}
																			else
																			{
																				std::cout << "Respuesta Incorrecta." << std::endl;
																			}

																		} while (respuesta8_1 < "1" || respuesta8_1 > "2");
																	}
																	else if (respuesta7 == "2")
																	{
																		std::cout << "*Cojen los carritos de la compra, al parecer hay un Mercadona al lado entrais y os camuflais entre la gente y conseguis huir de la policia! *" << std::endl;
																		std::cout << RED << "Final: Camuflados con carritos de la compra." << RESET << std::endl;
																		contadorMuertes++;
																		contadorListo++;
																	}
																	else if (respuesta7 == "3")
																	{
																		std::cout << "*Elegiste el patinete electrico que resulta que estaba trucado y ya vas a la misma velocidad que los patrullas de la policia.*" << std::endl;
																		std::cout << "*Llegas a un cruce donde por un lado hay un bosque y por el otro lado un colegio.*" << std::endl;

																		std::string respuesta8_2;

																		do
																		{
																			std::cout << "1- Bosque." << std::endl;
																			std::cout << "2- Colegio" << std::endl;

																			std::cin >> respuesta8_2;

																			if (respuesta8_2 == "1")
																			{
																				std::cout << "*Entrais al bosque y os escondeis en los matorrales.*" << std::endl;
																				std::cout << "*Llega un policia que se pone muy cerca tuyo, pero observas que hay un barranco cerca tuyo.*" << std::endl;

																				std::string respuesta9;

																				do
																				{
																					std::cout << "1- Lo empujas por el barranco." << std::endl;
																					std::cout << "2- No haces nada." << std::endl;

																					std::cin >> respuesta9;

																					if (respuesta9 == "1")
																					{
																						std::cout << "*Lo tiras al policia pero resulta que los otros policias te ven y quedas detenido.*" << std::endl;
																						std::cout << RED << "Final: Detenido por homicidio!" << RESET << std::endl;
																						contadorMuertes++;
																						contadorPsicopata++;

																					}
																					else if (respuesta9 == "2")
																					{
																						std::cout << "*No haces nada y finalmente conseguis huir de alli, pero sin dinero claro.*" << std::endl;
																						std::cout << RED << "Final: Bonito pero sin dinero." << RESET << std::endl;
																						contadorMuertes++;
																						contadorListo++;
																					}
																					else
																					{
																						std::cout << "Respuesta Incorrecta." << std::endl;
																					}

																				} while (respuesta9 < "1" || respuesta9 > "2");

																			}
																			else if (respuesta8_2 == "2" && edad > "18")
																			{
																				std::cout << "*Pero eres bobo que te ven perfectamente tienes " << edad << " pero bueno te vas a la carcel. " << std::endl;
																				std::cout << RED << "Final: Detenido por bobo!" << RESET << std::endl;
																				contadorMuertes++;
																				contadorTonto++;
																			}
																			else if (respuesta8_2 == "2" && edad < "18")
																			{
																				std::cout << "*Te camuflas como si fueras un niño y consigues despistarlos.*" << std::endl;
																				std::cout << RED << "Final: Camuflado como un niño en el colegio." << RESET << std::endl;
																				contadorListo++;
																				contadorMuertes++;
																			}
																			else
																			{
																				std::cout << "Respuesta Incorrecta." << std::endl;
																			}

																		} while (respuesta8_2 < "1" || respuesta8_2 > "2");
																	}
																	else
																	{
																		std::cout << "Respuesta Incorrecta." << std::endl;
																	}

																} while (respuesta7 < "1" || respuesta7 > "3");

															}
															else if (respuesta6 == "2")
															{
																std::cout << "*Finalmente decides quedarte ahi dentro tranquilito. La policia buscan hamacas y se quedan tranquilitos con vosotros.*" << std::endl;
																std::cout << RED << "Final: Tranquilitos con los policias." << RESET << std::endl;
																contadorMuertes++;
																contadorPersonaNormal++;
															}
															else {
																std::cout << "Respuesta Incorrecta" << std::endl;
															}

														} while (respuesta6 < "1" || respuesta6 > "2");
													}
													else if (respuesta5 == "2")
													{
														std::cout << "*Los policias se dan cuenta de que estis sacando a los rehenes entonces deciden entrar dentro para arrestaros.*" << std::endl;
														std::cout << "*Que vas a hacer con los agentes?*" << std::endl;

														std::string respuesta6;

														do
														{
															std::cout << "1- Disparas con tu pistola. " << std::endl;
															std::cout << "2- Levantas las manos y te cagas." << std::endl;

															std::cin >> respuesta6;

															if (respuesta6 == "1")
															{
																std::cout << "*Pero no te acuerdas que era de agua la pistola eres bobo y te vas a la trena.*" << std::endl;
																std::cout << RED << "Final: A prision, pistolitas de agua." << RESET << std::endl;
																contadorMuertes++;
																contadorTonto++;
																contadorPsicopata++;
															}
															else if (respuesta6 == "2")
															{
																std::cout << "*Te rendiste y te vas a la carcel*" << std::endl;
																std::cout << RED << "Final: Te cagaste y a prision." << RESET << std::endl;
																contadorMuertes++;
																contadorTonto++;
															}
															else
															{
																std::cout << "Respuesta Incorrecta." << std::endl;
															}

														} while (respuesta6 < "1" || respuesta6 > "2");

													}
													else if (respuesta5 == "3")
													{
														std::cout << "*Vais todos a la caja fuerte y buscais una forma de abrirla y los objetos que teneis para intentar abrirla son: *" << std::endl;
														//van todos a la caja fuerte y buscan formas de abrirla. final quedan todos atrapador dentro. o salen todos pero tu dentro hacer 2 finales

														std::string respuesta6;

														do
														{
															std::cout << "1- Un explosivo." << std::endl;
															std::cout << "2- Lanzallamas." << std::endl;
															std::cout << "3- La abrimos sin mas." << std::endl;
															std::cout << "4- Rezamos a Jesus." << std::endl;

															std::cin >> respuesta6;

															if (respuesta6 == "1")
															{
																std::cout << "*Poneis un explosivo en la caja fuerte os poneis detras de unas cajas y...de repente se hace un silencio parece que no explota.*" << std::endl;

																std::string respuesta7;

																do
																{
																	std::cout << "1- Te acercas." << std::endl;
																	std::cout << "2- No Te acercas." << std::endl;

																	std::cin >> respuesta7;

																	if (respuesta7 == "1")
																	{
																		std::cout << "*Te acercas y justo explota el explosivo, lamentable.*" << std::endl;
																		std::cout << RED << "Final: Explosivo." << RESET << std::endl;
																		contadorMuertes++;
																		contadorTonto++;
																	}
																	else if (respuesta7 == "2")
																	{
																		std::cout << "*No te acercas al explosivo, pero resulta que explota y era defectuoso y la explosion hace que estalle todo el banco.*" << std::endl;
																		std::cout << RED << "Final: Incidente Explosivo." << RESET << std::endl;
																		contadorMuertes++;
																		contadorTonto++;
																	}
																	else
																	{
																		std::cout << "Respuesta Incorrecta." << std::endl;
																	}


																} while (respuesta7 < "1" || respuesta7 > "2");
															}
															else if (respuesta6 == "2")
															{
																std::cout << "*Cojes un lanzallamas pero pesa demasiado y comienzas a dar vueltas y quemas todo lo que ves por tu paso, no tienes ni idea de como apagarlo, esto es increible.*" << std::endl;
																std::cout << RED << "Final: Quemas todo lo que ves." << RESET << std::endl;
																contadorMuertes++;
																contadorPsicopata++;
															}
															else if (respuesta6 == "3")
															{
																std::cout << "*Con mucha fuerza abren la puerta y resulta que estaba abierta asi que roban tranquilitos el dinero pero de repente la puerta se cierra, creo que os quedasteis atrapados.*" << std::endl;
																std::cout << RED << "Final: Atrapado en el banco." << RESET << std::endl;
																contadorMuertes++;
																contadorTonto++;
															}
															else if (respuesta6 == "4")
															{
																std::cout << "*Comienzan a rezar a Jesus, de repente escuchais que la policia esta entrando al banco pero vosotros seguis rezando a dios, los policias os ven y os apoyan en la causa.*" << std::endl;
																std::cout << RED << "Final: Rezando a Jesus con policias apoyando tu gran causa, que crack." << RESET << std::endl;
																contadorMuertes++;
																contadorPersonaNormal++;
															}
															else
															{
																std::cout << "Respuesta Incorrecta" << std::endl;
															}

														} while (respuesta6 < "1" || respuesta6 > "4");

													}
													else
													{
														std::cout << "Respuesta Incorrecta." << std::endl;
													}

												} while (respuesta5 < "1" || respuesta5 > "3");
											}
											else
											{
												std::cout << "Respuesta Incorrecta." << std::endl;
											}

										} while (respuesta4 < "1" || respuesta4 > "2");
									}
									else
									{
										std::cout << "Respuesta Incorrecta " << std::endl;
									}

								} while (respuesta3 < "1" || respuesta3 > "2");

							}
							else {
								std::cout << "Respuesta Incorrecta" << std::endl;
							}

						} while (respuesta2 < "1" || respuesta2 > "3");
					}
					else {
						std::cout << "Respuesta no valida. Intentalo de nuevo." << std::endl;
					}
				} while (respuesta1 < "1" || respuesta1 > "3");

			}
			else {
				if (edad > "30") {
					std::cout << "Entonces tu tienes: " << edad << std::endl;
					std::cout << "Eres muy joven para esta historia." << std::endl;
					std::cout << RED << "FINAL: Muy corto." << RESET << std::endl;
					contadorMuertes++;
					contadorTonto++;

				}
				else if (edad > "17") {
					std::cout << "Entonces tienes: " << edad << std::endl;
					std::cout << "Felicidades por esos 18 anos o los que sean pero esta historia termina aqui crack.";
					std::cout << RED << "FINAL: Corto pero felicidades por tu edad." << RESET << std::endl;
					contadorMuertes++;
					contadorListo++;
				}
				else {
					std::cout << "Eres muy joven para esta historia. Vuelve cuando seas mayor!" << std::endl;
					std::cout << RED << "FINAL: Por ser menor de edad." << RESET << std::endl;
					contadorMuertes++;
					contadorTonto++;
				}
			}

			std::cout << "Quieres volver a Jugar? (Pon SI para volver a jugar o NO para salir.) " << std::endl;
			std::cin >> volverAJugar;

		} while (volverAJugar._Equal("S") || volverAJugar._Equal("Si") || volverAJugar._Equal("si") || volverAJugar._Equal("yes"));

		std::cout << "Tienes contador de muertes a: " << contadorMuertes << std::endl;

		
		if (contadorPacifista > contadorPersonaNormal && contadorPacifista > contadorPsicopata && contadorPacifista > contadorListo && contadorPacifista > contadorTonto)
		{
			std::cout << BLUE << "Eres una persona muy pacifista intenta ser un poco mas loco bro!" << RESET <<  std::endl;
		}
		else if (contadorPersonaNormal > contadorPsicopata && contadorPersonaNormal > contadorPacifista && contadorPersonaNormal > contadorListo && contadorPersonaNormal > contadorTonto)
		{
			std::cout << BLUE << "Eres una persona aparentemente normal, me aburres." <<  RESET << std::endl;
		}
		else if (contadorPsicopata > contadorPersonaNormal && contadorPsicopata > contadorPacifista && contadorPsicopata > contadorListo && contadorPsicopata > contadorTonto)
		{
			std::cout << BLUE << "Eres una persona muy LOCA!De donde has salido, ya puedes ir yendo a un psicologo." <<  RESET << std::endl;
		}
		else if (contadorTonto > contadorPsicopata && contadorTonto > contadorListo && contadorTonto > contadorPacifista && contadorTonto > contadorPersonaNormal)
		{
			std::cout << BLUE << "Eres una persona muy Tonta, porfavor vuelve por donde has venido." <<  RESET << std::endl;
		}
		else if (contadorListo > contadorPsicopata && contadorListo > contadorTonto && contadorListo > contadorPacifista && contadorListo > contadorPersonaNormal)
		{
			std::cout << BLUE << "Eres una persona muy Lista, dios mio eres Jesucrito!." << RESET <<  std::endl;
		}
		else if (contadorPacifista == contadorPersonaNormal)
		{
			std::cout << BLUE << "Eres igual de pacifista que persona normal." << RESET << std::endl;
		}
		else if (contadorPacifista == contadorPsicopata)
		{
			std::cout << BLUE << "Eres igual de pacifista que loco." << RESET << std::endl;
		}
		else if (contadorPacifista == contadorListo)
		{
			std::cout << BLUE << "Eres igual de pacifista que listo." << RESET << std::endl;
		}
		else if (contadorPacifista == contadorTonto)
		{
			std::cout << BLUE << "Eres igual de pacifista que tonto." << RESET << std::endl;
		}
		else if (contadorPersonaNormal == contadorPsicopata)
		{
			std::cout << BLUE << "Eres igual de normal que loco." << RESET << std::endl;
		}
		else if (contadorPersonaNormal == contadorListo)
		{
			std::cout << BLUE << "Eres igual de normal que listo." << RESET << std::endl;
		}
		else if (contadorPersonaNormal == contadorTonto)
		{
			std::cout << BLUE << "Eres igual de normal que tonto." << RESET << std::endl;
		}
		else if (contadorPsicopata == contadorListo)
		{
			std::cout << BLUE << "Eres igual de loco que listo." << RESET << std::endl;
		}
		else if (contadorPsicopata == contadorTonto)
		{
			std::cout << BLUE << "Eres igual de loco que tonto." << RESET << std::endl;
		}
		else if (contadorListo == contadorTonto)
		{
			std::cout << BLUE << "Eres igual de listo que tonto." << RESET << std::endl;
		}
		else
		{
			std::cout << BLUE << "Espero que hayas disfrutado :D." << RESET << std::endl;
		}

		//std::cout << BLUE << "Zona de pruevas" << RESET << std::endl;
		//std::cout << "ContadorPacifista " << contadorPacifista << std::endl;
		//std::cout << "ContadorPsicopata " << contadorPsicopata << std::endl;
		//std::cout << "ContadorTonto " << contadorTonto << std::endl;
		//std::cout << "ContadorListo " << contadorListo << std::endl;
		//std::cout << "ContadorPersonaNormal " << contadorPersonaNormal << std::endl;
		system("pause");

	}








}
