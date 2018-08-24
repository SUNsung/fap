
        
                def self.disabled_via_active_directory?(dn, adapter)
          adapter.dn_matches_filter?(dn, AD_USER_DISABLED)
        end
    
            def value_color
          case @status
          when 95..100 then STATUS_COLOR[:good]
          when 90..95 then STATUS_COLOR[:acceptable]
          when 75..90 then STATUS_COLOR[:medium]
          when 0..75 then STATUS_COLOR[:low]
          else
            STATUS_COLOR[:unknown]
          end
        end
      end
    end
  end
end

    
          def untrusted_keys
        keys - @trusted_keys
      end
    
      // writing
  $('form').on('submit',function(e) {
    $.post('/', {msg: '<%= user %>: ' + $('#msg').val()});
    $('#msg').val(''); $('#msg').focus();
    e.preventDefault();
  });
</script>
    
        def frame_class(frame)
      if frame.filename =~ %r{lib/sinatra.*\.rb}
        'framework'
      elsif (defined?(Gem) && frame.filename.include?(Gem.dir)) ||
            frame.filename =~ %r{/bin/(\w+)\z}
        'system'
      else
        'app'
      end
    end
    
      # set version
  content.sub! /(s\.version.*=\s+).*/, '\\1\'#{Rack::Protection::VERSION}\''
    
          def html?(headers)
        return false unless header = headers.detect { |k,v| k.downcase == 'content-type' }
        options[:html_types].include? header.last[/^\w+\/\w+/]
      end
    end
  end
end

    
          def csp_policy
        directives = []
    
          def empty_cookie(host, path)
        {:value => '', :domain => host, :path => path, :expires => Time.at(0)}
      end