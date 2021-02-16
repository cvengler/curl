![curl logo](https://curl.se/logo/curl-logo.svg)

This document lists all command line options present in curl, together with
exact information about the first curl version that supports it. The options
are sorted alphabetically on the long name.

Short | Long                               | Introduced
------|------------------------------------|-----------
      | --abstract-unix-socket             | 7.53.0
      | --alt-svc                          | 7.64.1
      | --anyauth                          | 7.10.6
-a    | --append                           | 4.8
      | --aws-sigv4                        | 7.75.0
      | --basic                            | 7.10.6
      | --cacert                           | 7.5
      | --capath                           | 7.9.8
-E    | --cert                             | 5.0
      | --cert-status                      | 7.41.0
      | --cert-type                        | 7.9.3
      | --ciphers                          | 7.9
      | --compressed                       | 7.10
      | --compressed-ssh                   | 7.56.0
-K    | --config                           | 4.10
      | --connect-timeout                  | 7.7
      | --connect-to                       | 7.49.0
-C    | --continue-at                      | 4.8
-b    | --cookie                           | 4.9
-c    | --cookie-jar                       | 7.9
      | --create-dirs                      | 7.10.3
      | --create-file-mode                 | 7.75.0
      | --crlf                             | 5.7
      | --crlfile                          | 7.19.7
      | --curves                           | 7.73.0
-d    | --data                             | 4.0
      | --data-ascii                       | 7.2
      | --data-binary                      | 7.2
      | --data-raw                         | 7.43.0
      | --data-urlencode                   | 7.18.0
      | --delegation                       | 7.22.0
      | --digest                           | 7.10.6
-q    | --disable                          | 5.0
      | --disable-eprt                     | 7.10.5
      | --disable-epsv                     | 7.9.2
      | --disallow-username-in-url         | 7.61.0
      | --dns-interface                    | 7.33.0
      | --dns-ipv4-addr                    | 7.33.0
      | --dns-ipv6-addr                    | 7.33.0
      | --dns-servers                      | 7.33.0
      | --doh-cert-status                  | 7.76.0
      | --doh-insecure                     | 7.76.0
      | --doh-url                          | 7.62.0
-D    | --dump-header                      | 5.7
      | --egd-file                         | 7.7
      | --engine                           | 7.9.3
      | --etag-compare                     | 7.68.0
      | --etag-save                        | 7.68.0
      | --expect100-timeout                | 7.47.0
-f    | --fail                             | 4.0
      | --fail-early                       | 7.52.0
      | --fail-with-body                   | 7.76.0
      | --false-start                      | 7.42.0
-F    | --form                             | 5.0
      | --form-string                      | 7.13.2
      | --ftp-account                      | 7.13.0
      | --ftp-alternative-to-user          | 7.15.5
      | --ftp-create-dirs                  | 7.10.7
      | --ftp-method                       | 7.15.1
      | --ftp-pasv                         | 7.11.0
-P    | --ftp-port                         | 4.0
      | --ftp-pret                         | 7.20.0
      | --ftp-skip-pasv-ip                 | 7.14.2
      | --ftp-ssl-ccc                      | 7.16.1
      | --ftp-ssl-ccc-mode                 | 7.16.2
      | --ftp-ssl-control                  | 7.16.0
-G    | --get                              | 7.8.1
-g    | --globoff                          | 7.6
      | --happy-eyeballs-timeout-ms        | 7.59.0
      | --haproxy-protocol                 | 7.60.0
-I    | --head                             | 4.0
-H    | --header                           | 5.0
-h    | --help                             | 4.0
      | --hostpubmd5                       | 7.17.1
      | --hsts                             | 7.74.0
      | --http0.9                          | 7.64.0
-0    | --http1.0                          | 7.9.1
      | --http1.1                          | 7.33.0
      | --http2                            | 7.33.0
      | --http2-prior-knowledge            | 7.49.0
      | --http3                            | 7.66.0
      | --ignore-content-length            | 7.14.1
-i    | --include                          | 4.8
-k    | --insecure                         | 7.10
      | --interface                        | 7.3
-4    | --ipv4                             | 7.10.8
-6    | --ipv6                             | 7.10.8
-j    | --junk-session-cookies             | 7.9.7
      | --keepalive-time                   | 7.18.0
      | --key                              | 7.9.3
      | --key-type                         | 7.9.3
      | --krb                              | 7.3
      | --libcurl                          | 7.16.1
      | --limit-rate                       | 7.10
-l    | --list-only                        | 4.0
      | --local-port                       | 7.15.2
      | --location                         | 4.9
      | --location-trusted                 | 7.10.4
      | --login-options                    | 7.34.0
      | --mail-auth                        | 7.25.0
      | --mail-from                        | 7.20.0
      | --mail-rcpt                        | 7.20.0
      | --mail-rcpt-allowfails             | 7.69.0
-M    | --manual                           | 5.2
      | --max-filesize                     | 7.10.8
      | --max-redirs                       | 7.5
-m    | --max-time                         | 4.0
      | --metalink                         | 7.27.0
      | --negotiate                        | 7.10.6
-n    | --netrc                            | 4.6
      | --netrc-file                       | 7.21.5
      | --netrc-optional                   | 7.9.8
-:    | --next                             | 7.36.0
      | --no-alpn                          | 7.36.0
-N    | --no-buffer                        | 6.5
      | --no-keepalive                     | 7.18.0
      | --no-npn                           | 7.36.0
      | --no-progress-meter                | 7.67.0
      | --no-sessionid                     | 7.16.0
      | --noproxy                          | 7.19.4
      | --ntlm                             | 7.10.6
      | --ntlm-wb                          | 7.22.0
      | --oauth2-bearer                    | 7.33.0
-o    | --output                           | 4.0
      | --output-dir                       | 7.73.0
-Z    | --parallel                         | 7.66.0
      | --parallel-immediate               | 7.68.0
      | --parallel-max                     | 7.66.0
      | --pass                             | 7.9.3
      | --path-as-is                       | 7.42.0
      | --pinnedpubkey                     | 7.39.0
      | --post301                          | 7.17.1
      | --post302                          | 7.19.1
      | --post303                          | 7.26.0
      | --preproxy                         | 7.52.0
-#    | --progress-bar                     | 5.10
      | --proto                            | 7.20.2
      | --proto-default                    | 7.45.0
      | --proto-redir                      | 7.20.2
-x    | --proxy                            | 4.0
      | --proxy-anyauth                    | 7.13.2
      | --proxy-basic                      | 7.12.0
      | --proxy-cacert                     | 7.52.0
      | --proxy-capath                     | 7.52.0
      | --proxy-cert                       | 7.52.0
      | --proxy-cert-type                  | 7.52.0
      | --proxy-ciphers                    | 7.52.0
      | --proxy-crlfile                    | 7.52.0
      | --proxy-digest                     | 7.12.0
      | --proxy-header                     | 7.37.0
      | --proxy-insecure                   | 7.52.0
      | --proxy-key                        | 7.52.0
      | --proxy-key-type                   | 7.52.0
      | --proxy-negotiate                  | 7.17.1
      | --proxy-ntlm                       | 7.10.7
      | --proxy-pass                       | 7.52.0
      | --proxy-pinnedpubkey               | 7.59.0
      | --proxy-service-name               | 7.43.0
      | --proxy-ssl-allow-beast            | 7.52.0
      | --proxy-tls13-ciphers              | 7.61.0
      | --proxy-tlsauthtype                | 7.52.0
      | --proxy-tlspassword                | 7.52.0
      | --proxy-tlsuser                    | 7.52.0
      | --proxy-tlsv1                      | 7.52.0
-U    | --proxy-user                       | 4.0
      | --proxy1.0                         | 7.19.4
-p    | --proxytunnel                      | 7.3
      | --pubkey                           | 7.16.2
-Q    | --quote                            | 5.3
      | --random-file                      | 7.7
-r    | --range                            | 4.0
      | --raw                              | 7.16.2
-e    | --referer                          | 4.0
-J    | --remote-header-name               | 7.20.0
-O    | --remote-name                      | 4.0
      | --remote-name-all                  | 7.19.0
-R    | --remote-time                      | 7.9
-X    | --request                          | 6.0
      | --request-target                   | 7.55.0
      | --resolve                          | 7.21.3
      | --retry                            | 7.12.3
      | --retry-all-errors                 | 7.71.0
      | --retry-connrefused                | 7.52.0
      | --retry-delay                      | 7.12.3
      | --retry-max-time                   | 7.12.3
      | --sasl-authzid                     | 7.66.0
      | --sasl-ir                          | 7.31.0
      | --service-name                     | 7.43.0
-S    | --show-error                       | 5.9
-s    | --silent                           | 4.0
      | --socks4                           | 7.15.2
      | --socks4a                          | 7.18.0
      | --socks5                           | 7.18.0
      | --socks5-basic                     | 7.55.0
      | --socks5-gssapi                    | 7.55.0
      | --socks5-gssapi-nec                | 7.19.4
      | --socks5-gssapi-service            | 7.19.4
      | --socks5-hostname                  | 7.18.0
-Y    | --speed-limit                      | 4.7
-y    | --speed-time                       | 4.7
      | --ssl                              | 7.20.0
      | --ssl-allow-beast                  | 7.25.0
      | --ssl-no-revoke                    | 7.44.0
      | --ssl-reqd                         | 7.20.0
      | --ssl-revoke-best-effort           | 7.70.0
-2    | --sslv2                            | 5.9
-3    | --sslv3                            | 5.9
      | --stderr                           | 6.2
      | --styled-output                    | 7.61.0
      | --suppress-connect-headers         | 7.54.0
      | --tcp-fastopen                     | 7.49.0
      | --tcp-nodelay                      | 7.11.2
-t    | --telnet-option                    | 7.7
      | --tftp-blksize                     | 7.20.0
      | --tftp-no-options                  | 7.48.0
-z    | --time-cond                        | 5.8
      | --tls-max                          | 7.54.0
      | --tls13-ciphers                    | 7.61.0
      | --tlsauthtype                      | 7.21.4
      | --tlspassword                      | 7.21.4
      | --tlsuser                          | 7.21.4
-1    | --tlsv1                            | 7.9.2
      | --tlsv1.0                          | 7.34.0
      | --tlsv1.1                          | 7.34.0
      | --tlsv1.2                          | 7.34.0
      | --tlsv1.3                          | 7.52.0
      | --tr-encoding                      | 7.21.6
      | --trace                            | 7.9.7
      | --trace-ascii                      | 7.9.7
      | --trace-time                       | 7.14.0
      | --unix-socket                      | 7.40.0
-T    | --upload-file                      | 4.0
      | --url                              | 7.5
-B    | --use-ascii                        | 5.0
-u    | --user                             | 4.0
-A    | --user-agent                       | 4.5.1
-v    | --verbose                          | 4.0
-V    | --version                          | 4.0
-w    | --write-out                        | 6.5
      | --xattr                            | 7.21.3
