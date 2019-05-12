
        
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

    
        it 'accepts jsfiddle link with a / at the end' do
      jsfiddle_link = 'http://jsfiddle.net/link2twenty/v2kx9jcd/'
      expect do
        generate_new_liquid(jsfiddle_link)
      end.not_to raise_error
    end