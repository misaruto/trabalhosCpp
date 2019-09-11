<?php 
if ((isset($_REQUEST['codigo']))&&(isset($_REQUEST['token']))) {
	$codigo = $_REQUEST['codigo'];
	$token = $_REQUEST['token'];
	if ((!empty($codigo))&&(!empty($token))) {
		if ($token == 1233321) {
			include 'configs.php';
			$query = "SELECT creditos,id FROM tblusers WHERE codigo = '$codigo'";
			$sql = mysqli_query($con, $query);
			$creditos = mysqli_fetch_object($sql);
			if ($creditos->creditos >= 1) {
				$cred = $cred -1;
				$query = "UPDATE tblusers SET creditos = '$cred' WHERE id = '$creditos->id'";
				if (mysqli_query($con,$query)) {
					return true;
				}
			}
		}
	}	
}


?>