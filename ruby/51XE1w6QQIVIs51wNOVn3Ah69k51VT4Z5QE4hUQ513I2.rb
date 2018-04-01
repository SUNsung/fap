
        
            # Determine the available cores in host system.
    # This mostly helps on linux, but it couldn't hurt on MacOSX.
    if RUBY_PLATFORM =~ /linux/
      cpu_count = `nproc`.to_i
    elsif RUBY_PLATFORM =~ /darwin/
      cpu_count = `sysctl -n hw.ncpu`.to_i
    end
    
    end

    
          raise Discourse::InvalidParameters.new(:to_address) unless args[:to_address].present?
    
        def to_json
      JSON.generate(as_json)
    end
  end
end

    
            %w(modals dropdowns scrollspy tabs tooltips popovers alerts buttons collapse carousel affix).each do |dom_id|
          css('##{dom_id}-options + p + div tbody td:first-child').each do |node|
            name = node.content.strip
            id = node.parent['id'] = '#{dom_id}-#{name.parameterize}-option'
            name.prepend '#{dom_id.singularize.titleize}: '
            name << ' (option)'
            entries << [name, id]
          end
    
          def get_type
        case slug
        when 'api'
          'Reference'
        when 'configuration'
          'Reference: Configuration'
        when 'stpl'
          'Reference: SimpleTemplate'
        when 'plugindev'
          'Reference: Plugin'
        else
          'Manual'
        end
      end
    
            doc
      end
    end
  end
end

    
      def_delegators :@logger, :log, :log_status, :log_processing, :log_transform, :log_file_info, :log_processed, :log_http_get_file, :log_http_get_files, :silence_log
    
      # Configure static asset server for tests with Cache-Control for performance.
  if config.respond_to?(:serve_static_files)
    # rails >= 4.2
    config.serve_static_files = true
  elsif config.respond_to?(:serve_static_assets)
    # rails < 4.2
    config.serve_static_assets = true
  end
  config.static_cache_control = 'public, max-age=3600'
    
            sets = config.sources_manager.aggregate.all_sets
        sets.each { |set| UI.pod(set, :name_and_version) }
        UI.puts '\n#{sets.count} pods were found'
      end
    
            def initialize(node, variable)
          unless VARIABLE_ASSIGNMENT_TYPES.include?(node.type)
            raise ArgumentError,
                  'Node type must be any of #{VARIABLE_ASSIGNMENT_TYPES}, ' \
                  'passed #{node.type}'
          end
    
            MSG = 'Use only a single space inside array percent literal.'.freeze
        MULTIPLE_SPACES_BETWEEN_ITEMS_REGEX =
          /(?:[\S&&[^\\]](?:\\ )*)( {2,})(?=\S)/
    
            def literal_at_start?(regex_str)
          # is this regexp 'literal' in the sense of only matching literal
          # chars, rather than using metachars like . and * and so on?
          # also, is it anchored at the start of the string?
          # (tricky: \s, \d, and so on are metacharacters, but other characters
          #  escaped with a slash are just literals. LITERAL_REGEX takes all
          #  that into account.)
          regex_str =~ /\A\\A(?:#{LITERAL_REGEX})+\z/
        end