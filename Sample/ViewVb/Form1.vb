Public Class Form1

    Private Sub Button1_Click(sender As Object, e As EventArgs) Handles Button1.Click
        Dim obj As Wrapper.MyTreeView
        obj = New Wrapper.MyTreeView()
        obj.drawToTreeView(Me.TreeView1)
    End Sub
End Class
