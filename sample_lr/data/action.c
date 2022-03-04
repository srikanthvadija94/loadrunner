Action()
{

	web_set_sockets_option("SSL_VERSION", "AUTO");

	web_add_auto_header("Sec-Fetch-Site", 
		"none");

	web_add_auto_header("Sec-Fetch-Mode", 
		"navigate");

	web_add_auto_header("Sec-Fetch-Dest", 
		"document");

	web_add_auto_header("Sec-Fetch-User", 
		"?1");

	web_add_auto_header("Upgrade-Insecure-Requests", 
		"1");

	web_add_auto_header("sec-ch-ua", 
		"\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"98\", \"Google Chrome\";v=\"98\"");

	web_add_auto_header("sec-ch-ua-mobile", 
		"?0");

	web_add_auto_header("sec-ch-ua-platform", 
		"\"Windows\"");

	web_url("demo.opencart.com", 
		"URL=https://demo.opencart.com/", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t1.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/catalog/view/javascript/font-awesome/fonts/fontawesome-webfont.woff2?v=4.7.0", "Referer=https://demo.opencart.com/catalog/view/javascript/font-awesome/css/font-awesome.min.css", ENDITEM, 
		LAST);

	/* 1.login */

	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");

	lr_think_time(33);

	web_link("Login", 
		"Text=Login", 
		"Snapshot=t2.inf", 
		LAST);

	/* 2.CredentialsPage */

	web_add_header("Origin", 
		"https://demo.opencart.com");

	web_submit_data("index.php", 
		"Action=https://demo.opencart.com/index.php?route=account/login", 
		"Method=POST", 
		"EncType=multipart/form-data", 
		"RecContentType=text/html", 
		"Referer=https://demo.opencart.com/index.php?route=account/login", 
		"Snapshot=t3.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=email", "Value=vadija.srikanth@gmail.com", ENDITEM, 
		"Name=password", "Value=demo.opencart", ENDITEM, 
		LAST);

	/* Tablets */

	web_revert_auto_header("Sec-Fetch-User");

	web_revert_auto_header("Upgrade-Insecure-Requests");

	lr_think_time(62);

	web_link("Tablets", 
		"Text=Tablets", 
		"Snapshot=t4.inf", 
		LAST);

	/* Laptops */

	web_add_auto_header("Sec-Fetch-User", 
		"?1");

	web_add_auto_header("Upgrade-Insecure-Requests", 
		"1");

	lr_think_time(23);

	web_link("Laptops & Notebooks", 
		"Text=Laptops & Notebooks", 
		"Snapshot=t5.inf", 
		LAST);

	/* Sign_Off */

	web_link("Logout", 
		"Text=Logout", 
		"Snapshot=t6.inf", 
		LAST);

	return 0;
}