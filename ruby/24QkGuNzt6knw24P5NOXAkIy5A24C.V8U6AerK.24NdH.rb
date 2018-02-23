    render_response
  end
    
          # This deletes the block with the given key if it exists.
      def delete(key)
        key    = Regexp.quote(key)
        regexp = /^#\s*VAGRANT-BEGIN:\s*#{key}$.*^#\s*VAGRANT-END:\s*#{key}$\r?\n?/m
        @value.gsub!(regexp, '')
      end
    
      # Extract the form
  res = '<form'
  form.attributes.each do |attr|
    res << ' #{attr[0]}='#{attr[1].gsub(''', '')}''
  end
  res << '> '
    
          when :login_fail
        if(s[:user] and s[:pass])
          report_auth_info(s.merge({:active => false}))
          print_status('Failed FTP Login: #{s[:session]} >> #{s[:user]} / #{s[:pass]}')
    
          if(pkt.payload =~ self.sigs[k])
        matched = k
        matches = $1
      end
    
    $:.unshift(File.join(File.dirname(__FILE__), '..', '..', '..', 'lib'))
    
    # This is a completely hackish way to do this, and could break with future
# versions of the JDK.  Need to find a better way to use sun.security.tools.KeyTool
# and .JarSigner than modifying the source.  These rely on internal APIs that may
# change.
signer = Rjb::import('javaCompile.SignJar')
#clsKeyTool = Rjb::import('sun.security.tools.KeyTool')
#clsKeyTool = Rjb::import('sun.security.tools.KeyToolMSF')
#clsJarSigner = Rjb::import('javaCompile.SignJar.JarSignerMSF')
#clsJarSigner = Rjb::import('sun.security.tools.JarSigner')
#clsJarSigner = Rjb::import('sun.security.tools.JarSignerMSF')
    
            # Prints the list of specs & pod cache dirs for a single pod name.
        #
        # This output is valid YAML so it can be parsed with 3rd party tools
        #
        # @param [Array<Hash>] cache_descriptors
        #        The various infos about a pod cache. Keys are
        #        :spec_file, :version, :release and :slug
        #
        def print_pod_cache_infos(pod_name, cache_descriptors)
          UI.puts '#{pod_name}:'
          cache_descriptors.each do |desc|
            if @short_output
              [:spec_file, :slug].each { |k| desc[k] = desc[k].relative_path_from(@cache.root) }
            end
            UI.puts('  - Version: #{desc[:version]}')
            UI.puts('    Type:    #{pod_type(desc)}')
            UI.puts('    Spec:    #{desc[:spec_file]}')
            UI.puts('    Pod:     #{desc[:slug]}')
          end
        end
      end
    end
  end
end

    
            def stock_location_params
          params.require(:stock_location).permit(permitted_stock_location_attributes)
        end
      end
    end
  end
end
