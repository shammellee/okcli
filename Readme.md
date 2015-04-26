![okc](src/img/okc_logo.png)

view your [okcupid][okcupidURL] stats from the command line

![screenshot](src/img/screenshot.png)

* **Organization** [Karbon Industries][companyURL]
* **Author** [Shammel Lee][authorURL]
* **Start Date** Sat Aug 2 17:53:37 EDT 2014

[companyURL]: http://karbonindustri.es
[authorURL]: https://github.com/shammellee
[okcupidURL]: https://okcupid.com

# Building okc
	$ make

# Setting up okc

## Setting environment variables
	$ export OKC_USER=<username>
	$ export OKC_PASS=<password>
	$ export OKC_PATH=<okcPath> # absolute path excluding trailing forward slash

	# example
	$ export OKC_USER=okc_user
	$ export OKC_PASS=volcano123
	$ export OKC_PATH=/Users/gus/bin/okc # okc is the directory that contains the okc, okcd, and okcp files

### Adding okc to `$PATH` (optional but recommended)
	add okc's path to your PATH environment variable.
	this allows running okc without having to specify
	okc's path every time it is run

	this should have the same value as
	the OKC_PATH environment variable

	$ export PATH=$PATH:$OKC_PATH

## Running okc
	$ okc
