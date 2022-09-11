# Shell quoting util

This tool was made to handle a specific edge case in shell scripting.

When you want to supply a command to some tool as a shell string, but you only have it as already expanded array.

This doesn't work as expected because `$@` is expanded, ending up as multiple arguments to `su`:

```
su -c "$@"
```

This does work as expected:

```
su -c "$(sh_quote "$@")"
```

Because all arguments must be relayed, `-h` or `--help` cannot be taken into account, so there is no helptext.

When no arguments are given, it returns without producing any output.

# Error messages

None. This program cannot fail.

If stdout is not writable, no sensible output will be generated.

If `$0` is not set, no output will be generated.

# Building

Run `make`.

# Testing

Run `make test`

The test script can also run on arbitrary programs: `./run_sh_quote /path/to/other_program`.
