import QtQuick 2.4
import QtQuick.Controls 2.3
import QtQuick.Layouts 1.3
import Qt.labs.animation 1.0
import Qt.labs.calendar 1.0
import QtGraphicalEffects 1.0

ApplicationWindow {
    id: applicationWindow
    visible: true
    minimumWidth: 1000
    minimumHeight: 700
    title: qsTr("PhysicalCalculator")

    ColumnLayout {
        id: columnLayout
        width: parent.width
        height: parent.height
        anchors.fill: parent
        spacing: 0

        RowLayout {
            implicitHeight: 25
            spacing: 0

            Button {
                id: fileButton
                implicitHeight: parent.implicitHeight
                text: "Файл"

                contentItem: Text {
                    id: textFileButton
                    verticalAlignment: Text.AlignVCenter
                    horizontalAlignment: Text.AlignHCenter
                    wrapMode: Text.WordWrap
                    font.pixelSize: 12
                    anchors.fill: parent
                    color: "black"
                    text: fileButton.text
                    z: 1
                }
                background: Rectangle {
                    implicitWidth: 100
                    color: "white"
                    border.width: 0
                }

                Rectangle {
                    id: fileButtonBackgroundHovered
                    visible: false
                    anchors.fill: parent
                    anchors.topMargin: 2
                    anchors.bottomMargin: 2
                    anchors.leftMargin: 5
                    anchors.rightMargin: 5
                    z: 0
                    color: "#8330a6"
                }

                onHoveredChanged: {
                    if (hovered) {
                        fileButtonBackgroundHovered.visible = true
                        textFileButton.color = "white"
                    } else {
                        fileButtonBackgroundHovered.visible = false
                        textFileButton.color = "black"
                    }
                }

                onClicked: {
                    menuFile.open()
                }
            }

            Menu {
                id: menuFile
                y: fileButton.height
                background: Rectangle {
                    implicitWidth: 200
                    color: "white"
                    border.width: 0

                    Rectangle {
                        id: background
                        height: parent.height
                        width: parent.width
                        color: "white"
                        border.width: 0
                    }

                    DropShadow {
                        anchors.fill: background
                        horizontalOffset: 3
                        verticalOffset: 3
                        radius: 8.0
                        samples: 10

                        color: "#80000000"
                        source: background
                    }
                }
                Action {
                    id: createProject
                    shortcut: "Ctrl+N"
                    text: "Создать проект"
                }
                Action {
                    id: openProject
                    shortcut: "Ctrl+O"
                    text: "Открыть проект"
                }
                Action {
                    id: lastProject
                    text: "Недавние проекты"
                }
                Action {
                    id: saveProject
                    shortcut: "Ctrl+S"
                    text: "Сохранить проект"
                }
                Action {
                    id: closeProject
                    shortcut: "Ctrl+Shift+W"
                    text: "Закрыть проект"
                }
                Action {
                    id: quitAplication
                    shortcut: "Alt+F4"
                    onTriggered: applicationWindow.close()
                    text: "Выход"
                }
            }
            Button {
                id: tabButton
                implicitHeight: parent.implicitHeight
                text: "Вкладки"

                background: Rectangle {
                    implicitWidth: 100
                    color: "white"
                    border.width: 0
                }

                contentItem: Text {
                    id: textTabButton
                    verticalAlignment: Text.AlignVCenter
                    horizontalAlignment: Text.AlignHCenter
                    wrapMode: Text.WordWrap
                    font.pixelSize: 12
                    anchors.fill: parent
                    color: "black"
                    text: tabButton.text
                    z: 1
                }

                Rectangle {
                    id: tabButtonBackgroundHovered
                    visible: false
                    anchors.fill: parent
                    anchors.topMargin: 2
                    anchors.bottomMargin: 2
                    anchors.leftMargin: 5
                    anchors.rightMargin: 5
                    z: 0
                    color: "#8330a6"
                }

                onHoveredChanged: {
                    if (hovered) {
                        tabButtonBackgroundHovered.visible = true
                        textTabButton.color = "white"
                    } else {
                        tabButtonBackgroundHovered.visible = false
                        textTabButton.color = "black"
                    }
                }

                onClicked: {
                    menuTab.open()
                }
            }
            Menu {
                id: menuTab
                y: tabButton.height
                x: tabButton.width

                background: Rectangle {
                    implicitWidth: 200
                    color: "white"
                    border.width: 0

                    Rectangle {
                        id: backgroundTab
                        height: parent.height
                        width: parent.width
                        color: "white"
                        border.width: 0
                    }

                    DropShadow {
                        anchors.fill: backgroundTab
                        horizontalOffset: 3
                        verticalOffset: 3
                        radius: 8.0
                        samples: 10

                        color: "#80000000"
                        source: backgroundTab
                    }
                }

                MenuItem {
                    text: "Добавить вкладку"
                    onHoveredChanged: {
                        if (hovered)
                            addTab.open()
                    }
                }

                MenuItem {
                    text: "Закрыть все вкладки"
                }
            }
            Button {
                id: referenceButton
                implicitHeight: parent.implicitHeight
                text: "Справка"

                background: Rectangle {
                    implicitWidth: 100
                    color: "white"
                    border.width: 0
                }

                contentItem: Text {
                    id: textReferenceButton
                    verticalAlignment: Text.AlignVCenter
                    horizontalAlignment: Text.AlignHCenter
                    wrapMode: Text.WordWrap
                    font.pixelSize: 12
                    anchors.fill: parent
                    color: "black"
                    text: referenceButton.text
                    z: 1
                }

                Rectangle {
                    id: referenceButtonBackgroundHovered
                    visible: false
                    anchors.fill: parent
                    anchors.topMargin: 2
                    anchors.bottomMargin: 2
                    anchors.leftMargin: 5
                    anchors.rightMargin: 5
                    z: 0
                    color: "#8330a6"
                }

                onHoveredChanged: {
                    if (hovered) {
                        referenceButtonBackgroundHovered.visible = true
                        textReferenceButton.color = "white"
                    } else {
                        referenceButtonBackgroundHovered.visible = false
                        textReferenceButton.color = "black"
                    }
                }

                onClicked: {
                    referenceTab.open()
                }
            }
            Menu {
                id: addTab
                y: tabButton.height
                x: menuTab.width + menuTab.x

                background: Rectangle {
                    implicitWidth: 200
                    color: "white"
                    border.width: 0

                    Rectangle {
                        id: backgroundAddTab
                        height: parent.height
                        width: parent.width
                        color: "white"
                        border.width: 0
                    }

                    DropShadow {
                        anchors.fill: backgroundAddTab
                        horizontalOffset: 3
                        verticalOffset: 3
                        radius: 8.0
                        samples: 10

                        color: "#80000000"
                        source: backgroundAddTab
                    }
                }

                MenuItem {
                    text: "Калькулятор"
                }

                MenuItem {
                    text: "Физический калькулятор"
                }
                MenuItem {
                    text: "Построение графиков"
                }
                MenuItem {
                    text: "Математический парсер"
                }
                MenuItem {
                    text: "Ознакомление с программой"
                }
            }
            Menu {
                id: referenceTab
                y: referenceButton.height
                x: referenceTab.width

                background: Rectangle {
                    implicitWidth: 200
                    color: "white"
                    border.width: 0

                    Rectangle {
                        id: backgroundReferenceTab
                        height: parent.height
                        width: parent.width
                        color: "white"
                        border.width: 0
                    }

                    DropShadow {
                        anchors.fill: backgroundReferenceTab
                        horizontalOffset: 3
                        verticalOffset: 3
                        radius: 8.0
                        samples: 10

                        color: "#80000000"
                        source: backgroundReferenceTab
                    }
                }

                MenuItem {
                    text: "Отправить отзвы"
                    onTriggered: {
                        reviewTab.open()
                    }
                    onHoveredChanged: {
                        if (hovered)
                            reviewTab.open()
                    }
                }

                MenuItem {
                    text: "Ознакомление с документацией"
                }
                MenuItem {
                    text: "О программе Physical Calculator"
                }
            }
            Menu {
                id: reviewTab
                y: referenceButton.height
                x: referenceTab.width + referenceTab.x

                background: Rectangle {
                    implicitWidth: 200
                    color: "white"
                    border.width: 0

                    Rectangle {
                        id: backgroundReviewTab
                        height: parent.height
                        width: parent.width
                        color: "white"
                        border.width: 0
                    }

                    DropShadow {
                        anchors.fill: backgroundReviewTab
                        horizontalOffset: 3
                        verticalOffset: 3
                        radius: 8.0
                        samples: 10

                        color: "#80000000"
                        source: backgroundReviewTab
                    }
                }

                MenuItem {
                    text: "Сообщить о проблеме"
                }

                MenuItem {
                    text: "Предложить функцию"
                }
                MenuItem {
                    text: "Мой отзыв"
                }
            }
        }

        ListModel {
            id: modelTabBar
            ListElement {
                nameTab: "CalculateForm"
                isPinned: false
            }
            ListElement {
                nameTab: "PhysicalCalculatorForm"
                isPinned: false
            }
            ListElement {
                nameTab: "ParserForm"
                isPinned: false
            }
            ListElement {
                nameTab: "FamiliarizationForm"
                isPinned: false
            }
            ListElement {
                nameTab: "ErrorForm"
                isPinned: false
            }
        }

        RowLayout {
            id: tabBarLayout
            anchors.left: parent.left
            anchors.right: parent.right
            TabBar {
                id: tabBar
                anchors.fill: parent
                background: Rectangle {
                    anchors.fill: parent
                    color: "#dde3e9"
                }

                spacing: 0
                Repeater {
                    model: modelTabBar
                    property string nameTab
                    property bool isPinned
                    TabButton {
                        Layout.fillWidth: true

                        background: Rectangle {
                            id: tabButtonBackground
                            anchors.fill: parent
                            color: "#dde3e9"
                            radius: 10
                            implicitHeight: 40
                        }

                        Rectangle {
                            anchors.fill: parent
                            anchors.leftMargin: 3
                            anchors.rightMargin: 3
                            anchors.topMargin: 7
                            anchors.bottomMargin: 7
                            radius: 8
                            color: "#c6cbd0"
                            visible: {
                                if (parent.hovered && parent.focus == false)
                                    return true
                                else
                                    false
                            }
                        }

                        Button {
                            id: closeButton
                            anchors.right: parent.right
                            anchors.verticalCenter: parent.verticalCenter
                            anchors.rightMargin: 10
                            width: 15
                            height: 15

                            background: {

                            }

                            Rectangle {
                                id: closeButtonHover
                                visible: false
                                radius: 8
                                anchors.fill: parent
                                color: "#b5b6ba"
                            }

                            Image {
                                anchors.fill: parent
                                anchors.margins: 2
                                source: "qrc:/images/close-button-black.png"
                            }

                            onHoveredChanged: {
                                if (hovered)
                                    closeButtonHover.visible = true
                                else
                                    closeButtonHover.visible = false
                            }
                        }

                        Button {
                            id: pinnedButton
                            anchors.right: closeButton.left
                            anchors.verticalCenter: parent.verticalCenter
                            anchors.rightMargin: 3
                            width: 15
                            height: 15
                            background: {

                            }

                            Rectangle {
                                id: pinnedButtonHover
                                visible: false
                                radius: 8
                                anchors.fill: parent
                                color: "#b5b6ba"
                            }

                            Image {
                                id: imagePinned
                                anchors.fill: parent
                                anchors.margins: 2
                                transformOrigin: Item.Center
                                source: "qrc:/images/icon-pinned.png"
                            }

                            onHoveredChanged: {
                                if (hovered)
                                    pinnedButtonHover.visible = true
                                else
                                    pinnedButtonHover.visible = false
                            }

                            onClicked: {
                                if (isPinned) {
                                    imagePinned.rotation = 0
                                    isPinned = false
                                } else {
                                    imagePinned.rotation = 90
                                    isPinned = true
                                }

                                parent.focus = true
                            }
                        }

                        Text {
                            verticalAlignment: Text.AlignVCenter
                            horizontalAlignment: Text.AlignLeft
                            wrapMode: Text.WordWrap
                            font.pixelSize: 12
                            anchors.left: parent.left
                            anchors.top: parent.top
                            anchors.bottom: parent.bottom
                            anchors.right: pinnedButton.left
                            anchors.leftMargin: 8
                            color: "black"
                            elide: Text.ElideRight
                            text: nameTab
                        }

                        Rectangle {
                            id: lineTabButton
                            visible: {
                                if (parent.focus)
                                    return true
                                else
                                    return false
                            }

                            anchors.left: parent.left
                            anchors.right: parent.right
                            anchors.top: parrent.top
                            anchors.leftMargin: 10
                            anchors.rightMargin: 10
                            color: "#652580"
                            height: 3
                        }

                        onFocusChanged: {
                            if (focus) {
                                tabButtonBackground.color = "white"
                                imageClose.source = "qrc:/images/Close.png"
                            } else {
                                tabButtonBackground.color = "#dde3e9"
                                imageClose.source = "qrc:/images/Close.png"
                            }
                        }
                    }
                }
            }
            Rectangle {
                anchors.left: parent.left
                anchors.right: parent.right
                anchors.top: tabBar.bottom
                color: "#652580"
                height: 3
            }
        }

        RowLayout {
            anchors.right: parent.right
            anchors.left: parent.left
            anchors.top: tabBarLayout.bottom
            anchors.bottom: parent.bottom
            anchors.margins: 5

            StackLayout {
                anchors.fill: parent
                currentIndex: tabBar.currentIndex

                Item {
                    Loader {
                        anchors.fill: parent
                        source: "qrc:/calculateForm.qml"
                    }
                }
                Item {
                    Loader {
                        anchors.fill: parent
                        source: "qrc:/physicalCalculatorForm.qml"
                    }
                }
                Item {
                    Loader {
                        anchors.fill: parent
                        source: "qrc:/parserForm.qml"
                    }
                }
                Item {
                    Loader {
                        anchors.fill: parent
                        source: "qrc:/familiarizationForm.qml"
                    }
                }
                Item {
                    Loader {
                        anchors.fill: parent
                        source: "qrc:/errorForm.qml"
                    }
                }
                Item {
                    Loader {
                        anchors.fill: parent
                        source: "qrc:/aboutForm.qml"
                    }
                }
            }
        }
    }
    Text {
        id: textNullPanel

        width: parent.width
        height: parent.height

        visible: {
            if (tabBar.count === 0)
                return true
            else
                return false
        }
        text: "Чтобы приступить к решению задач, добавьте новые вкладки"
        verticalAlignment: Text.AlignVCenter
        horizontalAlignment: Text.AlignHCenter
        wrapMode: Text.WordWrap
        font.pixelSize: 30
        anchors.fill: parent
    }
}

/*##^##
Designer {
    D{i:0;autoSize:true;height:480;width:640}
}
##^##*/

