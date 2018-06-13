
        
            def create_event(event)
      return super unless dry_run?
      if can_create_events?
        event = build_event(event)
        @dry_run_results[:events] << event.payload
        event
      else
        error 'This Agent cannot create events!'
      end
    end
  end
end

    
      def evernote_consumer_key
    (config = Devise.omniauth_configs[:evernote]) && config.strategy.consumer_key
  end
    
      def set_table_sort(sort_options)
    valid_sorts = sort_options[:sorts] or raise ArgumentError.new('You must specify :sorts as an array of valid sort attributes.')
    default = sort_options[:default] || { valid_sorts.first.to_sym => :desc }
    
        respond_to do |format|
      format.html { redirect_back events_path, notice: 'Event deleted.' }
      format.json { head :no_content }
    end
  end
    
      def index
    set_table_sort sorts: %w[provider name global], default: { provider: :asc }
    
            when :err
          case s[:last]
            when :pass
              # Oops got a -ERR after a pass so its crap ignore the pass
              # But report it, might be helpfull for guessing :-)
    
          # There is only one pattern per run to test
      matched = nil
      matches = nil
    
    meterp.core.use('Stdapi')
    
            def initialize(name, declaration_node, scope)
          unless VARIABLE_DECLARATION_TYPES.include?(declaration_node.type)
            raise ArgumentError,
                  'Node type must be any of #{VARIABLE_DECLARATION_TYPES}, ' \
                  'passed #{declaration_node.type}'
          end
    
                previous.push(when_node.conditions)
          end
        end
    
              optarg_positions.each do |optarg_position|
            # there can only be one group of optional arguments
            break if optarg_position > arg_positions.max
    
              annotated_source.each_line do |source_line|
            if source_line =~ ANNOTATION_PATTERN
              annotations << [source.size, source_line]
            else
              source << source_line
            end
          end
    
              def plugins
            @plugins ||= find_plugins_gem_specs.map do |spec|
              { :name => spec.name, :version => spec.version.to_s }
            end.sort_by do |spec|
              spec[:name]
            end
          end
    
      def _nt_selector
    start_index = index
    if node_cache[:selector].has_key?(index)
      cached = node_cache[:selector][index]
      if cached
        cached = SyntaxNode.new(input, index...(index + 1)) if cached == true
        @index = cached.interval.end
      end
      return cached
    end