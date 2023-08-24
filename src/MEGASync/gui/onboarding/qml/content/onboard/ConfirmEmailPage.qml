// System
import QtQuick 2.12
import QtQuick.Window 2.12

// Local
import Onboarding 1.0

// C++
import LoginController 1.0

ConfirmEmailPageForm {
    id: confirmEmailPage

    changeEmailLinkText.onLinkActivated: {
        registerFlow.state = changeConfirmEmail;
    }

    cancelAccount.onClicked: {
        LoginControllerAccess.cancelCreateAccount();
    }

    email: LoginControllerAccess.email

    Connections {
        target: LoginControllerAccess

        onEmailConfirmed: {
            registerFlow.state = login;

            // The following four lines are required by Ubuntu to bring the window to the front and
            // move it to the center
            onboardingWindow.hide();
            onboardingWindow.show();
            onboardingWindow.x = Screen.width / 2 - onboardingWindow.width / 2;
            onboardingWindow.y = Screen.height / 2 - onboardingWindow.height / 2;

            // The following two lines are required by Windows (activate) and macOS (raise)
            onboardingWindow.requestActivate();
            onboardingWindow.raise();
        }

        onAccountCreateCancelled: {
            registerFlow.state = login;
        }
    }
}
