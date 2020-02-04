
JavaScript basic
1 .
	var x = prompt( "Enter a year" ) ;
	if( x % 4 == 0 && x % 100 == 0 && x % 400 == 0 )
	{
		console.log( "Leap Year" ) ;
	}
	else if( x % 4 == 0 && x % 100 != 0 )
	{
		console.log( "Leap Year" ) ;
	}
	else
	{
		console.log( "Not Leap Year" ) ;
	}

2.
	console.log( document.URL ) ;


3 .
	var s = prompt( "Enter a string" ) ;
	if( s.substr( 0 , 4 ) == "java" )
	{
		console.log( "true" ) ;
	}
	else
	{
		console.log( "False" ) ;
	}

4 .
	var s = prompt( "Enter a string" ) ;
	var ans = 0 ;
	for( var i = 0 ; i < s.length ; i ++ )
	{
		ans += s[ i ] - '0' ;
	}
	console.log( ans ) ;
	

5 .
	var arr1 = [ 1 , 2 , 3 , 4 , 5 ] ;
	var arr2 = [ 5 , 4 , 1 , 6 , 7 ] ;
	var cnt = 0 ;
	for( var i = 0 ; i < arr1.length ; i ++ )
	{
		for( var j = 0 ; j < arr2.length ; j ++ )
		{
			if( arr1[ i ] == arr2[ j ] )
			{
				cnt ++ ;
				break ;
			}
			
		}
	}
	console.log( cnt ) ;
	

6.
	var s = prompt( "Enter a string" ) ;
	var str = s.replace( s[ 0 ] , '$' ) ;
	console.log( str ) ;
	

7.
	function two( n )
	{
    		var k = 0 ;
    		while( n )
    		{
        		k += Math.floor( n / 2 ) ;
        		n = Math.floor( n / 2 ) ;
    		}
   		return k;
	}

	function five( n )
	{
    		var k = 0 ;

    		while( n )
    		{
        		k += Math.floor( n / 5 ) ;
        		n = Math.floor( n / 5 ) ;
    		}
    		return k;
	}

	var n = prompt( "Enter a value " ) ;
	var ans = Math.min( two( n ) , five( n ) ) ;
	console.log( ans ) ;
	

8 .
	function number( a , b )
	{
		return a - b ;
	}

	var arr = [ 5 , 1 , 7 , 8 , 10 , 15 ] ;
	arr.sort( number ) ;
	var k = prompt( "Which nunmber of greatest ? " ) ;
	console.log( arr[ k - 1 ] ) ;
	

9.
	var s = prompt( "Enter a string" ) ;
	console.log( s.split( "" ) . reverse() . join( "" ) ) ;
	

10.
	var x = prompt( "Enter a number" ) ;
	var ans = 1 ;
	for( var i = 1 ; i <= x ; i ++ )
	{
		ans *= i ;
	}
	console.log( ans ) ;


11 .
	function Fun( a , b )
	{
		if( b == 0 )
		{
			return a ;
		}
		else
		{
			return Fun( b , a % b ) ;
		}
	}

	var a = prompt( "Enter first number" ) ;
	var b = prompt( "Enter second number" ) ;
	console.log( Fun( a , b ) ) ;

12 . Pattern is not given in the question

13.
	var a = prompt( "Enter first number" ) ;
	var b = prompt( "Enter second number" ) ;
	var c = prompt( "Enter third number" ) ;
	var arr = [] ;
	if( a < b && a < c )
	{
		arr[ 0 ] = a ;
		if( b < c )
		{
			arr[ 1 ] = b ;
			arr[ 2 ] = c ;
		}
		else
		{
			arr[ 1 ] = c ;
			arr[ 2 ] = b ;
		}
	}
	else if( b < a && b < c )
	{
		arr[ 0 ] = b ;
		if( a < c )
		{
			arr[ 1 ] = a ;
			arr[ 2 ] = c ;
		}
		else
		{
			arr[ 1 ] = c ;
			arr[ 2 ] = a ;
		}
	}
	else if( c < a && c < b )
	{
		arr[ 0 ] = c ;
		if( a < b )
		{
			arr[ 1 ] = a ;
			arr[ 2 ] = b ;
		}
		else
		{
			arr[ 1 ] = b ;
			arr[ 2 ] = a ;
		}
	}

	for( var i = 0 ; i < arr.length ; i ++ )
	{
		alert( arr[ i ] ) ;
	}


