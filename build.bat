:: Inplaats van cl /EHsc student.cpp persoon.cpp en .\student.exe is nu .\build.bat voldoende


@echo off
:: Compileer met exception support
cl /EHsc student.cpp persoon.cpp

:: Check of het compileren gelukt is (bestand bestaat?)
if exist student.exe (
    echo.
    echo ===== Programma wordt uitgevoerd =====
    echo.
    student.exe
) else (
    echo.
    echo Compileren mislukt. Controleer fouten hierboven.
)
pause
