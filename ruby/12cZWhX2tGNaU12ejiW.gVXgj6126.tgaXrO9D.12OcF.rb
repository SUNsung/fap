
        
        
  # Returns a collection of found hidden inputs
  #
  # @return [Array<Hash>] An array, each element represents a form that contains a hash of found hidden inputs
  #  * 'name' [String] The hidden input's original name. The value is the hidden input's original value.
  # @example
  #  res = send_request_cgi('uri'=>'/')
  #  inputs = res.get_hidden_inputs
  #  session_id = inputs[0]['sessionid'] # The first form's 'sessionid' hidden input
  def get_hidden_inputs
    forms = []
    noko = get_html_document
    noko.search('form').each_entry do |form|
      found_inputs = {}
      form.search('input').each_entry do |input|
        input_type = input.attributes['type'] ? input.attributes['type'].value : ''
        next if input_type !~ /hidden/i
    
    protected
    
              # Retrieves the element instance fields
          #
          # @return [Array]
          def attributes
            self.class.attributes
          end
    
          ObjectSpace.each_object(File) do |fp|
        begin
          if !fp.closed? && fp.stat.file? && fp.sync && (fp.fcntl(Fcntl::F_GETFL) & append_flags) == append_flags
            to_reopen << fp
          end
        rescue IOError, Errno::EBADF
        end
      end
    
      module TestingClient
    def raw_push(payloads)
      if Sidekiq::Testing.fake?
        payloads.each do |job|
          job = Sidekiq.load_json(Sidekiq.dump_json(job))
          job.merge!('enqueued_at' => Time.now.to_f) unless job['at']
          Queues.push(job['queue'], job['class'], job)
        end
        true
      elsif Sidekiq::Testing.inline?
        payloads.each do |job|
          klass = Sidekiq::Testing.constantize(job['class'])
          job['id'] ||= SecureRandom.hex(12)
          job_hash = Sidekiq.load_json(Sidekiq.dump_json(job))
          klass.process_job(job_hash)
        end
        true
      else
        super
      end
    end
  end
    
        def request
      @request ||= ::Rack::Request.new(env)
    end
    
        def route(method, path, &block)
      @routes ||= { GET => [], POST => [], PUT => [], PATCH => [], DELETE => [], HEAD => [] }
    
        def add_active_record_callbacks
      name = @name
      @klass.send(:after_save) { send(name).send(:save) }
      @klass.send(:before_destroy) { send(name).send(:queue_all_for_delete) }
      if @klass.respond_to?(:after_commit)
        @klass.send(:after_commit, on: :destroy) do
          send(name).send(:flush_deletes)
        end
      else
        @klass.send(:after_destroy) { send(name).send(:flush_deletes) }
      end
    end
    
        # Returns an extension based on the content type. e.g. 'jpeg' for
    # 'image/jpeg'. If the style has a specified format, it will override the
    # content-type detection.
    #
    # Each mime type generally has multiple extensions associated with it, so
    # if the extension from the original filename is one of these extensions,
    # that extension is used, otherwise, the first in the list is used.
    def content_type_extension attachment, style_name
      mime_type = MIME::Types[attachment.content_type]
      extensions_for_mime_type = unless mime_type.empty?
        mime_type.first.extensions
      else
        []
      end