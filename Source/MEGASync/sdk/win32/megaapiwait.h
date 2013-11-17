/*

MEGA SDK 2013-11-17 - Win32 event/timeout handling

(c) 2013 by Mega Limited, Wellsford, New Zealand

Applications using the MEGA API must present a valid application key
and comply with the the rules set forth in the Terms of Service.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED,
INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR
PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE
FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR
OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
DEALINGS IN THE SOFTWARE.

*/

#ifndef MEGA_API_WAIT_CLASS
#define MEGA_API_WAIT_CLASS MegaApiWinWaiter

class MegaApiWinWaiter : public Waiter
{
	typedef ULONGLONG (WINAPI* PGTC)();
	PGTC pGTC;
	ULONGLONG tickhigh;
	DWORD prevt;

public:
    enum { WAKEUP_HTTP, WAKEUP_CUSTOM };
	HANDLE hWakeup[2];
	PCRITICAL_SECTION pcsHTTP;
	unsigned pendingfsevents;

	dstime getdstime();

	void init(dstime);
	void waitfor(EventTrigger*);
	int wait();
    void notify();

    MegaApiWinWaiter();
};

#endif
