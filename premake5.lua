local dir_pair = {
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
}

newoption({
	trigger = "libwww-ssl",
	value = "toggle",
	description = "Use OpenSSL or not",
	allowed = {
		{"yes", "Use OpenSSL"},
		{"no", "Don't use OpenSSL"}
	},
	default = "yes"
})

if _OPTIONS["libwww-ssl"] == "yes" then
	table.insert(dir_pair, "ssl")
end

project("www")
	kind("StaticLib")
	targetdir("lib/%{cfg.buildcfg}/%{cfg.platform}")
for _,v in ipairs(dir_pair) do
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
