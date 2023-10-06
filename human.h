#ifndef _HUMAN_
#define _HUMAN_

#include "game.h"

/**
 * @file human.h
 * @brief Fichier contenant les fonctions de gestion des joueurs humains.
 */

/**
 * @brief Initialise une partie de pendu, les joueurs sont allou�s dynamiquement.
 * @param[in, out] g La structure � initialiser.
 * @param[in] players Le nombre de joueurs dans la partie.
 * @pre players >= MIN_PLAYERS
 */
void init(Game& g, unsigned int players);

/**
 * @brief D�truit une partie et lib�re la m�moire allou�e pour les joueurs.
 * @param[in, out] g La partie � d�truire.
 */
void destroyGame(Game& g);

/**
 * @brief Lit les informations d'un joueur dans une partie.
 * @param[in] g La structure qui contient les informations sur la partie en cours.
 * @param[in] i L'index du joueur � lire.
 * @pre i < g.nbPlayers
 * @return Les informations du joueur � l'index `i`.
 */
Player read(const Game& g, unsigned int i);

/**
 * @brief Ajoute un joueur � une partie. Allocation dynamique si on d�passe le tableau.
 * @param[in, out] g La structure qui contient les informations sur la partie.
 * @param[in] i L'index du joueur � ajouter.
 * @param[in] type Le type de joueur (humain ou robot).
 */
void addPlayer(Game& g, unsigned int i, const char type);

/**
 * @brief Affiche les scores des joueurs d'une partie.
 * @param[in] g La structure qui contient les informations sur la partie en cours.
 */
void showScore(const Game& g);

/**
 * @brief Demande le mot auquel pense un joueur d'une partie de quart de singe.
 * @param[in] g La structure qui contient les informations sur la partie en cours.
 * @param[in] dico Le dictionnaire contenant les mots.
 * @param[in] word Le mot en construction.
 * @param[in] before L'index du joueur (pr�c�dent) qui a demand� le mot.
 * @pre before >= 0 && before < g.nbPlayers
 * @return L'index du joueur qui a pris un quart de singe 
 (`before` si le mot n'est pas valide, sinon l'index du joueur qui a donn� le mot).
 */
int askWord(const Game& g, const ConteneurTD& dico, Item word, unsigned int before);

#endif