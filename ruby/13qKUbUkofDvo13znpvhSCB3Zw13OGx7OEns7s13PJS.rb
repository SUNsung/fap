
        
        class Converter
  extend Forwardable
  include Network
  include LessConversion
  include JsConversion
  include FontsConversion
    
        def log_status(status)
      puts bold status
    end
    
          spec['main'] =
          find_files.(File.join(Bootstrap.stylesheets_path, '_bootstrap.scss')) +
          find_files.(Bootstrap.fonts_path) +
          %w(assets/javascripts/bootstrap.js)
    
        def miscellaneous(opts)
      opts.separator ''
      opts.separator 'Miscellaneous:'
    
      require 'sass/plugin/rack'
  class Sass::Plugin::MerbBootLoader < Merb::BootLoader
    after Merb::BootLoader::RackUpApplication
    
            on roles(target_roles) do
          unless test '[ -f #{file.to_s.shellescape} ]'
            info 'Uploading #{prerequisite_file} to #{file}'
            upload! File.open(prerequisite_file), file
          end
        end
      end
    end
    
      it 'provides a --format option which enables the choice of output formatting'
    
              @assignments = []
          @references = []
          @captured_by_block = false
        end
    
                  add_offense(condition)
            end
    
                end
          RUBY
        end
    
              def plugins
            @plugins ||= find_plugins_gem_specs.map do |spec|
              { :name => spec.name, :version => spec.version.to_s }
            end.sort_by do |spec|
              spec[:name]
            end
          end
    
      def _nt_not_in_operator
    start_index = index
    if node_cache[:not_in_operator].has_key?(index)
      cached = node_cache[:not_in_operator][index]
      if cached
        cached = SyntaxNode.new(input, index...(index + 1)) if cached == true
        @index = cached.interval.end
      end
      return cached
    end