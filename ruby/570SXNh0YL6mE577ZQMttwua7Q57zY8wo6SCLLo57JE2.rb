
        
          def cache_fragment(name)
    ApplicationSerializer.fragment_cache[name] ||= yield
  end
end

    
        begin
      raise '#{short_type} does not support dry-run' unless can_dry_run?
      readonly!
      @dry_run_started_at = Time.zone.now
      @dry_run_logger.info('Dry Run started')
      if event
        raise 'This agent cannot receive an event!' unless can_receive_events?
        receive([event])
      else
        check
      end
      @dry_run_logger.info('Dry Run finished')
    rescue => e
      @dry_run_logger.info('Dry Run failed')
      error 'Exception during dry-run. #{e.message}: #{e.backtrace.join('\n')}'
    end
    
        validate :validate_evernote_options
    
      def set_table_sort(sort_options)
    valid_sorts = sort_options[:sorts] or raise ArgumentError.new('You must specify :sorts as an array of valid sort attributes.')
    default = sort_options[:default] || { valid_sorts.first.to_sym => :desc }
    
            return if type.nil?
        return unless Hbc::Container.from_type(type).nil?
        raise 'invalid container type: #{type.inspect}'
      end
    
      def gistify_logs(f)
    files = load_logs(f.logs)
    build_time = f.logs.ctime
    timestamp = build_time.strftime('%Y-%m-%d_%H-%M-%S')
    
          respond_with do |format|
        format.html do
          gon.preloads[:pods] = pods_json
          gon.unchecked_count = Pod.unchecked.count
          gon.version_failed_count = Pod.version_failed.count
          gon.error_count = Pod.check_failed.count
    
        def assign_attributes(values)
      values.each do |k, v|
        public_send('#{k}=', v)
      end
    end