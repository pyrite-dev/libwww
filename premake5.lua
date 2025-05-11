project("www")
	kind("StaticLib")
	targetdir("lib/%{cfg.buildcfg}/%{cfg.platform}")
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
	files("src/" .. v .. "/*.c")
end
for _,v in ipairs({
	"md5"
}) do
	files("modules/" .. v .. "/*.c")
end
	includedirs("include")
	includedirs("modules/md5")
	defines("HAVE_CONFIG_H")
