[![Build Status](https://travis-ci.org/shammellee/okcli.svg)][travis_ci_url]

![okcli](src/img/okcli_logo.png)

View your [OkCupid][okcupid_url] stats from the command line

![screenshot](src/img/screenshot.png)

* **Author** [Shammel Lee][author_url]
* **Start Date** Sat Aug 2 17:53:37 EDT 2014

# Dependencies
* [awk][awk_url] (available on most unix-based machines, run `$ which awk` to test if awk is available)
* [curl][curl_url]

# Building okcli
Run the following command…

```bash
$ make
```

# Configuring okcli
Run the following command and follow the prompts…

```bash
$ make config
```

Then add the following line to your shell profile file…

```bash
source ~/.okcli
export PATH="$PATH:$OKCLI_PATH"
```

# Running okcli
Run the following command in a new terminal window…

```bash
$ ok
```

[travis_ci_url]: https://travis-ci.org/shammellee/okcli
[author_url]: https://github.com/shammellee
[okcupid_url]: https://okcupid.com
[curl_url]: http://curl.haxx.se
[awk_url]: https://en.wikipedia.org/wiki/AWK