*****************************************************

JavaScript validation without RE:
( 1 - 5 )

	function isBoolen( val )
	{
		return val === true || val === false || toString.call( val ) === '[object Boolean]' ;
	}

	function isRegExp( val )
	{
		return toString.call( val ) === '[object RegExp]' ;
	}

	function isChar( val )
	{
		if( toString.call( val ) === '[object String]' && val.length === 1 )
		{
			return true ;
		}
		return false ;
	}

	function isNull( val )
	{
		return val === null ;
	}

	function isNan( val )
	{
		return val !== val ;
	}

	console.log( isBoolen( false ) ) ;
	console.log( isBoolen( 'bar' ) ) ;

	console.log("" ) ;

	console.log( isRegExp( /new/ ) ) ;
	console.log( isRegExp( false ) ) ;

	console.log("" ) ;

	console.log( isChar( '*' ) ) ;
	console.log( isChar( "hello" ) ) ;

	console.log("" ) ;

	console.log( isNull( "" ) ) ;
	console.log( isNull( null ) ) ;
	console.log( isNull( 1 ) ) ;

	console.log("" ) ;

	console.log( isNan( NaN ) ) ;
	console.log( isNan( "hello" ) ) ;


********************************************************
1 . 
	function isUpper( s )
	{
		regexp = /^[ A - Z ]/ ;
		return regexp.test( s ) ;
	}

	console.log( isUpper( 'Abcd' ) ) ;
	console.log( isUpper( 'abcA' ) ) ;
	console.log( "" ) ;
	--------------------------------------------
	function validEmail( s )
	{
		var regexp = /^\w+([\.-]?\w+)*@\w+([\.-]?\w+)*(\.\w{2,3})+$/ ;
		return regexp.test( s ) ;
	}

	console.log( validEmail( 'mujahid2923@gamil.com' ) ) ;
	console.log( validEmail( 'mujahid2923@gamil' ) ) ;
	console.log( "" ) ;
	-----------------------------------------------
		function wordnumber( s )
		{
			s = s.replace(/(^\s*)|(\s*$)/gi,"") ; 
			s = s.replace(/[ ]{2,}/gi," ") ;
			s = s.replace(/\n /,"\n");
			console.log( s.split( ' ' ).length ) ;
		}

		var str = prompt( "Enter the string " ) ;
		wordnumber( str ) ;
	------------------------------------------------

		function vowel( s )
		{
			console.log( s.match( /[aeiou]/gi ).length ) ;
		}
		var str = prompt( "Enter the string " ) ;
		vowel( str ) ;
	----------------------------
	function alphanumeric( s )
		{
			var regexp = /^[a-zA-Z0-9]+$/ ;
			if( regexp.test( s ) )
			{
				console.log( 'true' ) ;
			}
			else
			{
				console.log( 'false' ) ;
			}
		}

		alphanumeric( "acbAc120" ) ;
		alphanumeric( "3243#$sew" ) ;
	
	---------------------------------

	function hexadecimal( s )
		{
			var regexp = /^[a-fA-F0-9]+$/ ;
			if( regexp.test( s ) )
			{
				console.log( 'true' ) ;
			}
			else
			{
				console.log( 'false' ) ;
			}
		}

		hexadecimal( "ffffff" ) ;
		hexadecimal( "fz5500" ) ;
	-----------------------------------

	function alphadeash( s )
		{
			var regexp = /^[a-z0-9_\-]+$/i ;
			if( regexp.test( s ) )
			{
				console.log( 'true' ) ;
			}
			else
			{
				console.log( 'false' ) ;
			}
		}

		alphadeash( "12#133" ) ;
		alphadeash( "100_23" ) ;
	-------------------------------
	
	function htmlornot( s )
		{
			var regexp =  /<([a-z]+) *[^/]*?>/;
			if( regexp.test( s ) )
			{
				console.log( 'true' ) ;
			}
			else
			{
				console.log( 'false' ) ;
			}
		}

		htmlornot( "" ) ;
		htmlornot( "<p>" ) ;


**************************************************
JavaScript function:
1 . 
	var s = prompt( "Enter the string" ) ;
	var ck = true ;
	for( var i = 0 ; i < s.length ; i ++ )
	{
		if( s[ i ] != s[ s.length - i - 1 ] )
		{
			ck = false ;
			break ;
		}
	}
	if( ck )
	{
		console.log( "palindrome" ) ;
	}
	else
	{
		console.log( "not palindrome" ) ;
	}
	

