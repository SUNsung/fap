
        
        # Just a slash
Benchmark.ips do |x|
  path = '/'
  x.report('pre_pr:#{path}')    { pre_pr(path) }
  x.report('pr:#{path}')        { pr(path) }
  x.report('envygeeks:#{path}') { pr(path) }
  x.compare!
end
    
    if pathutil_relative == native_relative
  Benchmark.ips do |x|
    x.report('pathutil') { pathutil_relative }
    x.report('native')   { native_relative }
    x.compare!
  end
else
  print 'PATHUTIL: '
  puts pathutil_relative
  print 'NATIVE:   '
  puts native_relative
end

    
    $LOAD_PATH.unshift File.expand_path('../lib', __dir__)
    
                Jekyll.logger.debug 'LiveReload:', 'Reloading #{p.url}'
            Jekyll.logger.debug '', json_message
            @websockets.each { |ws| ws.send(json_message) }
          end
        end
    
          def perform(start_id, stop_id)
        update = '
          latest_merge_request_diff_id = (
            SELECT MAX(id)
            FROM merge_request_diffs
            WHERE merge_requests.id = merge_request_diffs.merge_request_id
          )'.squish
    
            def sidekiq_worker_class
          ImportDiffNoteWorker
        end
    
              lfs_objects.each do |object|
            yield object
          end
        rescue StandardError => e
          Rails.logger.error('The Lfs import process failed. #{e.message}')
        end
      end
    end
  end
end

    
          # Returns the identifier to use for cache keys.
      #
      # For issues and pull requests this will be 'Issue' or 'MergeRequest'
      # respectively. For diff notes this will return 'MergeRequest', for
      # regular notes it will either return 'Issue' or 'MergeRequest' depending
      # on what type of object the note belongs to.
      def cache_key_type
        if object.respond_to?(:issuable_type)
          object.issuable_type
        elsif object.respond_to?(:noteable_type)
          object.noteable_type
        else
          raise(
            TypeError,
            'Instances of #{object.class} are not supported'
          )
        end
      end
    
            def line_code
          diff_line = Gitlab::Diff::Parser.new.parse(diff_hunk.lines).to_a.last
    
              # Assignees are optional so we only convert it from a Hash if one was
          # set.
          hash[:assignee] &&= Representation::User
            .from_json_hash(hash[:assignee])
    
        def initialize(machine, guests, capabilities)
      @capabilities = capabilities
      @guests       = guests
      @machine      = machine
    end
    
            # Initializes the system. Any subclasses MUST make sure this
        # method is called on the parent. Therefore, if a subclass overrides
        # `initialize`, then you must call `super`.
        def initialize(vm)
          @vm = vm
        end
    
    require 'vagrant/util/safe_puts'
    
        # Converts this registry to a hash
    def to_hash
      result = {}
      self.each do |key, value|
        result[key] = value
      end
    
      def page_requested?
    params[:page] == 'true'
  end
    
        private
    
          redirect_to admin_report_path(@report)
    end
    
      def set_web_push_subscription
    @web_subscription = ::Web::PushSubscription.find_by(access_token_id: doorkeeper_token.id)
  end
    
        render json: web_subscription, serializer: REST::WebPushSubscriptionSerializer
  end