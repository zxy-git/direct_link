Public Class Form1
    Public Declare Function ReleaseCapture Lib "user32.dll" () As Boolean
    Public Declare Function SendMessageW Lib "user32.dll" (ByVal hwnd As IntPtr, wMsg As Int32, wParam As Int32, IParam As Int32) As Boolean
    Public Const WM_SYSCOMMAND As Int32 = 274
    Public Const SC_MOVE As Int32 = 61456
    Public Const HTCAPTION As Int32 = 2
    Public sec As Integer = 0
    Public min As Integer = 0
    Private Sub Form1_Load(sender As Object, e As EventArgs) Handles MyBase.Load

    End Sub

    Private Sub Form1_MouseDown(sender As Object, e As MouseEventArgs) Handles Me.MouseDown
        ReleaseCapture()
        SendMessageW(Me.Handle, WM_SYSCOMMAND, SC_MOVE + HTCAPTION, 0)
    End Sub

    Private Sub Timer1_Tick(sender As Object, e As EventArgs) Handles Timer1.Tick
        If sec = 50 Then
            sec = 0
            min += 1
        Else
            sec += 10
        End If
        Label1.Text = min & ":" & sec
        Me.TopMost = True
    End Sub

    Private Sub Label1_Click(sender As Object, e As EventArgs) Handles Label1.Click
        Label1.Text = "0:0"
        BackColor = Color.White
        TransparencyKey = Color.White
        Timer1.Enabled = True
    End Sub

    Private Sub Form1_MouseDoubleClick(sender As Object, e As MouseEventArgs) Handles Me.MouseDoubleClick
        Dispose()
    End Sub

    Private Sub Label1_MouseDoubleClick(sender As Object, e As MouseEventArgs) Handles Label1.MouseDoubleClick
        TransparencyKey = Color.Gray
    End Sub
End Class
