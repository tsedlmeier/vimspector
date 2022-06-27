# vimspector
Usage with demo of Vim GDB Wrapper

## NVIM Integration 
add HUMAN/VSCODE like mappings (.config/nvim/doom_config.lua):
```
global_variables = {
  ['vimspector_enable_mappings'] = 'HUMAN',
},
```

## Keybindings

| Key          | Mapping                                       | Function
| ---          | ---                                           | ---
| `F5`         | `<Plug>VimspectorContinue`                    | When debugging, continue. Otherwise start debugging.
| `F3`         | `<Plug>VimspectorStop`                        | Stop debugging.
| `F4`         | `<Plug>VimspectorRestart`                     | Restart debugging with the same configuration.
| `F6`         | `<Plug>VimspectorPause`                       | Pause debuggee.
| `F9`         | `<Plug>VimspectorToggleBreakpoint`            | Toggle line breakpoint on the current line.
| `<leader>F9` | `<Plug>VimspectorToggleConditionalBreakpoint` | Toggle conditional line breakpoint or logpoint on the current line.
| `F8`         | `<Plug>VimspectorAddFunctionBreakpoint`       | Add a function breakpoint for the expression under cursor
| `<leader>F8` | `<Plug>VimspectorRunToCursor`                 | Run to Cursor
| `F10`        | `<Plug>VimspectorStepOver`                    | Step Over
| `F11`        | `<Plug>VimspectorStepInto`                    | Step Into
| `F12`        | `<Plug>VimspectorStepOut`                     | Step out of current function scope
