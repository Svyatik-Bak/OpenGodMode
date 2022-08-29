#include <stdio.h>
#include <windows.h>

int shit;
int main()
{
    for (int j = 1; j <= 10; shit = shit + 1)
    {
    system("cls");
    system("title OpenGodMode");
    printf("Please enter a number\n");
    printf("\nCatrgories\n");
    printf("1. Open God Mode\n");
    printf("2. Open Control Panel\n");
    printf("3. Open Control Panel (Large icons)\n");
    printf("\nTabs\n");
    printf("4. Administrative Tools\n");
    printf("5. Default Programs\n");
    printf("6. Device Manager\n");
    printf("7. Devices and Printers\n");
    printf("8. Display\n");
    printf("9. Personalization\n");
    printf("10. Folder Options\n");
    printf("11. Power Options\n");
    printf("12. Programs and Features\n");
    printf("13. Sound\n");
    printf("14. System\n");
    printf("15. User Accounts\n");
    printf("16. Windows Firewall\n");
    printf("17. Windows Mobility Center\n");
    printf("18. Windows Update\n");
    printf("19. Mouse\n");
    printf("20. System (Legacy)\n");
    printf("21. Date and Time Properties\n");
    printf("22. Keyboard Properties\n");
    printf("23. Regional and Language Options\n");
    printf("24. Fonts\n");

    
        scanf_s("%i", &shit);
        switch (shit)
        {
        case 1: system("start explorer.exe shell:::{ED7BA470-8E54-465E-825C-99712043E01C}"); break;
        case 2: system("start Control Panel"); break;
        case 3: system("start shell:::{26EE0668-A00A-44D7-9371-BEB064C98683}\0"); break;
        case 4: system("start control /name Microsoft.AdministrativeTools"); break;
        case 5: system("start control /name Microsoft.DefaultPrograms"); break;
        case 6: system("start control /name Microsoft.DeviceManager"); break;
        case 7: system("start control /name Microsoft.DevicesAndPrinters"); break;
        case 8: system("start control /name Microsoft.Display"); break;
        case 9: system("start control /name Microsoft.Personalization"); break;
        case 10: system("start control /name Microsoft.FolderOptions"); break;
        case 11: system("start control /name Microsoft.PowerOptions"); break;
        case 12: system("start control /name Microsoft.ProgramsAndFeatures"); break;
        case 13: system("start control /name Microsoft.Sound"); break;
        case 14: system("start control /name Microsoft.System"); break;
        case 15: system("start control /name Microsoft.UserAccounts"); break;
        case 16: system("start control /name Microsoft.WindowsFirewall"); break;
        case 17: system("start control /name Microsoft.MobilityCenter"); break;
        case 18: system("start control /name Microsoft.WindowsUpdate"); break;
        case 19: system("start control.exe mouse"); break;
        case 20: system("start shell:::{bb06c0e4-d293-4f75-8a90-cb05b6477eee}"); break;
        case 21: system("start control date/time"); break;
        case 22: system("start control.exe keyboard"); break;
        case 23: system("start control.exe international"); break;
        case 24: system("start control.exe fonts"); break;
        }
    }
}