QT += core printsupport gui quick

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++21

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    forms\calculateForm.cpp \
    forms\errorForm.cpp \
    forms\mainWindow.cpp \
    forms\physicalCalculateForm.cpp \
    forms\plottingForm.cpp \
    forms\aboutwindow.cpp \
    forms\familiarization.cpp \
    main.cpp \
    forms\parser.cpp \
    library\qcustomplot.cpp

HEADERS += \
    forms\calculateForm.h \
    forms\errorForm.h \
    forms\MainWindow.h \
    forms\physicalCalculateForm.h \
    forms\plottingForm.h \
    forms\aboutwindow.h \
    forms\familiarization.h \
    library\interpreter.h \
    forms\parser.h \
    library\physicInterpreter.h \
    library\qcustomplot.h

FORMS += \
    forms\calculateForm.ui \
    forms\errorForm.ui \
    forms\mainWindow.ui \
    forms\physicalCalculateForm.ui \
    forms\plottingForm.ui \
    forms\aboutwindow.ui \
    forms\familiarization.ui \
    forms\parser.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    source/images.qrc \
    source\qml.qrc \

DISTFILES += \
    source/images/Close.png \
    source/images/absolute_temperature.png \
    source/images/amount_heat_released.png \
    source/images/amount_substance.png \
    source/images/ampere_power.png \
    source/images/archimedes_law.png \
    source/images/average_speed.png \
    source/images/body_melting.png \
    source/images/check.svg \
    source/images/close-button-black.png \
    source/images/conductor_resistivity.png \
    source/images/coordinate_time.png \
    source/images/coulomb_force.png \
    source/images/downarrow.png \
    source/images/force_gravity.png \
    source/images/free_path.png \
    source/images/fuel_combustion.png \
    source/images/half_life.png \
    source/images/heat_vaporization.png \
    source/images/horizontal_flight_range.png \
    source/images/icon-back-arrow.png \
    source/images/icon-calculator.png \
    source/images/icon-menu.png \
    source/images/icon-pinned.png \
    source/images/icon-settings.png \
    source/images/icons_tree/cube-3d-svgrepo-com.svg \
    source/images/icons_tree/cube-svgrepo-com.svg \
    source/images/icons_tree/cube-svgrepo-com_struct.svg \
    source/images/icons_tree/experiment-results-svgrepo-com.svg \
    source/images/icons_tree/layer-svgrepo-com.svg \
    source/images/icons_tree/point-on-surface-svgrepo-com.svg \
    source/images/icons_tree/sinusoid-svgrepo-com.svg \
    source/images/icons_tree/temp/depth-lab-svgrepo-com.svg \
    source/images/icons_tree/temp/download (33).svg \
    source/images/icons_tree/temp/experiment-results-svgrepo-com.svg \
    source/images/icons_tree/temp/point-on-surface-svgrepo-com.svg \
    source/images/icons_tree/temp/sinusoid-svgrepo-com.svg \
    source/images/icons_web/1boundaries.svg \
    source/images/icons_web/1frequency.svg \
    source/images/icons_web/1history.svg \
    source/images/icons_web/1listing.svg \
    source/images/icons_web/1logs.svg \
    source/images/icons_web/1mesh-generator.svg \
    source/images/icons_web/1mesh-settings.svg \
    source/images/icons_web/1mesh-view.svg \
    source/images/icons_web/1optimizer.svg \
    source/images/icons_web/1queue-listing-cards-svgrepo-com.svg \
    source/images/icons_web/1solver-settings.svg \
    source/images/icons_web/1solver.svg \
    source/images/icons_web/1sweep.svg \
    source/images/icons_web/2d-rotate.svg \
    source/images/icons_web/360-rotate.svg \
    source/images/icons_web/ball.svg \
    source/images/icons_web/book.svg \
    source/images/icons_web/book_2.svg \
    source/images/icons_web/brain.svg \
    source/images/icons_web/build.svg \
    source/images/icons_web/camera.svg \
    source/images/icons_web/chat.svg \
    source/images/icons_web/cloud.svg \
    source/images/icons_web/cloud_reverse.svg \
    source/images/icons_web/code.svg \
    source/images/icons_web/code_2.svg \
    source/images/icons_web/conference.svg \
    source/images/icons_web/date.svg \
    source/images/icons_web/devices.svg \
    source/images/icons_web/document.svg \
    source/images/icons_web/documents.svg \
    source/images/icons_web/down.svg \
    source/images/icons_web/flash.svg \
    source/images/icons_web/football.svg \
    source/images/icons_web/game.svg \
    source/images/icons_web/global.svg \
    source/images/icons_web/graduate.svg \
    source/images/icons_web/group.svg \
    source/images/icons_web/left.svg \
    source/images/icons_web/link.svg \
    source/images/icons_web/mail.svg \
    source/images/icons_web/marketing.svg \
    source/images/icons_web/mask.svg \
    source/images/icons_web/medal.svg \
    source/images/icons_web/micro.svg \
    source/images/icons_web/person.svg \
    source/images/icons_web/point.svg \
    source/images/icons_web/printer.svg \
    source/images/icons_web/projector.svg \
    source/images/icons_web/rake.svg \
    source/images/icons_web/reset-view.svg \
    source/images/icons_web/right.svg \
    source/images/icons_web/ring.svg \
    source/images/icons_web/robot.svg \
    source/images/icons_web/run.svg \
    source/images/icons_web/search.svg \
    source/images/icons_web/service.svg \
    source/images/icons_web/service_2.svg \
    source/images/icons_web/settings.svg \
    source/images/icons_web/students.svg \
    source/images/icons_web/swim.svg \
    source/images/icons_web/teacher.svg \
    source/images/icons_web/team.svg \
    source/images/icons_web/team_2.svg \
    source/images/icons_web/temp/1boundaries.svg \
    source/images/icons_web/temp/1frequency.svg \
    source/images/icons_web/temp/1history.svg \
    source/images/icons_web/temp/1listing.svg \
    source/images/icons_web/temp/1logs.svg \
    source/images/icons_web/temp/1mesh-generator.svg \
    source/images/icons_web/temp/1mesh-settings.svg \
    source/images/icons_web/temp/1mesh-view.svg \
    source/images/icons_web/temp/1optimizer.svg \
    source/images/icons_web/temp/1queue-listing-cards-svgrepo-com.svg \
    source/images/icons_web/temp/1solver-settings.svg \
    source/images/icons_web/temp/1solver.svg \
    source/images/icons_web/temp/1sweep.svg \
    source/images/icons_web/tennis.svg \
    source/images/icons_web/theatre.svg \
    source/images/icons_web/up.svg \
    source/images/icons_web/voice.svg \
    source/images/icons_web/voice_off.svg \
    source/images/icons_web/voice_on.svg \
    source/images/icons_web/volume.svg \
    source/images/icons_web/wave.svg \
    source/images/icons_web/wifi.svg \
    source/images/icons_web/wifi_2.svg \
    source/images/icons_web/zoom-in.svg \
    source/images/icons_web/zoom-out.svg \
    source/images/interference_max.png \
    source/images/interference_min.png \
    source/images/kinetic_energy.png \
    source/images/logotype.png \
    source/images/lorentz_force.png \
    source/images/molecular_concentration.png \
    source/images/newton_second_law.png \
    source/images/ohm_law.png \
    source/images/oscillation_frequency.png \
    source/images/potential_energy.png \
    source/images/radiobutton.png \
    source/images/radiobutton.svg \
    source/images/radiobutton2.svg \
    source/images/radiobutton3.svg \
    source/images/relativity_mass.png \
    source/images/silatoka.png \
    source/images/speed_light.png \
    source/images/spring_pendulum.png \
    source/images/thomson_law.png \
    source/images/tusur_logo_main_color_cmyk.png \
    source/images/wavelength.png

