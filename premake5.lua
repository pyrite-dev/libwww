for _,v in ipairs({
	"app",
	"cache",
	"core",
	"dir",
	"file",
	"ftp",
	"gopher",
	"html",
	"http",
	"init",
	"mime",
	"mux",
	"news",
	"stream",
	"telnet",
	"trans",
	"utils"
}) do
	project("www" .. v)
		kind("StaticLib")
		files("src/" .. v .. "/*.c")
		includedirs("include")
		includedirs("modules/md5")
		targetdir("lib/%{cfg.buildcfg}/%{cfg.platform}")
		defines("HAVE_CONFIG_H")
end
for _,v in ipairs({
	"md5"
}) do
	project(v)
		kind("StaticLib")
		files("modules/" .. v .. "/*.c")
		targetdir("lib/%{cfg.buildcfg}/%{cfg.platform}")
end
