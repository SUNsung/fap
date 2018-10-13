
        
        require 'active_support/core_ext/string/output_safety'
    
            def initialize(object_name, method_name, template_object, checked_value, unchecked_value, options)
          @checked_value   = checked_value
          @unchecked_value = unchecked_value
          super(object_name, method_name, template_object, options)
        end
    
              def field_type
            self.class.field_type
          end
      end
    end
  end
end

    
      # Clean a top-level (bin, sbin, lib) directory, recursively, by fixing file
  # permissions and removing .la files, unless the files (or parent
  # directories) are protected by skip_clean.
  #
  # bin and sbin should not have any subdirectories; if either do that is
  # caught as an audit warning
  #
  # lib may have a large directory tree (see Erlang for instance), and
  # clean_dir applies cleaning rules to the entire tree
  def clean_dir(d)
    d.find do |path|
      path.extend(ObserverPathnameExtension)
    
        cmd = HOMEBREW_INTERNAL_COMMAND_ALIASES.fetch(ARGV.first, ARGV.first)
    
          return unless user == 'caskroom'
    
          Sass::Plugin.watch(files)
    end
    # @comment
    #   rubocop:enable MethodLength
    
    group :development do
  cp_gem 'claide',                'CLAide'
  cp_gem 'cocoapods-core',        'Core'
  cp_gem 'cocoapods-deintegrate', 'cocoapods-deintegrate'
  cp_gem 'cocoapods-downloader',  'cocoapods-downloader'
  cp_gem 'cocoapods-plugins',     'cocoapods-plugins'
  cp_gem 'cocoapods-search',      'cocoapods-search'
  cp_gem 'cocoapods-stats',       'cocoapods-stats'
  cp_gem 'cocoapods-trunk',       'cocoapods-trunk'
  cp_gem 'cocoapods-try',         'cocoapods-try'
  cp_gem 'molinillo',             'Molinillo'
  cp_gem 'nanaimo',               'Nanaimo'
  cp_gem 'xcodeproj',             'Xcodeproj'
    
    (allow file-write*
  (literal
    '/dev/dtracehelper'
    '/dev/null'
  )
  (regex
    #'^<%= Pod::Config.instance.project_root %>'
    #'^<%= Pod::Config.instance.repos_dir %>'
    #'^/Users/[^.]+/Library/Caches/CocoaPods/*'
    #'^/dev/tty'
    #'^/private/var'
  )
)
    
    # It is very likely that we'll need these and as some of those paths will atm
# result in a I18n deprecation warning, we load those here now so that we can
# get rid of that warning.
require 'active_support/core_ext/string/strip'
require 'active_support/core_ext/string/inflections'
require 'active_support/core_ext/array/conversions'
# TODO: check what this actually does by the time we're going to add support for
# other locales.
require 'i18n'
if I18n.respond_to?(:enforce_available_locales=)
  I18n.enforce_available_locales = false
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
