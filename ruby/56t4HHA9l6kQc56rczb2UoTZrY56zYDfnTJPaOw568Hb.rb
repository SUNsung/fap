
        
          private
    
          ENV[new_initial_revision_var] ||= ENV[old_initial_revision_var]
      ENV[new_current_revision_var] ||= ENV[old_current_revision_var]
    
    if Encoding.default_external != Encoding::UTF_8
    
      def prefix_from_bin(bin_name)
    unless (path = `which #{bin_name}`.strip).empty?
      File.dirname(File.dirname(path))
    end
  end
    
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

    
    module Pod
  class Command
    class Env < Command
      self.summary = 'Display pod environment'
      self.description = 'Display pod environment.'