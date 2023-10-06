#ifndef _ROBOT_
#define _ROBOT_

#include "game.h"

/**
 * @file robot.h
 * @brief Fichier contenant les fonctions de gestion des joueurs robots.
 */

/**
 * @brief Compare une partie d'une chaine de caract�re avec la totalit� d'une autre
 * @param[in] dico, un Item dont on comparera une partie.
 * @param[in] word, un Item le mot recherch� au d�but de l'Item dico.
 * @pre dico != NULL && word != NULL
 * @return true si word est �gal au d�but de dico, flse sinon
 */
bool strcmpHalf(const Item dico, const Item word);

/**
 * @brief Cherche un mot dans un dictionnaire et renvoie la prochaine lettre du mot.
 * @param[in] dico Le dictionnaire dans lequel chercher.
 * @param[in] word Le mot � chercher dans le dictionnaire.
 * @pre dico.capacite > 0
 * @return La prochaine lettre du mot suivant si le mot est trouv�, '0' sinon.
 */
char closeWord(const ConteneurTD& dico, const Item word);

/**
 * @brief Permet � un robot de jouer en proposant une lettre.
 * @param[in] dico Le dictionnaire � utiliser pour trouver des mots.
 * @param[in] word Le mot actuellement form� par les adversaires.
 * @return La lettre propos�e par le robot. '?' si aucun mot du dico ne commence par `word`.
 */
char robotPlay(const ConteneurTD& dico, const Item word);

/**
 * @brief Cherche le d�but d'un mot dans un dictionnaire et le renvoie en entier.
 * @param[in] dico Le dictionnaire dans lequel chercher.
 * @param[in] word Le mot � chercher dans le dictionnaire.
 * @pre dico.capacite > 0
 * @return Un mot commen�ant par `word` si trouv�, `word`sinon.
 */
Item getEnd(const ConteneurTD& dico, const Item word);

/**
 * @brief Demande au robot de donner le mot auquel il pense.
 * @param[in] g La structure qui contient les informations sur la partie en cours.
 * @param[in] dico Le dictionnaire � utiliser pour trouver des mots.
 * @param[in] word Le mot � compl�ter.
 * @return true si un mot du dico commence par `word`, false sinon.
 * @warning Si un mot est trouv� on l'affichera 
 ainsi qu'un message indiquant que le joueur pr�c�dent prend un quart de singe.
 */
bool askRobot(const Game& g, const ConteneurTD& dico, const Item word);

#endif