
        
          def set_permission(permission_name, value)
    self.send('#{permission_name}=', value)
    save_and_refresh_staff_groups!
  end
    
        find_union(segments, Project).includes(:namespace).order_id_desc
  end
    
    module Vagrant
  module Plugin
    module V2
      # This class maintains a list of all the registered plugins as well
      # as provides methods that allow querying all registered components of
      # those plugins as a single unit.
      class Manager
        attr_reader :registered
    
    module VagrantPlugins
  module CommandBox
    module Command
      class Remove < Vagrant.plugin('2', :command)
        def execute
          options = {}
          options[:force] = false
    
      def display_normal_output
    display_items 'System libraries', @system_dylibs
    display_items 'Homebrew libraries', @brewed_dylibs
    display_items 'Indirect dependencies with linkage', @indirect_deps
    display_items 'Variable-referenced libraries', @variable_dylibs
    display_items 'Missing libraries', @broken_dylibs
    display_items 'Broken dependencies', @broken_deps
    display_items 'Undeclared dependencies with linkage', @undeclared_deps
    display_items 'Dependencies with no linkage', @unnecessary_deps
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

    
          private