2 . 
	function Fun( s )
	{
		var arr2 = [] ;
		var arr1 = s.split( ' ' ) ;
		for( var i = 0 ; i < arr1.length ; i ++ )
		{
			arr2.push( arr1[ i ][ 0 ].toUpperCase() + arr1[ i ].slice( 1 ) ) ;
		}
		return arr2.join( ' ' ) ;
	}

	var s = prompt( "Enter the string" ) ;

	console.log( Fun( s ) ) ;



3 . 
	function Fun( s )
	{
		var str ;
		var siz = -1 ;
		var arr = s.split( ' ' ) ;
		for( var i = 0 ; i < arr.length ; i ++ )
		{
			if( arr[ i ].length > siz )
			{
				str = arr[ i ] ;
				siz = arr[ i ].length ;
			}
		}
		return str ;
	}

	var s = prompt( "Enter the string" ) ;

	console.log( Fun( s ) ) ;


4 .
	var str = "abcdefghijklmnopqrstuvwxyz" ;

	function what( val )
	{
		for( var i = 0 ; i < str.length ; i ++ )
		{
			if( val == str[ i ] )
			{
				return i ;
			}
		}
	}
	var arr = [] ;
	for( var i = 0 ; i < str.length ; i ++ )
	{
		arr.push( 0 ) ;
	}

	var s = prompt( "Enter the string" ) ;
	
	for( var i = 0 ; i < s.length ; i ++ )
	{
		arr[ what( s[ i ] ) ] ++ ;
	}

	for( var i = 0 ; i < str.length ; i ++ )
	{
		console.log( str[ i ] + " " + arr[ what( str[ i ] ) ] + "\n" ) ;
	}

5 . 

	function functionName()
	{
		console.log( arguments.callee.name ) ;
	}
	functionName() ;

************************************

Dom concept :

	function change1()
	{
		var x = document.getElementById('p1') ;
		x.style.color = "red" ;
		x.style.fontSize = "30px" ;
 	}

	<p id="p1"> I am going to change </p>
	<button onclick="change1()">change property of the paragraph</button>
	--------------------------------------------------------------------
 	function change2()
	{
		var x = document.getElementsByTagName('p') ;
		x[ 0 ].style.background = "green" ;
		x[ 1 ].style.background = "green" ;
 	}

	<p>one</p>
	<p>two</p>
	<button onclick="change2()">change background color</button>
	----------------------------------------------------------------------
 	function insert()
	{
		var val = document.getElementById('table').insertRow( 0 ) ;
		var a = val.insertCell( 0 ) ;
		var b = val.insertCell( 1 ) ;
		a.innerHTML = " New " ;
		b.innerHTML = " New " ;
	}

	<table id="table" border="1" >
		<tr>
			<td> old </td>
			<td> old </td>
		</tr>
	</table>

	<button onclick="insert()" > Insert Row </button>
	-----------------------------------------------------------------------

	function randomImg()
	{
		var arr = [ "1.jpg" , "2.jpg" ] ;
      		var rnd = Math.floor( Math.random() * arr.length ) ;
     		document.write( '<img src=" '+ arr[rnd] +' " />' ) ;
	}
	<button onclick="randomImg()" > Click for magic !! </button>
	-----------------------------------------------------------------------


	var arr = document.getElementsByTagName( 'strong' ) ;
	function highlight()
	{
		for( var i = 0 ; i < arr.length ; i ++ )
		{
			arr[ i ].style.color = "green" ;
		}
	}

	function normal()
	{
		for( var i = 0 ; i < arr.length ; i ++ )
		{
			arr[ i ].style.color = "black" ;
		}
	}

	<p >
		<strong > My </strong> name is <strong> Mujahidul Islam </strong> maruf .
	</p>
	<p >
	 	<a href="" onmouseover= "highlight()" onmouseout="normal()" > Hehehehe magic!!!!!! </a>
	</p>
	
	--------------------------------------------------------------------------------------------

	function getsize()
	{
		var x = window.innerWidth ;
		var y = window.innerHeight ;
		document.getElementById( 'p4' ).innerHTML = " width " + x + " Height " + y ;
	}

	<body onload="getsize()" onresize="getsize()" >

	<p id="p4" ></p>

	</body>
	----------------------------------------------------------------------------------------