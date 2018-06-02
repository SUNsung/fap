          @registered.each do |plugin|
            result += plugin.components.action_hooks[Plugin::ALL_ACTIONS]
            result += plugin.components.action_hooks[hook_name]
          end
    
                # Register the handler if this is our first callback.
            Signal.trap('INT') { fire_callbacks } if registered.length == 1
          end
        end
    
                  # An IO::WaitReadable means there may be more IO but this
              # IO object is not ready to be read from yet. No problem,
              # we read as much as we can, so we break.
              breakable = true
            elsif e.is_a?(Errno::EAGAIN)
              # Otherwise, we just look for the EAGAIN error which should be
              # all that IO::WaitReadable does in Ruby 1.9.
              breakable = true
            end
    
        i0 = index
    r1 = _nt_bareword
    if r1
      r0 = r1
    else
      r2 = _nt_string
      if r2
        r0 = r2
      else
        r3 = _nt_number
        if r3
          r0 = r3
        else
          r4 = _nt_array
          if r4
            r0 = r4
          else
            r5 = _nt_hash
            if r5
              r0 = r5
            else
              @index = i0
              r0 = nil
            end
          end
        end
      end
    end