# Mise en place du projet

- Cloner le d�p�t depuis Github dans Visual Studio ou avec l'invite de commande Git.
- Ouvrir le d�p�t avec visual studio.
- V�rifier que les configs de build (Debug et Release) sont en Win32.
- Lancer une premi�re build en Debug qui va cr�er les dossier de g�n�ration et ne pas se lancer car il manque les dlls.
- Copier les dlls de Debug depuis le dossier vendors/dll/dll_Debug/ dans le dossier contenant l'ex�cutable g�n�r�.
- Relancer le projet depuis Visual Studio et il devrait maintenant se lancer.