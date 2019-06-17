
        
            SPLIT_INTS = /(?<=\d)\.(?=[\s\d])/.freeze
    
        attr_reader :filters
    
        def type=(value)
      @type = value.try :strip
    end
    
        def error?
      code == 0 || code != 404 && code != 403 && code >= 400 && code <= 599
    end
    
            css('h1 + code').each do |node|
          node.before('<p></p>')
          while node.next_element.name == 'code'
            node.previous_element << ' '
            node.previous_element << node.next_element
          end
          node.previous_element.prepend_child(node)
        end
    
          def include_default_entry?
        INDEX.add?([name, type].join(';')) ? true : false # ¯\_(ツ)_/¯
      end
    
    post '/' do
  connections.each { |out| out << 'data: #{params[:msg]}\n\n' }
  204 # response without entity body
end
    
          def has_vector?(request, headers)
        return false if request.xhr?
        return false if options[:allow_if] && options[:allow_if].call(request.env)
        return false unless headers['Content-Type'].to_s.split(';', 2).first =~ /^\s*application\/json\s*$/
        origin(request.env).nil? and referrer(request.env) != request.host
      end
    
        it 'Returns nil when Referer header is missing and allow_empty_referrer is false' do
      env = {'HTTP_HOST' => 'foo.com'}
      subject.options[:allow_empty_referrer] = false
      expect(subject.referrer(env)).to be_nil
    end
    
          run DummyApp
    end
    
      # Prepend all log lines with the following tags.
  config.log_tags = [ :request_id ]