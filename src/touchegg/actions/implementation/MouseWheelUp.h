/**
 * @file /src/touchegg/actions/implementation/MouseWheelUp.h
 *
 * @~spanish
 * Este archivo es parte del proyecto Touchégg, usted puede redistribuirlo y/o
 * modificarlo bajo los téminos de la licencia GNU GPL v3.
 *
 * @~english
 * This file is part of the Touchégg project, you can redistribute it and/or
 * modify it under the terms of the GNU GPL v3.
 *
 * @class  MouseWheelUp
 * @author José Expósito
 */
#ifndef MOUSEWHEELUP_H
#define MOUSEWHEELUP_H

#include "src/touchegg/util/Include.h"
#include "src/touchegg/actions/implementation/Action.h"

/**
 * @~spanish
 * Emula la rueda del ratón.
 *
 * @~english
 * Emulates the mouse whell.
 */
class MouseWheelUp : public Action {

    private:

        /**
         * @~spanish
         * Velocidad del scroll. A mayor más lento.
         *
         * @~english
         * Scroll speed. More is slower.
         */
        int speed;

        /**
         * @~spanish
         * Variable auxiliar para aplicar la velocidad.
         *
         * @~english
         * Auxiliary variable to implement speed.
         */
        int speedCount;

    public:

        /**
         * @~spanish
         * Constructor.
         * @param settings Configuración de la acción.
         *
         * @~english
         * Constructor
         * @param settings Action settings.
         */
        MouseWheelUp(const QString& settings);

        /**
         * @~spanish
         * Parte de la acción que se ejecutará cuando el gesto se inicie.
         * @param attrs Atributos del gestos, siendo la clave el nombre del
         *        atributo (por ejemplo "focus x", "touches"...) y el valor el
         *        valor del propio atributo.
         *
         * @~english
         * Part of the action that will be executed when the gesture is started.
         * @param attrs Gesture attributes, where the key is the name of the
         *        attribute (ie "focus x", "touches") and the value the value of
         *        the attribute.
         */
        void executeStart(const QHash<QString, QVariant>& attrs);

        /**
         * @~spanish
         * Parte de la acción que se ejecutará cuando el gesto se actualice.
         * @param attrs Atributos del gestos, siendo la clave el nombre del
         *        atributo (por ejemplo "focus x", "touches"...) y el valor el
         *        valor del propio atributo.
         *
         * @~english
         * Part of the action that will be executed when the gesture is updated.
         * @param attrs Gesture attributes, where the key is the name of the
         *        attribute (ie "focus x", "touches") and the value the value of
         *        the attribute.
         */
        void executeUpdate(const QHash<QString, QVariant>& attrs);

        /**
         * @~spanish
         * Parte de la acción que se ejecutará cuando el gesto se finalice.
         * @param attrs Atributos del gestos, siendo la clave el nombre del
         *        atributo (por ejemplo "focus x", "touches"...) y el valor el
         *        valor del propio atributo.
         *
         * @~english
         * Part of the action that will be executed when the gesture finish.
         * @param attrs Gesture attributes, where the key is the name of the
         *        attribute (ie "focus x", "touches") and the value the value of
         *        the attribute.
         */
        void executeFinish(const QHash<QString, QVariant>& attrs);

};

#endif // MOUSEWHEELUP_H
