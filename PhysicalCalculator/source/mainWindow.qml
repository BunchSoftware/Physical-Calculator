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
                ColumnLayout {
                    spacing: 0

                    Button {
                        id: addButton
                        background: Rectangle {
                            color: "white"
                            anchors.fill: parent
                        }

                        Action {
                            id: addButtonAction
                        }
                        action: addButtonAction
                        contentItem: Text {
                            text: "Добавить вкладку"
                            horizontalAlignment: Text.AlignLeft
                            verticalAlignment: Text.AlignVCenter
                            anchors.fill: parent
                            anchors.leftMargin: 10
                            anchors.bottomMargin: 5
                        }
                    }
                    Button {
                        background: Rectangle {
                            color: "white"
                            anchors.fill: parent
                        }
                        Action {
                            id: closeAllTabsAction
                        }
                        action: closeAllTabsAction
                        contentItem: Text {
                            text: "Закрыть все вкладки"
                            horizontalAlignment: Text.AlignLeft
                            verticalAlignment: Text.AlignVCenter
                            anchors.fill: parent
                            anchors.leftMargin: 10
                            anchors.bottomMargin: 5
                        }
                    }
                }
            }
        }
        RowLayout {
            anchors.left: parent.left
            anchors.right: parent.right
            TabBar {
                id: tabBar
                anchors.fill: parent
                spacing: 0
                Repeater {

                    model: ["CalculateForm", "PhysicalCalculatorForm", "ParserForm", "FamiliarizationForm", "ErrorForm", "AboutForm"]
                    TabButton {
                        id: tabButtonI
                        Layout.fillWidth: true
                        Text {
                            id: textTabButton
                            verticalAlignment: Text.AlignVCenter
                            horizontalAlignment: Text.AlignLeft
                            wrapMode: Text.WordWrap
                            font.pixelSize: 12
                            anchors.left: parent.left
                            anchors.top: parent.top
                            anchors.bottom: parent.bottom
                            anchors.leftMargin: 5
                            color: "white"
                            elide: Text.ElideRight
                            text: modelData
                        }

                        Button {
                            width: 10
                            height: 10
                            anchors.right: parent.right
                            anchors.verticalCenter: parent.verticalCenter
                            anchors.rightMargin: 10
                            background: Image {
                                id: imageClose
                                source: "qrc:/images/Close.png"
                                width: 10
                                height: 10
                            }
                        }
                        onFocusChanged: {
                            textTabButton.color = "white"
                            imageClose.source = "qrc:/images/Close.png"
                        }
                        onToggled: {
                            textTabButton.color = "black"
                            imageClose.source = "qrc:/images/close-button-black.png"
                        }
                    }
                }
            }
        }

        RowLayout {
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

