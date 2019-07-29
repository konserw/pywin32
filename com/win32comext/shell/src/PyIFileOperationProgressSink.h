// @doc - This file contains autoduck documentation
// This file declares the IFileOperationProgressSink Gateway for Python.
// Generated by makegw.py
// ---------------------------------------------------
//
// Gateway Declaration

// @object PyGFileOperationProgressSink|Implement-only gateway for IFileOperationProgressSink,
// used to receive events from a <o PyIFileOperation> object.
// <nl>To abort the operation, an implementation of any method can raise a
// com_error with an appropriate HRESULT.

class PyGFileOperationProgressSink : public PyGatewayBase, public IFileOperationProgressSink {
   protected:
    PyGFileOperationProgressSink(PyObject *instance) : PyGatewayBase(instance) { ; }
    PYGATEWAY_MAKE_SUPPORT2(PyGFileOperationProgressSink, IFileOperationProgressSink, IID_IFileOperationProgressSink,
                            PyGatewayBase)

    // IFileOperationProgressSink
    // @pymeth StartOperations|Called as operation begins, before any modifications are done
    STDMETHOD(StartOperations)(void);

    // @pymeth FinishOperations|Called after all actions have been performed
    STDMETHOD(FinishOperations)(HRESULT hrResult);

    // @pymeth PreRenameItem|Called before each file rename
    STDMETHOD(PreRenameItem)(DWORD dwFlags, IShellItem *psiItem, LPCWSTR pszNewName);

    // @pymeth PostRenameItem|Called after each file rename
    STDMETHOD(PostRenameItem)
    (DWORD dwFlags, IShellItem *psiItem, LPCWSTR pszNewName, HRESULT hrRename, IShellItem *psiNewlyCreated);

    // @pymeth PreMoveItem|Called before each move operation
    STDMETHOD(PreMoveItem)(DWORD dwFlags, IShellItem *psiItem, IShellItem *psiDestinationFolder, LPCWSTR pszNewName);

    // @pymeth PostMoveItem|Called after each move operation
    STDMETHOD(PostMoveItem)
    (DWORD dwFlags, IShellItem *psiItem, IShellItem *psiDestinationFolder, LPCWSTR pszNewName, HRESULT hrMove,
     IShellItem *psiNewlyCreated);

    // @pymeth PreCopyItem|Called before each copy operation
    STDMETHOD(PreCopyItem)(DWORD dwFlags, IShellItem *psiItem, IShellItem *psiDestinationFolder, LPCWSTR pszNewName);

    // @pymeth PostCopyItem|Called after each copy operation
    STDMETHOD(PostCopyItem)
    (DWORD dwFlags, IShellItem *psiItem, IShellItem *psiDestinationFolder, LPCWSTR pszNewName, HRESULT hrCopy,
     IShellItem *psiNewlyCreated);

    // @pymeth PreDeleteItem|Called before each delete operation
    STDMETHOD(PreDeleteItem)(DWORD dwFlags, IShellItem *psiItem);

    // @pymeth PostDeleteItem|Called after each delete operation
    STDMETHOD(PostDeleteItem)(DWORD dwFlags, IShellItem *psiItem, HRESULT hrDelete, IShellItem *psiNewlyCreated);

    // @pymeth PreNewItem|Called before each new file is created
    STDMETHOD(PreNewItem)(DWORD dwFlags, IShellItem *psiDestinationFolder, LPCWSTR pszNewName);

    // @pymeth PostNewItem|Called after each new file is created
    STDMETHOD(PostNewItem)
    (DWORD dwFlags, IShellItem *psiDestinationFolder, LPCWSTR pszNewName, LPCWSTR pszTemplateName,
     DWORD dwFileAttributes, HRESULT hrNew, IShellItem *psiNewItem);

    // @pymeth UpdateProgress|Gives an estimate of total work completed
    STDMETHOD(UpdateProgress)(UINT iWorkTotal, UINT iWorkSoFar);

    // @pymeth ResetTimer|Not implemented, according to MSDN
    STDMETHOD(ResetTimer)(void);

    // @pymeth PauseTimer|Not implemented, according to MSDN
    STDMETHOD(PauseTimer)(void);

    // @pymeth ResumeTimer|Not implemented, according to MSDN
    STDMETHOD(ResumeTimer)(void);
};
