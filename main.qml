import QtQuick 2.7
import QtQuick.Controls 2.0
import QtQuick.Layouts 1.3

ApplicationWindow {
    visible: true
    width: 640
    height: 480
    title: qsTr("Hello World")


    Button{
        id:b
        text:'click me '
        onClicked: console.log(StringList.show())
    }
    ListView{
        id:l
        model:StringList.show()
        delegate:Label{
            text:modelData
        }
        width: 100; height: 100

        anchors.centerIn: parent
    }



}
