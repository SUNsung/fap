
        
        puts 'Deduping #{links.size} links...'
    
    With optional '-t <bundle-id>', silently test if a given app
is running, exiting with an error code if not.
    
            # Removes the specified cache
        #
        # @param [Array<Hash>] cache_descriptors
        #        An array of caches to remove, each specified with the same
        #        hash as cache_descriptors_per_pod especially :spec_file and :slug
        #
        def remove_caches(cache_descriptors)
          cache_descriptors.each do |desc|
            UI.message('Removing spec #{desc[:spec_file]} (v#{desc[:version]})') do
              FileUtils.rm(desc[:spec_file])
            end
            UI.message('Removing cache #{desc[:slug]}') do
              FileUtils.rm_rf(desc[:slug])
            end
          end
        end
    
          # @param  [[Xcodeproj::PBXTarget]] targets
      #         An array which always has a target as its first item
      #         and may optionally contain a second target as its test target
      #
      # @return [String] the text for the target module
      #
      def template_contents(path, prefix, fallback)
        if path.exist?
          path.read.chomp.lines.map { |line| '#{prefix}#{line}' }.join('\n')
        else
          '#{prefix}# #{fallback}'
        end
      end
    end
  end
end
